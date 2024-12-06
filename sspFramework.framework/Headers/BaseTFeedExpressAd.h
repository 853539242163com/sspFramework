//
//  BaseTFeedExpressAd.h
//  sspFramework
//
//  Created by admin on 2023/8/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "sspFeedExpressAd.h"
#import "SATools.h"
#import "TempObjInstance.h"
#import "SAInfo.h"


typedef void (^Feeds_CallBackInfos)(SAInfo * infoP);
typedef void (^Feeds_Load_CallBack)(BOOL loadRes,SAInfo * infoP);
typedef void (^Feeds_Show_CallBack)(BOOL loadRes,SAInfo * infoP);

@interface BaseTFeedExpressAd : NSObject<sspFeedExpressDelegate>

@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic, copy) NSString * postionId;//广告位id

@property(nonatomic,weak)id<sspFeedExpressDelegate>delegate;


@property (nonatomic, strong) UIView *adobjcView;
@property (nonatomic, strong) NSObject *adobjc;
@property (nonatomic, strong) NSMutableArray * ObjInstanceArrays;
@property (nonatomic, assign) CGSize adsize;


@property(nonatomic,copy)Feeds_Load_CallBack ad_LoadCallback;

@property(nonatomic,copy)Feeds_CallBackInfos bu_CallInfos;
@property(nonatomic,copy)Feeds_CallBackInfos gdt_CallInfos;
@property(nonatomic,copy)Feeds_CallBackInfos bqt_CallInfos;
@property(nonatomic,copy)Feeds_CallBackInfos ks_CallInfos;
@property(nonatomic,copy)Feeds_CallBackInfos zy_CallInfos;
@property(nonatomic,copy)Feeds_CallBackInfos hx_CallInfos;

@property(nonatomic,copy)Feeds_Show_CallBack ad_BU_ShowCallback;
@property(nonatomic,copy)Feeds_Show_CallBack ad_GDT_ShowCallback;
@property(nonatomic,copy)Feeds_Show_CallBack ad_KS_ShowCallback;
@property(nonatomic,copy)Feeds_Show_CallBack ad_BQT_ShowCallback;
@property(nonatomic,copy)Feeds_Show_CallBack ad_ZY_ShowCallback;
@property(nonatomic,copy)Feeds_Show_CallBack ad_HX_ShowCallback;



-(void)load_BuFeeds:(SAInfo*)info obj:(NSObject*)adobj adview:(UIView*)adview;

-(void)load_GDTFeeds:(SAInfo*)info obj:(NSObject*)adobj adview:(UIView*)adview;

-(void)load_KSFeeds:(SAInfo*)info obj:(NSObject*)adobj adview:(UIView*)adview;

-(void)load_BQTFeeds:(SAInfo*)info obj:(NSObject*)adobj adview:(UIView*)adview;

-(void)load_ZYFeeds:(SAInfo*)info obj:(NSObject*)adobj adview:(UIView*)adview;

-(void)load_HXFeeds:(SAInfo*)info obj:(NSObject*)adobj adview:(UIView*)adview;



-(void)show_Feeds_BU:(NSNotification *)notifa;
-(void)show_Feeds_GDT:(NSNotification *)notifa;
-(void)show_Feeds_KS:(NSNotification *)notifa;
-(void)show_Feeds_BQT:(NSNotification *)notifa;
-(void)show_Feeds_ZY:(NSNotification *)notifa;
-(void)show_Feeds_HX:(NSNotification *)notifa;

-(void)show_Material_Feeds_KS:(NSNotification *)notifa;

-(void)deleteViewInstance:(UIView*)adView;
-(void)deleteNSObjInstance:(NSObject*)objins;
-(NSString *)C_Time_Obj:(NSObject*)objins;
-(void)forEach:(SAAdType)adType isC:(BOOL)iscache arr:(NSMutableArray *)objArray targetObj:(NSObject*)targetObj targetView:(UIView*)targetView materialObj:(NSObject*)materialobj ecpm:(NSInteger)ecpm back:(void(^)(SAInfo* infoP,NSObject * delobj))backParam;

@end

