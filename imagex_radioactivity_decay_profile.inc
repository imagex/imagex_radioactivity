<?php
/**
 * @file
 * imagex_radioactivity.radioactivity_decay_profile.inc
 */

/**
 * Implements hook_default_radioactivity_decay_profile().
 */
function imagex_radioactivity_default_radioactivity_decay_profile() {
  $export = array();

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'high_traffic';
  $radioactivity_decay_profile->name = 'High traffic';
  $radioactivity_decay_profile->description = 'Profile for situations where you have a certain type of content gets proportionally higher amounts of traffic but you want it to maintain parity with other site content that gets less traffic.';
  $radioactivity_decay_profile->enable_decay = 2;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 7200;
  $radioactivity_decay_profile->cut_off = '10';
  $radioactivity_decay_profile->storage = 'Live';
  $export['high_traffic'] = $radioactivity_decay_profile;

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'low_traffic';
  $radioactivity_decay_profile->name = 'Low traffic';
  $radioactivity_decay_profile->description = 'Profile for situations where you have a certain type of content gets proportionally lower amounts of traffic but you want it to maintain parity with other site content that gets more traffic.';
  $radioactivity_decay_profile->enable_decay = 2;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 86400;
  $radioactivity_decay_profile->cut_off = '10';
  $radioactivity_decay_profile->storage = 'Live';
  $export['low_traffic'] = $radioactivity_decay_profile;

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'medium_traffic';
  $radioactivity_decay_profile->name = 'Medium traffic';
  $radioactivity_decay_profile->description = 'Medium traffic radioactivity profile which should be appropriate for the majority of the site\'s content.';
  $radioactivity_decay_profile->enable_decay = 1;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 2160;
  $radioactivity_decay_profile->cut_off = '10';
  $radioactivity_decay_profile->storage = 'Live';
  $export['medium_traffic'] = $radioactivity_decay_profile;

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'no_decay';
  $radioactivity_decay_profile->name = 'No decay';
  $radioactivity_decay_profile->description = 'Uses a simple counter that never decays.';
  $radioactivity_decay_profile->enable_decay = 0;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 21600;
  $radioactivity_decay_profile->cut_off = '0.1';
  $radioactivity_decay_profile->storage = 'Live';
  $export['no_decay'] = $radioactivity_decay_profile;

  return $export;
}
