//
//  CanvasText.h
//  RNImageEditor
//
//  Created by Luciano D'Agostini on 23.05.19.
//  Copyright © 2019 Terry. All rights reserved.
//

@interface CanvasText : NSObject

@property (nonatomic) NSString *text;
@property (nonatomic) UIFont *font;
@property (nonatomic) UIColor *fontColor;
@property (nonatomic) CGPoint anchor, position;
@property (nonatomic) NSDictionary *attribute;
@property (nonatomic) BOOL isAbsoluteCoordinate;
@property (nonatomic) CGRect drawRect;
@end
