<?php
/**
 * @file
 * imagex_radioactivity.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function imagex_radioactivity_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_radioactivity'
  $field_bases['field_radioactivity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_radioactivity',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'locked' => 0,
    'module' => 'radioactivity',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'radioactivity',
  );

  features_alter_code('field_base', $field_bases);

  return $field_bases;
}
