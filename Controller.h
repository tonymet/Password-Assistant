//
//  Controller.h
//  Password Assistant
//
//	Created by Adam Knight on 5/23/06.
//	Copyright 2006 codepoetry. All rights reserved.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy of this
//	software and associated documentation files (the "Software"), to deal in the Software
//	without restriction, including without limitation the rights to use, copy, modify,
//	merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
//	permit persons to whom the Software is furnished to do so, subject to the following
//	conditions:
//
//	The above copyright notice and this permission notice shall be included in all copies
//	or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//	INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//	PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
//	CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
//	OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//	Tons of thanks to boredzo for http://www.cocoadev.com/index.pl?PasswordAssistant
//

#import <Cocoa/Cocoa.h>
#import "SFPasswordAssistantInspectorController.h"

@interface Controller : NSObject {
	SFPasswordAssistantInspectorController *pwAsst;
	NSWindow *window;
	NSSecureTextField *secureTextField;
}

- (id) init;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification;

- (IBAction) showPasswordAssistantPanel:(id)sender;

@end
