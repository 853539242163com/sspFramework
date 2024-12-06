//
//  SettingSSPConfig.h
//  sspFramework
//
//  Created by admin on 2023/8/14.
//

#import <Foundation/Foundation.h>
#import "SASlot.h"

@interface SettingSSPConfig : NSObject

/*
 中青平台addid
 slotM:客户端需要传的参数
 */
+(void)SettingSSPWithAppId:(NSString *)appId slotM:(SASlot*)slotM;

+(NSString*)sdkVersion;

/*
 金丝雀非标广告
 appid：对应appid
 slotM:客户端需要传的参数
 */
+(void)Setting_JSQ_WithAppId:(NSString *)appId slotM:(SASlot*)slotM;

+(void)SettingWithSlotM:(SASlot*)slotParams;

+(void)SettingWithChanceRate:(NSString*)postionId fromCache:(int)fromCache;


@end
