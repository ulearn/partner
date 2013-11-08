<?php

function civicrm_views_smartgroups_views_handlers() {
  return array(
    'handlers' => array(
      'civicrm_handler_filter_group' => array(
        'parent' => 'views_handler_filter_numeric',
      ),
    ),
  );
}

function civicrm_views_smartgroups_views_data() {
  $data = array();

  $data['civicrm_group_contact_cache']['table']['group'] = t('CiviCRM Smartgroup');

  $data['civicrm_group_contact_cache']['table']['join']['civicrm_contact'] = array(
    'left_field' => 'id',
    'field' => 'contact_id',
  );

  return $data;
}

function civicrm_views_smartgroups_views_data_alter(&$data) {
  $data['civicrm_group']['id']['filter']['handler'] = 'civicrm_handler_filter_group';

  $data['civicrm_group']['table']['join']['civicrm_contact'] = array(
    'left_table' => 'civicrm_group_contact_cache',
    'left_field' => 'group_id',
    'field' => 'id',
  );
}