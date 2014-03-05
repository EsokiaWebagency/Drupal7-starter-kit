<?php
/**
 * @file
 * lns_monitor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lns_monitor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_dblog_php';
  $strongarm->value = '2';
  $export['prod_check_dblog_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_dblog_php_threshold';
  $strongarm->value = '1';
  $export['prod_check_dblog_php_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_enable_xmlrpc';
  $strongarm->value = 1;
  $export['prod_check_enable_xmlrpc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_exclude_disabled_modules';
  $strongarm->value = 1;
  $export['prod_check_exclude_disabled_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_module_list_day';
  $strongarm->value = '0';
  $export['prod_check_module_list_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_module_list_time';
  $strongarm->value = '03:00';
  $export['prod_check_module_list_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prod_check_sitemail';
  $strongarm->value = '';
  $export['prod_check_sitemail'] = $strongarm;

  return $export;
}
