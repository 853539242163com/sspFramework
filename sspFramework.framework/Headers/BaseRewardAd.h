//
//  BaseRewardAd.h
//  sspFramework
//
//  Created by admin on 2023/9/6.
//

#import <Foundation/Foundation.h>

#import "sspRewardVideoAd.h"
#import "SATools.h"

typedef void (^Ads_Rew_Load_CBack)(SAAdType type,BOOL loadRes,NSString * ecpm,NSObject * adobj,bool isCache);
typedef void (^Ads_Rew_Show_CBack)(SAAdType type,BOOL showRes,NSString * ecpm,NSObject * adobj,UIView* adView);

@interface BaseRewardAd : NSObject<sspRewardDelegate>

@property (nonatomic, copy) NSString * postionId;//广告位id


@property (nonatomic, copy) NSString * showType;

@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic, strong) NSMutableArray * ObjInstanceArrays;

@property(nonatomic,weak)id<sspRewardDelegate>delegate;

@property (nonatomic, strong) NSObject *adobjc;

/*
 如果设置了服务端验证，可以设置
 userId:用户的userid,可选
 extra:服务器端验证回调中包含的可选自定义奖励字符串
 */
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *extra;


@property(nonatomic,copy)Ads_Rew_Load_CBack ad_Rew_Load;


@property(nonatomic,copy)Ads_Rew_Show_CBack ad_BU_Show;
@property(nonatomic,copy)Ads_Rew_Show_CBack ad_GDT_Show;
@property(nonatomic,copy)Ads_Rew_Show_CBack ad_KS_Show;
@property(nonatomic,copy)Ads_Rew_Show_CBack ad_BQT_Show;


-(void)load_Reward_BuAd_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_Reward_GDTAd_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_Reward_KSAd_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_Reward_BQTAd_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;


-(void)addObserver;
-(void)removeObserver;

-(void)show_Rew_BU:(NSNotification *)notifa;
-(void)show_Rew_GDT:(NSNotification *)notifa;
-(void)show_Rew_KS:(NSNotification *)notifa;
-(void)show_Rew_BQT:(NSNotification *)notifa;
-(void)deleteViewInstance:(UIView*)adView;
-(void)deleteNSObjInstance:(NSObject*)objins;
-(NSString *)C_Time_Obj:(NSObject*)objins;

@end

