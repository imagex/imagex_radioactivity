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
  $strongarm->name = 'radioactivity_flood_protection';
  $strongarm->value = 1;
  $export['radioactivity_flood_protection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_timeout';
  $strongarm->value = '15';
  $export['radioactivity_flood_timeout'] = $strongarm;

  return $export;
}
