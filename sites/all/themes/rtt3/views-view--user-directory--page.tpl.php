<?php
// $Id: views-view--page.tpl.php,v 1.1.2.3 2010/07/02 22:11:04 sociotech Exp $

/**
 * @file views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 * - $admin_links: A rendered list of administrative links
 * - $admin_links_raw: A list of administrative links suitable for theme('links')
 *
 * @ingroup views_templates
 */

/**
 * $skinr variable and <div class="inner content"> added for Fusion theming
 */
?>
<div id="view-id-<?php print $name; ?>-<?php print $display_id; ?>" class="<?php print $classes; ?> <?php print $skinr; ?>">
  <?php if ($admin_links): ?>
    <div class="views-admin-links views-hide">
      <?php print $admin_links; ?>
    </div>
  <?php endif; ?>
  <?php global $user; ?>
  <?php if (!$user->uid): ?>
    <div class="user-login-message">
	<?php global $base_url; ?>
	 <h4>In order to see a full directory of your peers on the School Turnaround Learning Community, please <a href='<?php print $base_url; ?>/user'>Login</a> or <a href='<?php print $base_url; ?>/user/register'>Register to join our site</a>.  Registration is free and it only takes a moment!</h4>
    </div>
	<?php endif; ?>

  <div class="inner content">
    <?php if ($header): ?>
      <div class="view-header">
        <?php print $header; ?>
      </div>
    <?php endif; ?>

    <?php if (($user->uid)&&($exposed)): ?>
      <div class="view-filters">
        <?php print $exposed; ?>
      </div>
    <?php endif; ?>



    <?php if (($user->uid)&&($rows)): ?>
      <div class="view-content">
        <?php print $rows; ?>
      </div>
    <?php elseif ($empty): ?>
      <div class="view-empty">
        <?php print $empty; ?>
      </div>
    <?php endif; ?>

    <?php if (($user->uid)&&($pager)): ?>
      <?php print $pager; ?>
    <?php endif; ?>

    <?php if ($attachment_after): ?>
      <div class="attachment attachment-after">
        <?php print $attachment_after; ?>
      </div>
    <?php endif; ?>

    <?php if (($user->uid)&&($more)): ?>
      <?php print $more; ?>
    <?php endif; ?>

    <?php if (($user->uid)&&($footer)): ?>
      <div class="view-footer">
        <?php print $footer; ?>
      </div>
    <?php endif; ?>

    <?php if (($user->uid)&&($feed_icon)): ?>
      <div class="feed-icon">
        <?php print $feed_icon; ?>
      </div>
    <?php endif; ?>
  </div><!-- /views-inner -->
</div> <?php /* class view */ ?>
