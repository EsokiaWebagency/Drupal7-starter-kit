<?php
/**
 * @file
 * Enables modules and site configuration for a minimal site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function d7_starter_kit_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = '[D7 Starter Kit] <NONAME>';
  $form['site_information']['site_mail']['#default_value'] = 'adm_1492@yopmail.com';
  
  $form['admin_account']['account']['name']['#default_value'] = 'adm_1492';
  $form['admin_account']['account']['mail']['#default_value'] = 'adm_1492@yopmail.com';
  
  $form['server_settings']['site_default_country']['#default_value'] = 'FR';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Paris';
  $form['server_settings']['date_default_timezone']['#attributes'] = array('class' => array('no-timezone-detect'));
}
