<?php
// $Id: views-exposed-form.tpl.php,v 1.4.4.1 2009/11/18 20:37:58 merlinofchaos Exp $
/**
 * @file views-exposed-form.tpl.php
 *
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
      ?>
<?php endif; ?>
    <?php //foreach($widgets as $id => $widget): ?>
	<input id="edit-keys" class="form-text" type="text" title="Enter the terms you wish to search for." value="Search Group" size="15" name="keys" maxlength="128">
	<input class="spyglass" type="submit" value="">
    <?php //endforeach; ?>
