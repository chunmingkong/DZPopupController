//
//  DZPopupControllerFrameView.h
//  DZPopupController
//
//  Created by cocopon on 5/14/12. Modified by Zachary Waldowski.
//  Copyright (c) 2012 cocopon. All rights reserved.
//  Copyright (c) 2012 Dizzy Technology. All rights reserved.
//

#import "DZPopupControllerDrawingView.h"

@interface DZPopupControllerFrameView : DZPopupControllerDrawingView

@property (nonatomic, strong) UIColor *baseColor;
@property (nonatomic, getter = isDecorated) BOOL decorated;

@end