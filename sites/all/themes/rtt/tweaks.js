/**
 * Kludgy tweaks!
 */
$(document).ready(function() {
  // Remove certain empty elements. RTT-203, RTT-205
  $('a[href]').filter(function(index) { return !$(this).text() && !$('img', this).length; }).remove();
  $('h1, h2, h3, h4, h5, h6').filter(function(index) { return !$(this).text(); }).remove();

  // Indicate today's date on the calendar. RTT-65
  $(".calendar-calendar td.today .inner .day").append(
    $("<span>(today)</span>")
    .addClass("calendar-today-indicator")
  );

  // Change filefield icon alt attributes to make more sense. RTT-171
  $("img.field-icon-application-pdf").attr("alt", "PDF");
  $("img.field-icon-application-msword").attr("alt", "DOC");
  $("img.field-icon-application-vnd\\.ms-excel").attr("alt", "XLS");
  $("img.field-icon-application-vnd\\.ms-powerpoint").attr("alt", "PPT");
  $("img.field-icon-application-vnd\\.openxmlformats-officedocument\\.wordprocessingml\\.document").attr("alt", "DOCX");
  $("img.field-icon-application-vnd\\.openxmlformats-officedocument\\.spreadsheetml\\.sheet").attr("alt", "XLSX");
  $("img.field-icon-application-vnd\\.openxmlformats-officedocument\\.presentationml\\.presentation").attr("alt", "PPTX");

  // Disable Calendar Popup.
  $('.calendar .popup').unbind('click').removeClass('popup');

  // Move Topic taxonomy menu blocks below breadcrumbs.
  $('div.breadcrumbs').after($('.content-top .taxonomy-menu-block-topic'));
  $('div.breadcrumbs').after($('.content-top .taxonomy-menu-block-active-topic'));

  // Move Taxonomy Term: Add Document block below breadcrumb
  // (and therefore above Topic taxonomy menu block)
  $('div.breadcrumbs').after($('.content-top .taxonomy-term-add-document'));

  // Add instructional text to "Browse by topic" menu.
  $('h2:contains("Browse by topic")').after($('<h3>Hover to see sub-categories.</h3>').css('font-weight', 'normal'));

  // Change specific link in menu block. This is such a horrifically bad idea.
  $('.menu-name-menu-taxonomy a[href="/category/topic/great-teachers-and-leaders/' +
    'documents-cop-events/depth-session-teacher-and-leader-eval"]').attr('href',
    '/event/building-community-practice-depth-session-teacher-and-leader-evaluation');

  // datepicker tweaks
  if ($.datepicker !== undefined) {
    (function() {
      var updateDatepicker = $.datepicker._updateDatepicker;
      $.datepicker._updateDatepicker = function(input) {
        updateDatepicker.call($.datepicker, input);

        var help = '<div class="ui-datepicker-help">' +
                   '<dl><dt>page up/down</dt><dd>previous/next month</dd>' +
                   '<dt>ctrl/alt/meta+page up/down</dt><dd>previous/next year</dd>' +
                   '<dt>ctrl+left/right</dt><dd>previous/next day</dd></dl>' + '</div>';

        // Add textual indicators to popup calendar. RTT-133
        $(".ui-datepicker-calendar td").mouseover(function() {
          $("a", $(this)).append('<span class="ui-datepicker-hover-indicator">(focused)</span>');
        });
        $(".ui-datepicker-calendar td").mouseout(function() {
          $(".ui-datepicker-hover-indicator", $(this)).remove();
        });
        $(".ui-datepicker-today > a, .ui-datepicker-today > span").append('<span class="ui-datepicker-today-indicator">(today)</span>');
        $(".ui-datepicker-current-day > a").append('<span class="ui-datepicker-current-indicator">(currently selected)</span>');

        // Show help text for datepicker popups. RTT-133, RTT-135
        $(".ui-datepicker-calendar").after(help);

        // Work around bug where hover class isn't added to days in datepicker popup.
        $(".ui-datepicker td:parent").hover(
          function() {
            $(this).addClass(".ui-datepicker-days-cell-over");
          },
          function() {
            $(this).removeClass(".ui-datepicker-days-cell-over");
          }
        );
      };

      var selectDay = $.datepicker._selectDay;
      $.datepicker._selectDay = function(id, month, year, td) {
        $('.ui-datepicker-today-indicator, .ui-datepicker-current-indicator, .ui-datepicker-hover-indicator', $(td)).remove();
        selectDay.call($.datepicker, id, month, year, td);
      };
    })();
  }
});
