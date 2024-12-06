//
//  StandardAd.h
//  sspFramework
//
//  Created by fc on 2024/2/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol StandardAdDelegate <NSObject>
/*
 广告加载成功
 */
-(void)StandardAdLoadSuccess:(UIView*)adView;
/*
 广告加载失败
 */
-(void)StandardAdLoadFail:(UIView*)adView Errors:(NSError*)error;
/*
 广告曝光成功
 */
-(void)StandardAdExposureSuccess:(UIView*)adView;

/*
 广告点击
 */
-(void)StandardAdDidClick:(UIView*)adView;
/*
 广告已经关闭
 */
-(void)StandardAdDidClose:(UIView*)adView;
/*
 广告新打开的页面关闭
 */
-(void)StandardAdDidCloseOther:(UIView*)adView;

@end

@interface StandardAd : NSObject

@property (nonatomic, weak) UIViewController *rootVC;

@property(nonatomic,weak)id<StandardAdDelegate>delegate;

@property (nonatomic, copy) NSString *postionId;
/*
 广告大小
 */
@property (nonatomic,assign) CGSize adSize;
/*
 广告logo是否显示
 */
@property (nonatomic,assign) bool nonstandard;
/**
 banner刷新时间间隔，30-120s之间.
*/
@property (nonatomic, assign) int refershTime;

-(void)loadStandardAd;

@end
