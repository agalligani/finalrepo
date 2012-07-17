<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function reformsupportnetwork_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "features_override" && $api == "features_override") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_rules_defaults().
 */
function reformsupportnetwork_core_rules_defaults() {
  return array(
    'rules' => array(
      'rules_when_user_account_is_created_send_email_with_username' => array(
        '#type' => 'rule',
        '#set' => 'event_user_insert',
        '#label' => 'when user account is created, send email with username',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'reformsupportnetwork_core',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'from' => '',
              'subject' => 'Race to the Top Grantee Portal Access Information',
              'message' => 'Dear [account:user],

You have been granted access to the Race to the Top Grantee Portal.  This portal is designed to further facilitate collaboration and the exchange of ideas between RTT grantees. 

Some of the features include:

•	Document sharing and navigation that enables users to find, share, and comment on content, including documents, links, and videos.

•	Group pages that allow users to share updates, events, documents, and other information within and across specific topic areas.

•	Discussion forums, where users can post questions and share ideas.

•	Subscriptions and notifications that allow you to receive and tailor notifications about new or updated information on the portal.

•	Member profiles with the ability to upload photos and further customize your portal experience.

•	Continuation of past features, such as the calendar, all prior documents, and all active members.

The URL is:  https://grantees.reformsupportnetwork.org/

Your username is:  [account:user]
Additionally, you may also use your email address to access the portal.

You will receive your password shortly in a separate email.

For additional support, please contact info@reformsupportnetwork.org.

Thank you, 

The Reform Support Network',
              '#argument map' => array(
                'user' => 'account',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'account',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail_to_user',
            '#info' => array(
              'label' => 'Send a mail with username to new user',
              'label callback' => FALSE,
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'Recipient',
                ),
              ),
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_when_user_account_is_updated_send_email' => array(
        '#type' => 'rule',
        '#set' => 'event_user_update',
        '#label' => 'when user account is updated, send email',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'reformsupportnetwork_core',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'to' => 'wwilkinson@icfi.com;lharris3@icfi.com;jdelp@icfi.com;cmurphy@icfi.com;lburrows@icfi.com',
              'from' => '',
              'subject' => 'Reform Support Network: User "[account:user]" Updated',
              'message' => 'User [account:user] has updated his/her account on the Reform Support Network. You can view the user\'s new profile at [account:account-url].',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => 'account',
                  ),
                  'message' => array(
                    '0' => 'account',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function reformsupportnetwork_core_views_api() {
  return array(
    'api' => '2',
  );
}
