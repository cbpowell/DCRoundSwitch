//
//  DCRoundSwitchToggleLayer.h
//
//  Created by Patrick Richards on 29/06/11.
//  MIT License.
//
//  http://twitter.com/patr
//  http://domesticcat.com.au/projects
//  http://github.com/domesticcatsoftware/DCRoundSwitch
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface DCRoundSwitchToggleLayer : CALayer

@property (nonatomic, strong) UIColor *onTintColor;
@property (nonatomic, strong) UIColor *offTintColor;
@property (nonatomic, strong) NSString *onString;
@property (nonatomic, strong) NSString *offString;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic) BOOL drawOnTint;
@property (nonatomic) BOOL clip;

- (id)initWithOnString:(NSString *)anOnString offString:(NSString *)anOffString onTintColor:(UIColor *)anOnTintColor offTintColor:(UIColor *)anOffTintColor;

@end
