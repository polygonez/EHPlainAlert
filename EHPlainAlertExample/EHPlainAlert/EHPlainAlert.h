//
//  EHPlainAlert.h
//  HMTest
//
//  Created by Danila Gusev on 09/10/15.
//  Copyright © 2015 josshad. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum : NSUInteger {
    ViewAlertError,
    ViewAlertSuccess,
    ViewAlertInfo,
    ViewAlertPanic,
    ViewAlertUnknown
} ViewAlertType;

typedef void (^ ActionBlock)();


@interface EHPlainAlert : UIViewController

@property (nonatomic, strong) ActionBlock action;


+ (instancetype)showError:(NSError *)error;

+ (instancetype)showAlertWithTitle:(NSString *)title message:(NSString *)message type:(ViewAlertType)type;

- (id)initWithTitle:(NSString *)title message:(NSString *)message type:(ViewAlertType)type;

- (void)show;
@end
