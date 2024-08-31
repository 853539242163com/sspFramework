//
//  sspFeedExpressAd.h
//  sspFramework
//
//  Created by admin on 2023/8/18.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SAInfo.h"

@protocol sspFeedExpressDelegate <NSObject>
/*
 广告加载成功
 renderType 为TYPE_MATERIAL时需要回调 sspRegisterAction方法
 renderType 为TYPE_TEMPLATE时可不用回调 sspRegisterAction方法  直接取info.infoView模版渲染即可
 */
-(void)sspFeedAdLoadSuccess:(NSObject*)adobj infoP:(SAInfo*)info;
/*
 自渲染广告加载成功后 需要回调view注册事件
 adtype ：哪家广告
 infoView ：自渲染的view
 */
-(void)sspRegisterAction:(SAInfo*)infoObj;
/*
 广告加载失败
 */
-(void)sspFeedExpressAdLoadFail:(NSError*)error;
/*
 广告渲染成功
 */
-(void)sspFeedExpressAdRenderSuccess;
/*
 广告曝光成功
 */
-(void)sspFeedExpressAdExposureSuccess;
/*
 广告渲染失败
 */
-(void)sspFeedExpressAdRenderFail:(NSError*)error;
/*
 广告点击
 */
-(void)sspFeedExpressAdDidClick;
/*
 广告点击了不喜欢
 */
-(void)sspFeedExpressAdClickDisLike:(UIView*)adView;
/*
 广告已经关闭
 */
-(void)sspFeedExpressAdDidClose;
/*
 广告新打开的页面关闭
 */
-(void)sspFeedExpressAdDidCloseOther;

@end

typedef void (^Feeds_CallBackInfo)(SAInfo * infoP);

@interface sspFeedExpressAd : NSObject<sspFeedExpressDelegate>

@property (nonatomic, weak) UIViewController *rootViewController;

@property(nonatomic,copy)Feeds_CallBackInfo feedsInfo;

@property (nonatomic, assign) CGSize adsize;

@property(nonatomic,weak)id<sspFeedExpressDelegate>delegate;

@property (nonatomic, copy) NSString *postionId;

@property (nonatomic, assign) NSInteger onceReqCount;//内部使用 外部接入方暂时没用到


-(void)loadFeedExpress;

-(void)showFeedExpress;


@end

