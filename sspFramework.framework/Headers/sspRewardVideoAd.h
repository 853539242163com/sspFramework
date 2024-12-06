//
//  sspRewardVideoAd.h
//  sspFramework
//
//  Created by admin on 2023/8/31.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TempObjInstance.h"

@protocol sspRewardDelegate <NSObject>
/*
 广告加载成功
 */
-(void)sspRewardAdLoadSuccess;
/*
 广告缓存成功（联盟视频广告缓存成功）
 建议在此回调后播放广告  以免造成播放卡顿
 */
-(void)sspRewardAdVideoLoadedSuccess:(TempObjInstance*)tempObj;
/*
 广告加载失败
 */
-(void)sspRewardAdLoadFail:(NSError*)error;
/*
 广告渲染成功
 */
-(void)sspRewardAdRenderSuccess;
/*
 广告渲染失败
 */
-(void)sspRewardAdRenderFail:(NSError*)error;
/*
 广告曝光成功
 */
-(void)sspRewardAdExposureSuccess;

/*
 广告播放完成
 */
-(void)sspRewardAdVideoPlayFinished;
/*
 广告达到激励条件
 */
-(void)sspRewardAdVideoRewardDidSuccess;

/*
 广告点击
 */
-(void)sspRewardAdDidClick;
/*
 广告点击
 */
-(void)sspRewardAdDidClickSkip;
/*
 广告已经关闭
 */
-(void)sspRewardAdDidClose;


@end


@interface sspRewardVideoAd : NSObject<sspRewardDelegate>


@property (nonatomic, weak) UIViewController *rootViewController;

@property(nonatomic,weak)id<sspRewardDelegate>delegate;

/*
 必传 广告位id
 */
@property (nonatomic, copy) NSString *postionId;

@property (nonatomic, assign) NSInteger earnEcpm;

/*
 如果设置了服务端验证，可以设置
 userId:用户的userid,可选
 extra:服务器端验证回调中包含的可选自定义奖励字符串
 */
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *extra;


-(void)loadRewardVideo;

-(void)showRewardVideo;

@end

