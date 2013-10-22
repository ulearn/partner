<?php
/**
 * @file
 * myaccommfeature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function myaccommfeature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'accomm_clone';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_relationship';
  $view->human_name = 'Accomm Clone';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Host Family Accounts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'display_name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'is_active' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'paid__89' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'end_date' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'nationality_48' => 'nationality_48',
    'relationship_type' => 'relationship_type',
    'contact_id_b' => 'contact_id_b',
    'is_active' => 'is_active',
    'host_room_prices_87' => 'host_room_prices_87',
    'paid__89' => 'paid__89',
    'allergies__diet_etc__81' => 'allergies__diet_etc__81',
    'membership_type' => 'membership_type',
    'start_date_1' => 'start_date_1',
    'end_date_1' => 'end_date_1',
    'flight_arrival_info_82' => 'flight_arrival_info_82',
    'flight_arrival_info_82_1' => 'flight_arrival_info_82_1',
    'flight_no__other_info_83' => 'flight_no__other_info_83',
    'passport_id_80' => 'passport_id_80',
    'start_date' => 'start_date',
    'end_date' => 'end_date',
    'php' => 'php',
    'php_1' => 'php_1',
    'expression' => 'expression',
    'display_name' => 'display_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'nationality_48' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'relationship_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'contact_id_b' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'is_active' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'host_room_prices_87' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'paid__89' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'allergies__diet_etc__81' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'membership_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'start_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'end_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'flight_arrival_info_82' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'flight_arrival_info_82_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'flight_no__other_info_83' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'passport_id_80' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['relationships']['contact_id_b']['id'] = 'contact_id_b';
  $handler->display->display_options['relationships']['contact_id_b']['table'] = 'civicrm_relationship';
  $handler->display->display_options['relationships']['contact_id_b']['field'] = 'contact_id_b';
  $handler->display->display_options['relationships']['contact_id_b']['relationship_type'] = '0';
  $handler->display->display_options['relationships']['contact_id_b']['relationship_state'] = 0;
  /* Relationship: CiviCRM Relationships: Contact ID A */
  $handler->display->display_options['relationships']['contact_id_a']['id'] = 'contact_id_a';
  $handler->display->display_options['relationships']['contact_id_a']['table'] = 'civicrm_relationship';
  $handler->display->display_options['relationships']['contact_id_a']['field'] = 'contact_id_a';
  $handler->display->display_options['relationships']['contact_id_a']['relationship_type'] = '0';
  $handler->display->display_options['relationships']['contact_id_a']['relationship_state'] = 0;
  /* Relationship: CiviCRM Phone Details: Contact ID */
  $handler->display->display_options['relationships']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id']['table'] = 'civicrm_phone';
  $handler->display->display_options['relationships']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id']['relationship'] = 'contact_id_a';
  /* Relationship: CiviCRM Contacts: Contribution Records */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['relationship'] = 'contact_id_a';
  /* Field: CiviCRM Relationships: Relationship ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Contacts: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['last_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Custom: Additional Details: Nationality */
  $handler->display->display_options['fields']['nationality_48']['id'] = 'nationality_48';
  $handler->display->display_options['fields']['nationality_48']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['nationality_48']['field'] = 'nationality_48';
  /* Field: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['fields']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['exclude'] = TRUE;
  /* Field: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['fields']['contact_id_b']['id'] = 'contact_id_b';
  $handler->display->display_options['fields']['contact_id_b']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['contact_id_b']['field'] = 'contact_id_b';
  $handler->display->display_options['fields']['contact_id_b']['exclude'] = TRUE;
  /* Field: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['label'] = 'Current / Past?';
  $handler->display->display_options['fields']['is_active']['exclude'] = TRUE;
  $handler->display->display_options['fields']['is_active']['type'] = 'custom';
  $handler->display->display_options['fields']['is_active']['type_custom_true'] = 'Current Student';
  $handler->display->display_options['fields']['is_active']['type_custom_false'] = 'Past Student';
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: CiviCRM Custom: Accomm Room Prices (Rel): Host Room Prices */
  $handler->display->display_options['fields']['host_room_prices_87']['id'] = 'host_room_prices_87';
  $handler->display->display_options['fields']['host_room_prices_87']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['fields']['host_room_prices_87']['field'] = 'host_room_prices_87';
  $handler->display->display_options['fields']['host_room_prices_87']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['host_room_prices_87']['exclude'] = TRUE;
  /* Field: CiviCRM Custom: Accomm Room Prices (Rel): Paid Host? */
  $handler->display->display_options['fields']['paid__89']['id'] = 'paid__89';
  $handler->display->display_options['fields']['paid__89']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['fields']['paid__89']['field'] = 'paid__89';
  $handler->display->display_options['fields']['paid__89']['exclude'] = TRUE;
  /* Field: CiviCRM Custom: Additional Details: Allergies / Diet etc. */
  $handler->display->display_options['fields']['allergies__diet_etc__81']['id'] = 'allergies__diet_etc__81';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['field'] = 'allergies__diet_etc__81';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['relationship'] = 'contact_id_b';
  /* Field: CiviCRM Custom: Additional Details: Flight Arrival Date & Time */
  $handler->display->display_options['fields']['flight_arrival_info_82']['id'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_arrival_info_82']['field'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['flight_arrival_info_82']['date_format'] = 'short';
  /* Field: CiviCRM Custom: Additional Details: Flight No & Other Info */
  $handler->display->display_options['fields']['flight_no__other_info_83']['id'] = 'flight_no__other_info_83';
  $handler->display->display_options['fields']['flight_no__other_info_83']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_no__other_info_83']['field'] = 'flight_no__other_info_83';
  $handler->display->display_options['fields']['flight_no__other_info_83']['relationship'] = 'contact_id_b';
  /* Field: CiviCRM Custom: Additional Details: Passport ID */
  $handler->display->display_options['fields']['passport_id_80']['id'] = 'passport_id_80';
  $handler->display->display_options['fields']['passport_id_80']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['passport_id_80']['field'] = 'passport_id_80';
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'contact_id_a';
  $handler->display->display_options['fields']['display_name']['label'] = 'Host / Apartment';
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Relationships: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Relationships: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date']['custom_date_format'] = 'd/m/y';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'No Nights';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$s_date = $row->start_date;
$e_date = $row->end_date;
$start_date = 0;
$end_date= 0;
if($s_date>0)
	$start_date = $s_date;
	
if($e_date>0)
	$end_date = $e_date;
$timeDiff = abs($start_date - $end_date);
$numberDays = $timeDiff/86400; 
$numberDays = intval($numberDays);

if($numberDays==1){
	echo $numberDays;
}elseif($numberDays>1){
	echo $numberDays;
}else{
	echo $numberDays;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '€ Wk Rm Price';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return $row->host_room_prices_87;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '€ Amount Due (Host)';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '[php]*[php_1]/7';
  /* Filter criterion: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['filters']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['value'] = array(
    16 => '16',
  );
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['relationship'] = 'contact_id_a';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Host Family Name';
  $handler->display->display_options['filters']['display_name']['expose']['description'] = 'Search Host Family (Display) Name';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = 'All';
  $handler->display->display_options['filters']['is_active']['exposed'] = TRUE;
  $handler->display->display_options['filters']['is_active']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['is_active']['expose']['label'] = 'Current / Past Student?';
  $handler->display->display_options['filters']['is_active']['expose']['description'] = 'True = Current';
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = 'is_active_op';
  $handler->display->display_options['filters']['is_active']['expose']['identifier'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CiviCRM Custom: Accomm Room Prices (Rel): Paid Host? */
  $handler->display->display_options['filters']['paid__89']['id'] = 'paid__89';
  $handler->display->display_options['filters']['paid__89']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['filters']['paid__89']['field'] = 'paid__89';
  $handler->display->display_options['filters']['paid__89']['value'] = 'All';
  $handler->display->display_options['filters']['paid__89']['exposed'] = TRUE;
  $handler->display->display_options['filters']['paid__89']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['paid__89']['expose']['label'] = 'Paid / Unpaid';
  $handler->display->display_options['filters']['paid__89']['expose']['description'] = 'True = Paid';
  $handler->display->display_options['filters']['paid__89']['expose']['operator'] = 'paid__89_op';
  $handler->display->display_options['filters']['paid__89']['expose']['identifier'] = 'paid__89';
  $handler->display->display_options['filters']['paid__89']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: End Date */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['operator'] = 'between';
  $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End Date From:';
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Host Family Accounts */
  $handler = $view->new_display('page', 'Host Family Accounts', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'display_name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'is_active' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'paid__89' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'end_date' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Relationships: Relationship ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['fields']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'contact_id_a';
  $handler->display->display_options['fields']['display_name']['label'] = 'Host / Apartment';
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['fields']['contact_id_b']['id'] = 'contact_id_b';
  $handler->display->display_options['fields']['contact_id_b']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['contact_id_b']['field'] = 'contact_id_b';
  $handler->display->display_options['fields']['contact_id_b']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Contacts: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['last_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['label'] = 'Current / Past?';
  $handler->display->display_options['fields']['is_active']['type'] = 'custom';
  $handler->display->display_options['fields']['is_active']['type_custom_true'] = 'Current Student';
  $handler->display->display_options['fields']['is_active']['type_custom_false'] = 'Past Student';
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: CiviCRM Relationships: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Relationships: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date']['custom_date_format'] = 'd/m/y';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'No Nights';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$s_date = $row->start_date;
$e_date = $row->end_date;
$start_date = 0;
$end_date= 0;
if($s_date>0)
	$start_date = $s_date;
	
if($e_date>0)
	$end_date = $e_date;
$timeDiff = abs($start_date - $end_date);
$numberDays = $timeDiff/86400; 
$numberDays = intval($numberDays);

if($numberDays==1){
	echo $numberDays;
}elseif($numberDays>1){
	echo $numberDays;
}else{
	echo $numberDays;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: CiviCRM Custom: Accomm Room Prices (Rel): Host Room Prices */
  $handler->display->display_options['fields']['host_room_prices_87']['id'] = 'host_room_prices_87';
  $handler->display->display_options['fields']['host_room_prices_87']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['fields']['host_room_prices_87']['field'] = 'host_room_prices_87';
  $handler->display->display_options['fields']['host_room_prices_87']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['host_room_prices_87']['label'] = 'Room Type';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '€ Wk Rm Price';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return $row->host_room_prices_87;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '€ Amount Due (Host)';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '[php]*[php_1]/7';
  /* Field: CiviCRM Custom: Accomm Room Prices (Rel): Paid Host? */
  $handler->display->display_options['fields']['paid__89']['id'] = 'paid__89';
  $handler->display->display_options['fields']['paid__89']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['fields']['paid__89']['field'] = 'paid__89';
  $handler->display->display_options['path'] = 'accomm-accounts';

  /* Display: Arrivals */
  $handler = $view->new_display('page', 'Arrivals', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Relationships: Relationship ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Contacts: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['last_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Custom: Additional Details: Nationality */
  $handler->display->display_options['fields']['nationality_48']['id'] = 'nationality_48';
  $handler->display->display_options['fields']['nationality_48']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['nationality_48']['field'] = 'nationality_48';
  /* Field: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['fields']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['exclude'] = TRUE;
  /* Field: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['fields']['contact_id_b']['id'] = 'contact_id_b';
  $handler->display->display_options['fields']['contact_id_b']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['contact_id_b']['field'] = 'contact_id_b';
  $handler->display->display_options['fields']['contact_id_b']['exclude'] = TRUE;
  /* Field: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['label'] = 'Current / Past?';
  $handler->display->display_options['fields']['is_active']['exclude'] = TRUE;
  $handler->display->display_options['fields']['is_active']['type'] = 'custom';
  $handler->display->display_options['fields']['is_active']['type_custom_true'] = 'Current Student';
  $handler->display->display_options['fields']['is_active']['type_custom_false'] = 'Past Student';
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: CiviCRM Custom: Accomm Room Prices (Rel): Host Room Prices */
  $handler->display->display_options['fields']['host_room_prices_87']['id'] = 'host_room_prices_87';
  $handler->display->display_options['fields']['host_room_prices_87']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['fields']['host_room_prices_87']['field'] = 'host_room_prices_87';
  $handler->display->display_options['fields']['host_room_prices_87']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['host_room_prices_87']['exclude'] = TRUE;
  /* Field: CiviCRM Custom: Accomm Room Prices (Rel): Paid Host? */
  $handler->display->display_options['fields']['paid__89']['id'] = 'paid__89';
  $handler->display->display_options['fields']['paid__89']['table'] = 'civicrm_value_accomm_room_prices_15';
  $handler->display->display_options['fields']['paid__89']['field'] = 'paid__89';
  $handler->display->display_options['fields']['paid__89']['exclude'] = TRUE;
  /* Field: CiviCRM Custom: Additional Details: Allergies / Diet etc. */
  $handler->display->display_options['fields']['allergies__diet_etc__81']['id'] = 'allergies__diet_etc__81';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['field'] = 'allergies__diet_etc__81';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['relationship'] = 'contact_id_b';
  /* Field: CiviCRM Member: Membership Type */
  $handler->display->display_options['fields']['membership_type']['id'] = 'membership_type';
  $handler->display->display_options['fields']['membership_type']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['membership_type']['field'] = 'membership_type';
  $handler->display->display_options['fields']['membership_type']['relationship'] = 'contact_id_b';
  /* Field: CiviCRM Member: Start Date */
  $handler->display->display_options['fields']['start_date_1']['id'] = 'start_date_1';
  $handler->display->display_options['fields']['start_date_1']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['start_date_1']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date_1']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['start_date_1']['label'] = 'Member Start Date';
  $handler->display->display_options['fields']['start_date_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date_1']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Member: End Date */
  $handler->display->display_options['fields']['end_date_1']['id'] = 'end_date_1';
  $handler->display->display_options['fields']['end_date_1']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['end_date_1']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date_1']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['end_date_1']['label'] = 'Member End Date';
  $handler->display->display_options['fields']['end_date_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date_1']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Custom: Additional Details: Flight Arrival Date & Time */
  $handler->display->display_options['fields']['flight_arrival_info_82']['id'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_arrival_info_82']['field'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['flight_arrival_info_82']['label'] = 'Flight Arrival Date';
  $handler->display->display_options['fields']['flight_arrival_info_82']['date_format'] = 'custom';
  $handler->display->display_options['fields']['flight_arrival_info_82']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Custom: Additional Details: Flight Arrival Date & Time */
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['id'] = 'flight_arrival_info_82_1';
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['field'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['relationship'] = 'contact_id_b';
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['label'] = 'Flight Time';
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['flight_arrival_info_82_1']['custom_date_format'] = 'G:i';
  /* Field: CiviCRM Custom: Additional Details: Flight No & Other Info */
  $handler->display->display_options['fields']['flight_no__other_info_83']['id'] = 'flight_no__other_info_83';
  $handler->display->display_options['fields']['flight_no__other_info_83']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_no__other_info_83']['field'] = 'flight_no__other_info_83';
  $handler->display->display_options['fields']['flight_no__other_info_83']['relationship'] = 'contact_id_b';
  /* Field: CiviCRM Custom: Additional Details: Passport ID */
  $handler->display->display_options['fields']['passport_id_80']['id'] = 'passport_id_80';
  $handler->display->display_options['fields']['passport_id_80']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['passport_id_80']['field'] = 'passport_id_80';
  /* Field: CiviCRM Relationships: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Relationships: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date']['custom_date_format'] = 'd/m/y';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'No Nights';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$s_date = $row->start_date;
$e_date = $row->end_date;
$start_date = 0;
$end_date= 0;
if($s_date>0)
	$start_date = $s_date;
	
if($e_date>0)
	$end_date = $e_date;
$timeDiff = abs($start_date - $end_date);
$numberDays = $timeDiff/86400; 
$numberDays = intval($numberDays);

if($numberDays==1){
	echo $numberDays;
}elseif($numberDays>1){
	echo $numberDays;
}else{
	echo $numberDays;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '€ Wk Rm Price';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return $row->host_room_prices_87;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '€ Amount Due (Host)';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '[php]*[php_1]/7';
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'contact_id_a';
  $handler->display->display_options['fields']['display_name']['label'] = 'Host / Apartment';
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['filters']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['value'] = array(
    16 => '16',
  );
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['relationship'] = 'contact_id_a';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Host / Apartment Name';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: CiviCRM Custom: Additional Details: Flight Arrival Date & Time */
  $handler->display->display_options['filters']['flight_arrival_info_82']['id'] = 'flight_arrival_info_82';
  $handler->display->display_options['filters']['flight_arrival_info_82']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['filters']['flight_arrival_info_82']['field'] = 'flight_arrival_info_82';
  $handler->display->display_options['filters']['flight_arrival_info_82']['relationship'] = 'contact_id_b';
  $handler->display->display_options['filters']['flight_arrival_info_82']['operator'] = 'between';
  $handler->display->display_options['filters']['flight_arrival_info_82']['value']['min'] = '14/08/2013';
  $handler->display->display_options['filters']['flight_arrival_info_82']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['operator_id'] = 'flight_arrival_info_82_op';
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['label'] = 'Arrivals From';
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['description'] = 'Search Arrival Date / Time Range';
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['operator'] = 'flight_arrival_info_82_op';
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['identifier'] = 'flight_arrival_info_82';
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['flight_arrival_info_82']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: CiviCRM Contacts: First Name */
  $handler->display->display_options['filters']['first_name']['id'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['first_name']['field'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['filters']['first_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['first_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['first_name']['expose']['operator_id'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['label'] = 'Student First Name';
  $handler->display->display_options['filters']['first_name']['expose']['operator'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['identifier'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['first_name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: CiviCRM Contacts: Last Name */
  $handler->display->display_options['filters']['last_name']['id'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['last_name']['field'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['relationship'] = 'contact_id_b';
  $handler->display->display_options['filters']['last_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['last_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['last_name']['expose']['operator_id'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['label'] = 'Student Last Name';
  $handler->display->display_options['filters']['last_name']['expose']['operator'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['identifier'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['last_name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: CiviCRM Member: Membership Type */
  $handler->display->display_options['filters']['membership_type']['id'] = 'membership_type';
  $handler->display->display_options['filters']['membership_type']['table'] = 'civicrm_membership';
  $handler->display->display_options['filters']['membership_type']['field'] = 'membership_type';
  $handler->display->display_options['filters']['membership_type']['relationship'] = 'contact_id_b';
  $handler->display->display_options['filters']['membership_type']['value'] = array(
    5 => '5',
    19 => '19',
    20 => '20',
    21 => '21',
    22 => '22',
    23 => '23',
  );
  $handler->display->display_options['path'] = 'accomm-arrivals';
  $export['accomm_clone'] = $view;

  $view = new view();
  $view->name = 'accomm_placements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contribution';
  $view->human_name = 'Accomm Placements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Accomm Placements';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'contribution_status' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'is_active' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'start_date' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['columns'] = array(
    'id_2' => 'id_2',
    'id' => 'id',
    'id_1' => 'id_1',
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'nationality_48' => 'nationality_48',
    'allergies__diet_etc__81' => 'allergies__diet_etc__81',
    'flight_arrival_info_82' => 'flight_arrival_info_82',
    'flight_no__other_info_83' => 'flight_no__other_info_83',
    'passport_id_80' => 'passport_id_80',
    'membership_type' => 'membership_type',
    'contribution_status' => 'contribution_status',
    'start_date' => 'start_date',
    'end_date' => 'end_date',
    'php' => 'php',
    'relationship_type' => 'relationship_type',
    'is_active' => 'is_active',
    'display_name' => 'display_name',
  );
  $handler->display->display_options['style_options']['default'] = 'start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'id_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'id_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'nationality_48' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'allergies__diet_etc__81' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'flight_arrival_info_82' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'flight_no__other_info_83' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'passport_id_80' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'membership_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'contribution_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'relationship_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'is_active' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: CiviCRM Contributions: Contact Record ID */
  $handler->display->display_options['relationships']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id']['table'] = 'civicrm_contribution';
  $handler->display->display_options['relationships']['contact_id']['field'] = 'contact_id';
  /* Relationship: CiviCRM Relationships: Contact ID A */
  $handler->display->display_options['relationships']['contact_id_a']['id'] = 'contact_id_a';
  $handler->display->display_options['relationships']['contact_id_a']['table'] = 'civicrm_relationship';
  $handler->display->display_options['relationships']['contact_id_a']['field'] = 'contact_id_a';
  $handler->display->display_options['relationships']['contact_id_a']['relationship'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id_a']['relationship_type'] = '16';
  $handler->display->display_options['relationships']['contact_id_a']['relationship_state'] = 0;
  /* Relationship: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['relationships']['contact_id_b']['id'] = 'contact_id_b';
  $handler->display->display_options['relationships']['contact_id_b']['table'] = 'civicrm_relationship';
  $handler->display->display_options['relationships']['contact_id_b']['field'] = 'contact_id_b';
  $handler->display->display_options['relationships']['contact_id_b']['relationship'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id_b']['relationship_type'] = '0';
  $handler->display->display_options['relationships']['contact_id_b']['relationship_state'] = 0;
  /* Field: CiviCRM Member: Membership ID */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  /* Field: CiviCRM Contributions: Contribution ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Contacts: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Member: Membership Type */
  $handler->display->display_options['fields']['membership_type']['id'] = 'membership_type';
  $handler->display->display_options['fields']['membership_type']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['membership_type']['field'] = 'membership_type';
  $handler->display->display_options['fields']['membership_type']['relationship'] = 'contact_id';
  /* Field: CiviCRM Contributions: Contribution Status */
  $handler->display->display_options['fields']['contribution_status']['id'] = 'contribution_status';
  $handler->display->display_options['fields']['contribution_status']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['contribution_status']['field'] = 'contribution_status';
  $handler->display->display_options['fields']['contribution_status']['label'] = 'Pay Status';
  /* Field: CiviCRM Custom: Additional Details: Nationality */
  $handler->display->display_options['fields']['nationality_48']['id'] = 'nationality_48';
  $handler->display->display_options['fields']['nationality_48']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['nationality_48']['field'] = 'nationality_48';
  /* Field: CiviCRM Custom: Additional Details: Allergies / Diet etc. */
  $handler->display->display_options['fields']['allergies__diet_etc__81']['id'] = 'allergies__diet_etc__81';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['field'] = 'allergies__diet_etc__81';
  $handler->display->display_options['fields']['allergies__diet_etc__81']['relationship'] = 'contact_id';
  /* Field: CiviCRM Custom: Additional Details: Flight Arrival Date & Time */
  $handler->display->display_options['fields']['flight_arrival_info_82']['id'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_arrival_info_82']['field'] = 'flight_arrival_info_82';
  $handler->display->display_options['fields']['flight_arrival_info_82']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['flight_arrival_info_82']['date_format'] = 'short';
  /* Field: CiviCRM Custom: Additional Details: Flight No & Other Info */
  $handler->display->display_options['fields']['flight_no__other_info_83']['id'] = 'flight_no__other_info_83';
  $handler->display->display_options['fields']['flight_no__other_info_83']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['flight_no__other_info_83']['field'] = 'flight_no__other_info_83';
  /* Field: CiviCRM Custom: Additional Details: Passport ID */
  $handler->display->display_options['fields']['passport_id_80']['id'] = 'passport_id_80';
  $handler->display->display_options['fields']['passport_id_80']['table'] = 'civicrm_value_student_details_8';
  $handler->display->display_options['fields']['passport_id_80']['field'] = 'passport_id_80';
  /* Field: CiviCRM Member: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Member: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date']['custom_date_format'] = 'd/m/y';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'No Nights';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$s_date = $row->start_date;
$e_date = $row->end_date;
$start_date = 0;
$end_date= 0;
if($s_date>0)
	$start_date = $s_date;
	
if($e_date>0)
	$end_date = $e_date;
$timeDiff = abs($start_date - $end_date);
$numberDays = $timeDiff/86400; 
$numberDays = intval($numberDays);

if($numberDays==1){
	echo $numberDays;
}elseif($numberDays>1){
	echo $numberDays;
}else{
	echo $numberDays;
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['fields']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['relationship_type']['exclude'] = TRUE;
  /* Field: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['is_active']['label'] = 'Placed / Unplaced?';
  $handler->display->display_options['fields']['is_active']['exclude'] = TRUE;
  $handler->display->display_options['fields']['is_active']['type'] = 'custom';
  $handler->display->display_options['fields']['is_active']['type_custom_true'] = 'Placed';
  $handler->display->display_options['fields']['is_active']['type_custom_false'] = 'Unplaced';
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'contact_id_a';
  $handler->display->display_options['fields']['display_name']['label'] = 'Accomm Name';
  $handler->display->display_options['fields']['display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Filter criterion: CiviCRM Member: Membership Type */
  $handler->display->display_options['filters']['membership_type_1']['id'] = 'membership_type_1';
  $handler->display->display_options['filters']['membership_type_1']['table'] = 'civicrm_membership';
  $handler->display->display_options['filters']['membership_type_1']['field'] = 'membership_type';
  $handler->display->display_options['filters']['membership_type_1']['relationship'] = 'contact_id';
  $handler->display->display_options['filters']['membership_type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['membership_type_1']['value'] = array(
    2 => '2',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
    17 => '17',
    18 => '18',
    24 => '24',
  );
  $handler->display->display_options['filters']['membership_type_1']['group'] = 1;
  /* Filter criterion: CiviCRM Member: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_membership';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['relationship'] = 'contact_id';
  $handler->display->display_options['filters']['start_date']['operator'] = 'between';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start Date From:';
  $handler->display->display_options['filters']['start_date']['expose']['description'] = 'Search Start Date By Range';
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CiviCRM Contacts: First Name */
  $handler->display->display_options['filters']['first_name']['id'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['first_name']['field'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['first_name']['group'] = 1;
  $handler->display->display_options['filters']['first_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['first_name']['expose']['operator_id'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['first_name']['expose']['operator'] = 'first_name_op';
  $handler->display->display_options['filters']['first_name']['expose']['identifier'] = 'first_name';
  $handler->display->display_options['filters']['first_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CiviCRM Contacts: Last Name */
  $handler->display->display_options['filters']['last_name']['id'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['last_name']['field'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['last_name']['group'] = 1;
  $handler->display->display_options['filters']['last_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['last_name']['expose']['operator_id'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['last_name']['expose']['operator'] = 'last_name_op';
  $handler->display->display_options['filters']['last_name']['expose']['identifier'] = 'last_name';
  $handler->display->display_options['filters']['last_name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['last_name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: CiviCRM Contributions: Contribution Status */
  $handler->display->display_options['filters']['contribution_status']['id'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_status']['field'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['value'] = array(
    1 => '1',
    2 => '2',
    5 => '5',
  );
  $handler->display->display_options['filters']['contribution_status']['group'] = 1;
  $handler->display->display_options['filters']['contribution_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contribution_status']['expose']['operator_id'] = 'contribution_status_op';
  $handler->display->display_options['filters']['contribution_status']['expose']['label'] = 'Pay Status';
  $handler->display->display_options['filters']['contribution_status']['expose']['operator'] = 'contribution_status_op';
  $handler->display->display_options['filters']['contribution_status']['expose']['identifier'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['contribution_status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['contribution_status']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['contribution_status']['expose']['reduce'] = TRUE;
  /* Filter criterion: CiviCRM Member: Membership Type */
  $handler->display->display_options['filters']['membership_type']['id'] = 'membership_type';
  $handler->display->display_options['filters']['membership_type']['table'] = 'civicrm_membership';
  $handler->display->display_options['filters']['membership_type']['field'] = 'membership_type';
  $handler->display->display_options['filters']['membership_type']['relationship'] = 'contact_id';
  $handler->display->display_options['filters']['membership_type']['value'] = array(
    5 => '5',
    19 => '19',
    20 => '20',
    21 => '21',
    22 => '22',
    23 => '23',
  );
  $handler->display->display_options['filters']['membership_type']['group'] = 1;
  $handler->display->display_options['filters']['membership_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['membership_type']['expose']['operator_id'] = 'membership_type_op';
  $handler->display->display_options['filters']['membership_type']['expose']['label'] = 'Accomm Type';
  $handler->display->display_options['filters']['membership_type']['expose']['operator'] = 'membership_type_op';
  $handler->display->display_options['filters']['membership_type']['expose']['identifier'] = 'membership_type';
  $handler->display->display_options['filters']['membership_type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['membership_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['membership_type']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['membership_type']['expose']['reduce'] = TRUE;
  /* Filter criterion: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['filters']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['relationship'] = 'contact_id';
  $handler->display->display_options['filters']['relationship_type']['operator'] = 'not in';
  $handler->display->display_options['filters']['relationship_type']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['relationship_type']['group'] = 1;
  $handler->display->display_options['filters']['relationship_type']['expose']['operator_id'] = 'relationship_type_op';
  $handler->display->display_options['filters']['relationship_type']['expose']['label'] = 'Relationship Type A-to-B';
  $handler->display->display_options['filters']['relationship_type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['relationship_type']['expose']['operator'] = 'relationship_type_op';
  $handler->display->display_options['filters']['relationship_type']['expose']['identifier'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['relationship_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['relationship_type']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );

  /* Display: Accomm Placements */
  $handler = $view->new_display('page', 'Accomm Placements', 'page');
  $handler->display->display_options['path'] = 'accomm-placements';
  $export['accomm_placements'] = $view;

  return $export;
}
