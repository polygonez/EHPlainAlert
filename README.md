# EHPlainAlert

This is simple extension for presenting multiple system-wide notifications from bottom of device screen.

<img src="/assets/EHPlainAlert.gif">

## Requirements

- Requires iOS 7.0 or later
- Requires Automatic Reference Counting (ARC)

##Features

- Supports multiple messages on one screen
- Simple use actions
- Highly customizable

##Author
Danila Gusev

<a href="mailto:jos.shad@gmail.com">jos.shad@gmail.com</a>

##Usage

###Presenting notification

All messages can simply presented via static method call:

	[EHPlainAlert showAlertWithTitle:@"Success" message:@"Something works!" type:ViewAlertSuccess];

###Presenting error notification

For simplifying error handling you can use:

	- (void)someError:(NSError *)myError
	{
		[EHPlainAlert showError:error];
	}

###Hiding Messages

Notifications will hidden automatically after 4 seconds. You can override ***EHDEFAULT_HIDING_DELAY*** for changing behavior.

Or you can tap on message to hide it.

###On Tap Actions

Default behavior for tapping on notification is hiding view. But you can specify additional actions:

    EHPlainAlert * ehAlert = [[EHPlainAlert alloc] initWithTitle:@"Hmm..." message:@"Tap for information" type:ViewAlertInfo];
    ehAlert.action = ^{
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"https://github.com/josshad/EHPlainAlert"]];
    };
    [ehAlert show];

###Customization

Fonts:
	EHPlainAlert * ehAlert = [[EHPlainAlert alloc] initWithTitle:@"Info" message:@"This is info message" type:ViewAlertInfo];
    ehAlert.titleFont = [UIFont fontWithName:@"TrebuchetMS" size:15];
    ehAlert.subTitleFont = [UIFont fontWithName:@"TrebuchetMS-Italic" size:12];
    [ehAlert show];

Colors:
	EHPlainAlert * ehAlert = [[EHPlainAlert alloc] initWithTitle:@"Hmm..." message:@"Tap for information" type:ViewAlertInfo];
    ehAlert.messageColor = [UIColor blueColor];
    [ehAlert show];

## License

Usage is provided under the <a href="http://opensource.org/licenses/MIT" target="_blank">MIT</a> License. See <a href="https://github.com/terryworona/TWMessageBarManager/blob/master/LICENSE">LICENSE</a> for full details.