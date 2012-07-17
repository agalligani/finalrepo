<?php
/**
 * @file views-view-grid.tpl.php
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="columned_view <?php print $class; ?>"<?php print $attributes; ?>>
   <?php foreach ($rows as $row_number => $columns): ?>
      <div class='column column-<?php print $row_number; ?>'>
        <?php foreach ($columns as $column_number => $item): ?>
        <?php if($item): ?>
          <div class="<?php print $column_classes[$row_number][$column_number]; ?>">
            <?php print $item."ssssssssssssssssss"; ?>
          </div>
        <?php endif;?>
        <?php endforeach; ?>
      </div>
    <?php endforeach; ?>
  </div>
 