//
//  BaseThirdSplashAd.h
//  sspFramework
//
//  Created by admin on 2023/8/12.
//

#define MainW [[UIScreen mainScreen] bounds].size.width
#define MainH [[UIScreen mainScreen] bounds].size.height
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SATools.h"
#import "sspSplashAd.h"

typedef void (^Splash_Load_CallBack)(SAAdType type,BOOL loadRes,NSString * ecpm,NSObject * adobj,UIView* adView,bool iscache);//ecpm暂时没用到
typedef void (^Splash_Show_CallBack)(SAAdType type,BOOL loadRes,NSString * ecpm,NSObject * adobj,UIView* adView);//ecpm暂时没用到
typedef void (^Splash_Show_Failed)(SAAdType type);

@interface BaseThirdSplashAd : NSObject<sspSplashDelegate>

@property (nonatomic, weak) UIViewController *rootViewController;
@property (nonatomic, assign) CGRect adFrame;
@property (nonatomic, strong) UIView *bottomView;
@property (nonatomic, copy) NSString * postionId;//广告位id
@property (nonatomic, assign) BOOL showBottomView;
@property (nonatomic,weak)id<sspSplashDelegate>delegate;
@property (nonatomic, strong) UIView *adobjcView;
@property (nonatomic, strong) NSObject *adobjc;
@property (nonatomic, assign) SAAdType adShowType;
@property (nonatomic, strong) NSMutableArray * ObjInstanceArrays;


@property(nonatomic,copy)Splash_Load_CallBack ad_LoadCallback;

@property(nonatomic,copy)Splash_Show_CallBack ad_BU_ShowCallback;
@property(nonatomic,copy)Splash_Show_CallBack ad_GDT_ShowCallback;
@property(nonatomic,copy)Splash_Show_CallBack ad_KS_ShowCallback;
@property(nonatomic,copy)Splash_Show_CallBack ad_BQT_ShowCallback;
@property(nonatomic,copy)Splash_Show_CallBack ad_ZY_ShowCallback;
@property(nonatomic,copy)Splash_Show_CallBack ad_HX_ShowCallback;
@property(nonatomic,copy)Splash_Show_Failed ad_showfailCallback;


-(void)load_BuSplash_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_GDTSplash_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_KSSplash_PosId:(NSString*)posId adview:(UIView*)adview cheEcpm:(NSString*)ecpm;

-(void)load_BQTSplash_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_ZYSplash_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_HXSplash_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)show_Splash_BU:(NSNotification *)notifa;
-(void)show_Splash_GDT:(NSNotification *)notifa;
-(void)show_Splash_KS:(NSNotification *)notifa;
-(void)show_Splash_BQT:(NSNotification *)notifa;
-(void)show_Splash_ZY:(NSNotification *)notifa;
-(void)show_Splash_HX:(NSNotification *)notifa;


-(void)addObserver;
-(void)removeObserver;
-(void)RemoveAllAdFromWindows;
-(void)deleteViewInstance:(UIView*)adView;
-(void)deleteNSObjInstance:(NSObject*)objins;
-(NSString *)C_Time_Obj:(NSObject*)objins;
-(NSString *)C_Time_view:(UIView*)adview;

@end

