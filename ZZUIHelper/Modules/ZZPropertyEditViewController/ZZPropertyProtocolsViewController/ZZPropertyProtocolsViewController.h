//
//  ZZPropertyProtocolsViewController.h
//  ZZUIHelper
//
//  Created by 李伯坤 on 2017/2/26.
//  Copyright © 2017年 李伯坤. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ZZProtocol.h"

@interface ZZPropertyProtocolsViewController : NSViewController

@property (nonatomic, strong) ZZNSObject *object;

@property (nonatomic, strong) ZZProtocol *protocol;

@end