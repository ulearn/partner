<?php

class civicrm_smartgroup_handler_filter extends views_handler_filter_numeric {
  function pre_query() {
    civicrm_initialize();
    require $GLOBALS['civicrm_root'] . '/CRM/Contact/BAO/GroupContactCache.php';
    
    if ($this->operator == '=') {
		
      CRM_Contact_BAO_GroupContactCache::check($this->value['value']);
    }
  }
}