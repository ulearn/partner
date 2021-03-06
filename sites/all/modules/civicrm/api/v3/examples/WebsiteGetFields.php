<?php
/**
 * Test Generated example of using website getfields API
 * *
 */
function website_getfields_example(){
$params = array(
  'action' => 'get',
);

try{
  $result = civicrm_api3('website', 'getfields', $params);
}
catch (CiviCRM_API3_Exception $e) {
  // handle error here
  $errorMessage = $e->getMessage();
  $errorCode = $e->getErrorCode();
  $errorData = $e->getExtraParams();
  return array('error' => $errorMessage, 'error_code' => $errorCode, 'error_data' => $errorData);
}

return $result;
}

/**
 * Function returns array of result expected from previous function
 */
function website_getfields_expectedresult(){

  $expectedResult = array(
  'is_error' => 0,
  'version' => 3,
  'count' => 4,
  'values' => array(
      'id' => array(
          'name' => 'id',
          'type' => 1,
          'title' => 'Website ID',
          'required' => true,
          'api.aliases' => array(
              '0' => 'website_id',
            ),
        ),
      'contact_id' => array(
          'name' => 'contact_id',
          'type' => 1,
          'title' => 'Contact',
          'FKClassName' => 'CRM_Contact_DAO_Contact',
        ),
      'url' => array(
          'name' => 'url',
          'type' => 2,
          'title' => 'Website',
          'maxlength' => 128,
          'size' => 30,
          'import' => true,
          'where' => 'civicrm_website.url',
          'headerPattern' => '/Website/i',
          'dataPattern' => '/^[A-Za-z][0-9A-Za-z]{20,}$/',
          'export' => true,
        ),
      'website_type_id' => array(
          'name' => 'website_type_id',
          'type' => 1,
          'title' => 'Website Type',
          'pseudoconstant' => array(
              'optionGroupName' => 'website_type',
            ),
        ),
    ),
);

  return $expectedResult;
}


/*
* This example has been generated from the API test suite. The test that created it is called
*
* testGetFields and can be found in
* http://svn.civicrm.org/civicrm/trunk/tests/phpunit/CiviTest/api/v3/WebsiteTest.php
*
* You can see the outcome of the API tests at
* http://tests.dev.civicrm.org/trunk/results-api_v3
*
* To Learn about the API read
* http://book.civicrm.org/developer/current/techniques/api/
*
* and review the wiki at
* http://wiki.civicrm.org/confluence/display/CRMDOC/CiviCRM+Public+APIs
*
* Read more about testing here
* http://wiki.civicrm.org/confluence/display/CRM/Testing
*
* API Standards documentation:
* http://wiki.civicrm.org/confluence/display/CRM/API+Architecture+Standards
*/
