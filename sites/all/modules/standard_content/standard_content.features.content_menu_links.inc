<?php
/**
 * @file
 * standard_content.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function standard_content_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu_news--events:<front>
  $menu_links['main-menu_news--events:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'News & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News & Events');


  return $menu_links;
}
