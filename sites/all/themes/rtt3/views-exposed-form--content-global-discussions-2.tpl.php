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
<?php
//add collapsible fieldset js if it is not already included
global $BASE_URL;
drupal_add_js($BASE_URL.'misc/drupal.js');
drupal_add_js($BASE_URL.'misc/collapse.js');
drupal_add_js($BASE_URL.'sites/all/themes/rtt3/discussion_tweaks.js');

?>

<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>
  <div class="views-exposed-widgets">
<!-- script type="text/javascript">
 //<![CDATA[ 
 // add a onchange to submit the group select box

//Edit the line like this .....
window.onload = function(e) {
//views-exposed-form-content-global-discussions-2-default
		 gForm = document.getElementById("views-exposed-form-content-global-discussions-2-default");
		 gSelect = document.getElementById("edit-group-nid-1");
		 gSelect.onchange=function(){
				gForm.submit()
		 };
}
	
 //]]>
 </script -->
 
    <?php foreach($widgets as $id => $widget): ?>
	<!-- ?php	dsm($widget); ? -->
      <div class="views-exposed-widget">
	    <?php $widget->label="Filter by group:" ?>
        <?php if (!empty($widget->label)): ?>
          <label for="<?php print $widget->id; ?>">
            <?php print $widget->label; ?>
          </label>
        <?php endif; ?>
        <?php if (!empty($widget->operator)): ?>
          <div class="views-operator">
            <?php print $widget->operator; ?>
          </div>
        <?php endif; ?>
        <div class="views-widget">
          <?php print $widget->widget; ?>
        </div>
      </div>
    <?php endforeach; ?>
    </div>
    <div class="views-exposed-widget views-exposed-submit">
      <!-- ?php print $button ? -->
	  <input id="edit-submit-content-global-discussions-2" class="form-submit" type="submit" value="Go">
      <!-- input type="button" value="Clear" class="form-submit" onClick="window.location.reload()" / -->
    </div>
