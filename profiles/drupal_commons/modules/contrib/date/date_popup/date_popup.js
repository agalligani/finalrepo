// $Id: date_popup.js,v 1.1.2.4 2010/11/20 12:03:36 karens Exp $

/**
 * Attaches the calendar behavior to all required fields
 */
Drupal.behaviors.date_popup = function (context) {
  var datePopup = Drupal.settings.datePopup;

  $('input.date-popup-date:not(.date-popup-processed)', context).each(function() {
    var inputid = $(this).addClass('date-popup-processed')[0].id;
    if (datePopup[inputid]) {
      var settings = datePopup[inputid].settings;
      var func = datePopup[inputid].func;

      // Explicitely filter the methods we accept.
      if (func == 'datepicker') {
        // make minDate and maxDate JS Date objects when they are integers
        if (typeof settings.minDate == 'number') {
          settings.minDate = new Date(settings.minDate * 1000);
        }
        if (typeof settings.maxDate == 'number') {
          settings.maxDate = new Date(settings.maxDate * 1000);
        }

        if (settings.weekdayDisable.length > 0 || settings.dayDisable.length > 0) {
          settings.beforeShowDay = function(date) {
            var dayDisabled = jQuery.inArray(date.getTime() / 1000, settings.dayDisable) != -1;
            var weekdayDisabled = jQuery.inArray(date.getDay(), settings.weekdayDisable) != -1;

            return [!(dayDisabled || weekdayDisabled), '', ''];
          };
        }

        $(this).datepicker(settings);
      }
    }
  });

  $('input.date-popup-time:not(.date-popup-processed)', context).each(function() {
    var inputid = $(this).addClass('date-popup-processed')[0].id;
    if (datePopup[inputid]) {
      var settings = datePopup[inputid].settings;
      var func = datePopup[inputid].func;

      // Explicitely filter the methods we accept.
      if (func == 'timeEntry') {
        $(this).timeEntry(settings);
      }
    }
  });
};
