//
//  sspSplashAd.h
//  sspFramework
//
//  Created by admin on 2023/8/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol sspSplashDelegate <NSObject>
/*
 广告加载成功
 */
-(void)sspSplashAdLoadSuccess;
/*
 广告加载失败
 */
-(void)sspSplashAdLoadFail:(NSError*)error;
/*
 广告渲染成功
 */
-(void)sspSplashAdRenderSuccess;
/*
 广告曝光成功
 */
-(void)sspSplashAdExposureSuccess;
/*
 广告渲染失败
 */
-(void)sspSplashAdRenderFail:(NSError*)error;
/*
 广告点击
 */
-(void)sspSplashAdDidClick;
/*
 广告已经关闭
 */
-(void)sspSplashAdDidClose;
/*
 广告新打开的页面关闭
 */
-(void)sspSplashAdDidCloseOther;

@end



@interface sspSplashAd : NSObject

@property (nonatomic, weak) UIViewController *rootViewController;
/*
 1、adFrame属性专为特殊情况下开屏半屏使用
 2、正常全屏开屏忽略此字段（不要赋值）
 */
@property (nonatomic, assign) CGRect adFrame;

@property(nonatomic,weak)id<sspSplashDelegate>delegate;
@property (nonatomic, assign) BOOL showBottomView;//默认NO
@property (nonatomic, strong) UIView *bottomView;
@property (nonatomic, copy) NSString *postionId;//必传


-(void)loadSplash;

-(void)showSplash;


@end

