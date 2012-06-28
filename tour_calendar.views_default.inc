<?php
/**
 * @file
 * tour_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tour_calendar_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'shows';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Shows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shows';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_show_datetime']['id'] = 'field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['table'] = 'field_data_field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['field'] = 'field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_show_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_show_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_show_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['field_api_classes'] = 0;
  /* Sort criterion: Content: When -  start date (field_show_datetime) */
  $handler->display->display_options['sorts']['field_show_datetime_value']['id'] = 'field_show_datetime_value';
  $handler->display->display_options['sorts']['field_show_datetime_value']['table'] = 'field_data_field_show_datetime';
  $handler->display->display_options['sorts']['field_show_datetime_value']['field'] = 'field_show_datetime_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'show' => 'show',
  );

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_datetime.field_show_datetime_value' => 'field_data_field_show_datetime.field_show_datetime_value',
  );
  $handler->display->display_options['path'] = 'shows/calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_datetime.field_show_datetime_value' => 'field_data_field_show_datetime.field_show_datetime_value',
  );
  $handler->display->display_options['path'] = 'shows/calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_datetime.field_show_datetime_value' => 'field_data_field_show_datetime.field_show_datetime_value',
  );
  $handler->display->display_options['path'] = 'shows/calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_show_datetime']['id'] = 'field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['table'] = 'field_data_field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['field'] = 'field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_show_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_show_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_show_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_datetime.field_show_datetime_value' => 'field_data_field_show_datetime.field_show_datetime_value',
  );
  $handler->display->display_options['path'] = 'shows/calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_datetime.field_show_datetime_value' => 'field_data_field_show_datetime.field_show_datetime_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_show_datetime.field_show_datetime_value' => 'field_data_field_show_datetime.field_show_datetime_value',
  );

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shows';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = FALSE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'shows:block_3';
  $handler->display->display_options['header']['view']['inherit_arguments'] = 0;
  $handler->display->display_options['path'] = 'shows/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Shows';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Map */
  $handler = $view->new_display('block', 'Map', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_show_geolocation';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_show_datetime']['id'] = 'field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['table'] = 'field_data_field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['field'] = 'field_show_datetime';
  $handler->display->display_options['fields']['field_show_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_show_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_show_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_show_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_show_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_show_datetime']['field_api_classes'] = 0;
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_show_geolocation']['id'] = 'field_show_geolocation';
  $handler->display->display_options['fields']['field_show_geolocation']['table'] = 'field_data_field_show_geolocation';
  $handler->display->display_options['fields']['field_show_geolocation']['field'] = 'field_show_geolocation';
  $handler->display->display_options['fields']['field_show_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_geolocation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_show_geolocation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_show_geolocation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_show_geolocation']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_show_geolocation']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_show_geolocation']['field_api_classes'] = 0;
  $export['shows'] = $view;

  return $export;
}
