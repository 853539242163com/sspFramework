//
//  BaseTInterstitialAd.h
//  sspFramework
//
//  Created by admin on 2023/8/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "sspInterstitialAd.h"
#import "SATools.h"
#import "TempObjInstance.h"
#import "SAInfo.h"

typedef void (^Interstital_Load_CallBack)(SAInfo * infoP);
//typedef void (^Interstital_Load_CallBack)(SAAdType type,BOOL loadRes,NSString * ecpm,NSObject * adobj,bool isCache);
typedef void (^Interstital_Show_CallBack)(SAAdType type,BOOL loadRes,NSString * ecpm,NSObject * adobj,UIView* adView);//ecpm暂时没用到

@interface BaseTInterstitialAd : NSObject<sspInterstitalDelegate>

@property (nonatomic, weak) UIViewController *rootViewController;
@property (nonatomic, copy) NSString * showType;

@property (nonatomic, copy) NSString * postionId;//广告位id


@property(nonatomic,weak)id<sspInterstitalDelegate>delegate;

@property (nonatomic, strong) UIView *adobjcView;
@property (nonatomic, strong) NSObject *adobjc;
@property (nonatomic, strong) NSMutableArray * ObjInstanceArrays;


@property(nonatomic,copy)Interstital_Load_CallBack ad_LoadCallback;

@property(nonatomic,copy)Interstital_Show_CallBack ad_BU_ShowCallback;
@property(nonatomic,copy)Interstital_Show_CallBack ad_GDT_ShowCallback;
@property(nonatomic,copy)Interstital_Show_CallBack ad_KS_ShowCallback;
@property(nonatomic,copy)Interstital_Show_CallBack ad_BQT_ShowCallback;
@property(nonatomic,copy)Interstital_Show_CallBack ad_ZY_ShowCallback;
@property(nonatomic,copy)Interstital_Show_CallBack ad_HX_ShowCallback;

-(void)load_BuInteral_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_GDTInteral_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_KSInteral_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_BQTInteral_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_ZYInteral_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(void)load_HXInteral_PosId:(NSString*)posId obj:(NSObject*)adobj cheEcpm:(NSString*)ecpm;

-(SAInfo*)infoP:(SAAdType)type pId:(NSString*)posid res:(BOOL)res ecpm:(NSString*)ecpm obj:(NSObject*)oj iscache:(BOOL)che;

-(void)addObserver;
-(void)removeObserver;

-(void)show_Inter_BU:(NSNotification *)notifa;
-(void)show_Inter_GDT:(NSNotification *)notifa;
-(void)show_Inter_KS:(NSNotification *)notifa;
-(void)show_Inter_BQT:(NSNotification *)notifa;
-(void)show_Inter_ZY:(NSNotification *)notifa;
-(void)show_Inter_HX:(NSNotification *)notifa;

-(void)deleteViewInstance:(UIView*)adView;
-(void)deleteNSObjInstance:(NSObject*)objins;
-(NSString *)C_Time_Obj:(NSObject*)objins;

@end
