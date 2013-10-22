<?php
/**
 * @file
 * myaccommfeature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function myaccommfeature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'accommodation';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Accommodation';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'accomm_placements',
      'display' => 'page',
      'args' => '',
      'title' => 'Placements',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'accomm_clone',
      'display' => 'page_1',
      'args' => '',
      'title' => 'Arrivals',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'accomm_clone',
      'display' => 'page',
      'args' => '',
      'title' => 'Accounts',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Accommodation');
  t('Accounts');
  t('Arrivals');
  t('Placements');

  $export['accommodation'] = $quicktabs;

  return $export;
}
