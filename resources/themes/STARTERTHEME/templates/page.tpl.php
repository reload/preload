<?php

/**
 * @file
 */

$search_form_config = array(
  "placeholder" => t('Search'),
  "classes" => array('set-right', 'visible-desktop'),

);
$search_form = drupal_get_form('spejder_search_solr_form_top', $search_form_config);
?>

<div class="page-wrap">
  <div id="header">
    <div class="inner">
      <label for="menu-toggle" class="set-left"><i class="fa fa-bars"></i></label>
      <label for="search-toggle" class="hidden-desktop set-right"><i class="fa fa-search"></i></label>

      <input id="search-toggle" class="menu-toggle" type="checkbox">
      <?php echo drupal_render($search_form) ?>


      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">Spejder</a>
      <?php print render($page['header']); ?>



      <?php if ($main_menu): ?>
          <input id="menu-toggle" class="menu-toggle" type="checkbox">
          <div id="main-menu" class="navigation">
            <?php print theme('links__system_main_menu', array(
              'links' => $main_menu,
              'attributes' => array(
                'id' => 'main-menu-links',
                'class' => array('links', 'clearfix'),
              ),
              'heading' => array(
                'text' => t('Main menu'),
                'level' => 'h2',
                'class' => array('element-invisible'),
              ),
            )); ?>
          </div> <!-- /#main-menu -->
        <?php endif; ?>


        <?php if ($secondary_menu): ?>
          <div id="secondary-menu" class="navigation">
            <?php print theme('links__system_secondary_menu', array(
              'links' => $secondary_menu,
              'attributes' => array(
                'id' => 'secondary-menu-links',
                'class' => array('links', 'inline', 'clearfix'),
              ),
              'heading' => array(
                'text' => t('Secondary menu'),
                'level' => 'h2',
                'class' => array('element-invisible'),
              ),
            )); ?>
          </div> <!-- /#secondary-menu -->
        <?php endif; ?>
      </div>
    </div>

  <div id="content">
    <?php if ($messages): ?>
      <div id="messages"><div class="section clearfix">
          <?php print $messages; ?>
        </div></div> <!-- /.section, /#messages -->
    <?php endif; ?>
    <?php if ($tabs and $logged_in): ?>
    <div class="tabs">
      <?php print render($tabs); ?>
    </div>
    <?php endif; ?>
    <?php print render($page['content']); ?>
  </div>

  <div id="footer-wrapper"><div class="section">
      <?php if ($page['footer']): ?>
        <div id="footer" class="clearfix">
          <?php print render($page['footer']); ?>
        </div> <!-- /#footer -->
      <?php endif; ?>
    </div></div> <!-- /.section, /#footer-wrapper -->
</div>
