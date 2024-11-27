//
//  SATools.h
//  sspFramework
//
//  Created by admin on 2023/8/14.
//

#define Notif_Reward_bidd_Show         @"Notif_Reward_bidd_Show"
#define Notif_Intertial_bidd_Show      @"Notif_Intertial_bidd_Show"
#define Notif_Feeds_bidd_Show         @"Notif_Feeds_bidd_Show"
#define Notif_Splash_bidd_Show         @"Notif_Splash_bidd_Show"

#define Notif_Feeds_Material_Show         @"Notif_Feeds_Material_Show"//自渲染通知

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/*
 广告类型
 */
typedef enum : NSUInteger {
    SAAdBU,//穿山甲
    SAAdGDT,//广点通
    SAAdKS,//快手
    SAAdZY,//章鱼
    SAAdBQT,//百度
    SAAdHX,//华夏
    SAAdNone,//未知（初始化、请求等阶段无类型）
} SAAdType;


@interface SATools : NSObject

+ (instancetype)shared;


+(NSString*)valueWithKey:(NSString*)key;

-(NSInteger)h_L_Ec:(NSString*)hlec;

-(NSInteger)h_Ec:(NSString*)hec;

-(BOOL)IsTimeOut:(SAAdType)adtype ads:(NSInteger)ads timestr:(NSString*)timestr;

-(NSString*)CurrentTime;

-(UIWindow*)window13;

-(BOOL)rdom;

@end
