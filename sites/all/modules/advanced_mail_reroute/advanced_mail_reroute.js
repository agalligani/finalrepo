// $Id: advanced_mail_reroute.js,v 1.1.2.1 2009/04/30 05:23:51 rohinknight Exp $

function advanced_mail_reroute_enable_disable_email_field(select_field) {    
    if ($(select_field).children("[@selected]").text() == "Reroute") {
        var email_field = $(select_field).parent().parent().parent().find('.advanced-mail-reroute-email');
        email_field.removeAttr('disabled');        
        email_field.css({'background-color' : '#fff'});
    }
    else {
        var email_field = $(select_field).parent().parent().parent().find('.advanced-mail-reroute-email');
        email_field.attr('disabled', 'disabled');
        email_field.css({'background-color' : '#ddd'});
        email_field.val('');
    }
}

if (Drupal.jsEnabled) {
  $(document).ready(function() {    
    $(".advanced-mail-reroute-rule")
      .change(function() {
        advanced_mail_reroute_enable_disable_email_field(this);
      })
      .each(function() {
        advanced_mail_reroute_enable_disable_email_field(this);
      });
  });
};

