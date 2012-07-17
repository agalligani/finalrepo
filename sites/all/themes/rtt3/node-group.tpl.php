<?php
// $Id: node-group.tpl.php 7510 2010-06-15 19:09:36Z sheena $
?>
<div id='content-rotator-wrapper-group'> 	
<div id='main-box'>
    <div class="content clearfix">
		<div id = "content_1">
			<div class='content_description'>
				<?php print $field_desc_1[0][safe]; ?>
			</div>
			<div class='content_body'>
				<?php print $field_body_1[0][safe]; ?>
			</div>
			<div class='content_type'><?php print $field_type_1[0][safe]; ?></div>
			<div class='content_value'><?php print $field_value_1[0][safe]; ?></div>
			<div class='content_image'><?php print_r($field_image_1[0][view]); ?></div>			
		</div>
		
		<div id = "content_2">
			<div class='content_description'>
				<?php print $field_desc_2[0][safe]; ?>
			</div>
			<div class='content_body'>
				<?php print $field_body_2[0][safe]; ?>
			</div>			
			<div class='content_type'><?php print $field_type_2[0][safe]; ?></div>
			<div class='content_value'><?php print $field_value_2[0][safe]; ?></div>
			<div class='content_image'><?php print_r($field_image_2[0][view]); ?></div>			
		</div>
		
		<div id = "content_3">
			<div class='content_description'>
				<?php print $field_desc_3[0][safe]; ?>
			</div>
			<div class='content_body'>
				<?php print $field_body_3[0][safe]; ?>
			</div>
			<div class='content_type'><?php print $field_type_3[0][safe]; ?></div>
			<div class='content_value'><?php print $field_value_3[0][safe]; ?></div>
			<div class='content_image'><?php print_r($field_image_3[0][view]); ?></div>
		</div>
	</div>
</div>
</div>

<!------- Here's where the original group node definition starts.......... ------->

<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">
  <div class="inner">

    <?php if ($page == 0): ?>
    <h2 class="title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    <?php endif; ?>

    <?php if ($node_top && !$teaser): ?>
    <div id="node-top" class="node-top row nested">
      <div id="node-top-inner" class="node-top-inner inner">
        <?php print $node_top; ?>
      </div><!-- /node-top-inner -->
    </div><!-- /node-top -->
    <?php endif; ?>

    <div class="content clearfix">
      <?php print $content; ?>
	   <div id="resource-section">
			<a id="resource-button" href='/node/<?php print $node->nid; ?>/content/documents/'>Resources</a>
		</div><!-- /resource link -->
    </div>

    <?php if ($terms): ?>
    <div class="terms">
      <?php print $terms; ?>
    </div>
    <?php endif;?>

    <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
    <?php endif; ?>
  </div><!-- /inner -->

  <?php if ($node_bottom && !$teaser): ?>
  <div id="node-bottom" class="node-bottom row nested">
    <div id="node-bottom-inner" class="node-bottom-inner inner">
      <?php print $node_bottom; ?>
    </div><!-- /node-bottom-inner -->
  </div><!-- /node-bottom -->
  <?php endif; ?>
</div><!-- /node-<?php print $node->nid; ?> -->
