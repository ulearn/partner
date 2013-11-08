<?php

function civicrm_smartgroup_views_query_alter(&$view, &$query) {
	
	//echo '<pre>';
	//print_r($query);
	
	//print_r($query);
	//$data['civicrm_group']['id']['filter']['handler'] = 'civicrm_smartgroup_handler_filter';
	
	if ($query->where[1]['conditions'][0]['field'] == 'civicrm_group.id' && $query->where[1]['conditions'][0]['operator'] == '=')
	{
		$group_id = $query->where[1]['conditions'][0]['value'];
		$new_count_query = db_select('civicrm_group_contact', 'civicrm_group_contact')
		  ->fields('civicrm_group_contact', array('group_id'))
		  ->condition('group_id',$group_id,'=');
		 
		$results = $new_count_query->execute()->fetchAll();
	}
	// In this will check with value is returned when we select the state 
    if ($query->where[1]['conditions'][0]['field'] == 'civicrm_group.id' && $query->where[1]['conditions'][0]['operator'] == '=' && empty($results)) 
	{
		
		  unset($query->table_queue['civicrm_group']);
		  unset($query->table_queue['civicrm_group_contact']);
		  $join = new views_join();
		  $join->table = 'civicrm_smartgroup_contact';
		  $join->left_table = 'civicrm_contact';// or wathever table you want to join with
		  $join->field = 'contact_id';
		  $join->left_field = 'id';// or wathever column you want to join with
		  $join->type = 'LEFT';// if you want another join type play with this value
		
		  // Do the actual join
		  $query->table_queue['civicrm_smartgroup_contact'] = array (
			'alias' => 'civicrm_smartgroup_contact',// I believe this is optional
			'table' => 'civicrm_smartgroup_contact',
			'relationship' => 'civicrm_contact',
			'join' => $join,
		  );
		  
		  $join = new views_join();
		  $join->table = 'civicrm_group';
		  $join->left_table = 'civicrm_smartgroup_contact';// or wathever table you want to join with
		  $join->field = 'id';
		  $join->left_field = 'group_id';// or wathever column you want to join with
		  $join->type = 'LEFT';// if you want another join type play with this value
		
		  // Do the actual join
		  $query->table_queue['civicrm_group'] = array (
			'alias' => 'civicrm_group',// I believe this is optional
			'table' => 'civicrm_group',
			'relationship' => 'civicrm_smartgroup_contact',
			'join' => $join,
		  );
		  
		  unset($query->where[1]['conditions'][0]['field']);
		  $query->where[1]['conditions'][0]['field'] = 'civicrm_smartgroup_contact.group_id';
		  
		 $view->query->groupby[0]['field'] = 'civicrm_contact.id';
	}
    
}


function civicrm_smartgroup_views_handlers() {
  
  return array(
  'info' => array(
      'path' => drupal_get_path('module', 'civicrm_smartgroup'),
    ),
    'handlers' => array(
      'civicrm_smartgroup_handler_filter' => array(
        'parent' => 'views_handler_filter_numeric',
      ),
    ),
  );
}