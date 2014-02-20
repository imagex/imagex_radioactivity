<?php
/**
 * @file
 * imagex_radioactivity.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_radioactivity_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_last_cron_timestamp';
  $strongarm->value = 1392812869;
  $export['radioactivity_last_cron_timestamp'] = $strongarm;

  features_alter_code('variable', $export);

  return $export;
}
