//
//  TempObjInstance.h
//  sspFramework
//
//  Created by admin on 2023/8/17.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SATools.h"
#import "SAInfo.h"


@interface TempObjInstance : NSObject

@property (nonatomic, strong) UIView * adview;//目前快手开屏 信息流返回view用

@property (nonatomic, strong) NSObject *adobj;

@property (nonatomic, strong) NSObject *materlObj;

@property (nonatomic, copy) NSString * slotId;

@property (nonatomic, copy) NSString * appid;//2024/-09/01tcsdk 增加

@property (nonatomic, copy) NSString * partner_user_id;//2024/-09/01tcsdk 增加

@property (nonatomic, copy) NSString * adPlatform;//2024/-09/01tcsdk 增加

@property (nonatomic, copy) NSString * isbidding;

@property (nonatomic, assign) NSInteger slotPrice;

@property (nonatomic, assign) SAAdType adtype;

@property (nonatomic, assign) bool isCache;

@property (nonatomic, copy) NSString * slotJson;

@property (nonatomic, copy) NSString * cacheTime;

@property (nonatomic, copy) NSString * rewardVerify;

@property (nonatomic, copy) NSString * appsource;

@property (nonatomic, copy) NSString * device_platform;

@property (nonatomic, assign) SSPAdRenderType feedRenderAdtype;

@end

