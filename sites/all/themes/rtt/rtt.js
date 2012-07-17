$(document).ready(function() {
  $('.menu-name-menu-taxonomy ul.menu:first').superfish();

  // RTT-204
  $('div.joinnow-button a').append('<img src="/sites/all/themes/rtt/images/join_button.png" alt="Join" />');
});

$jq(document).ready(function() {
  if (!($jq.browser.msie && parseInt($jq.browser.version) < 8)) {
    var multiselect = function() {
      $jq('select[multiple]').multiselect();
      $jq('button.ui-multiselect').css('width', '');
      $jq('.ui-multiselect-menu').css('width', '');
    };
    multiselect();
    $jq('.views-exposed-form').live('DOMNodeRemoved', multiselect);
  }
});
