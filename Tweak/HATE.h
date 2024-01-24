//
//  HATE.h
//  HATE
//
//  Created by Alexandra Aurora Göttlicher
//

#import <substrate.h>
#import <UIKit/UIKit.h>
#import "../Preferences/PreferenceKeys.h"
#import "../Preferences/NotificationKeys.h"

NSUserDefaults* preferences;
BOOL pfEnabled;

@interface UIKeyboard : UIView
@end

@interface UIKeyboardDockView : UIView
@end

@interface TUIPredictionViewStackView : UIView
@end

@interface TUIEmojiSearchInputView : UIView
@end

@interface UIKBRenderConfig : NSObject
@end
