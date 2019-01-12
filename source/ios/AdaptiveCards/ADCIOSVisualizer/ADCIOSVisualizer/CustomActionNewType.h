//
//  CustomActionNewType.h
//  ADCIOSVisualizer
//
//  Copyright © 2019 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <AdaptiveCards/ACFramework.h>

@interface CustomActionNewType:ACOBaseActionElement<ACOIBaseActionElementParser>

@property UIColor *color;
@property NSInteger cornerradius;

@end

@interface CustomActionNewTypeRenderer:ACRBaseActionElementRenderer

+ (CustomActionNewTypeRenderer *)getInstance;

@end
