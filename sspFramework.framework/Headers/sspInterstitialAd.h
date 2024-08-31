//
//  sspInterstitialAd.h
//  sspFramework
//
//  Created by admin on 2023/8/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@protocol sspInterstitalDelegate <NSObject>
/*
 广告加载成功
 */
-(void)sspInterstitalAdLoadSuccess;
/*
 广告加载失败
 */
-(void)sspInterstitalAdLoadFail:(NSError*)error;
/*
 广告渲染成功
 */
-(void)sspInterstitalAdRenderSuccess;
/*
 广告曝光成功
 */
-(void)sspInterstitalAdExposureSuccess;
/*
 广告渲染失败
 */
-(void)sspInterstitalAdRenderFail:(NSError*)error;
/*
 广告点击
 */
-(void)sspInterstitalAdDidClick;
/*
 广告已经关闭
 */
-(void)sspInterstitalAdDidClose;
/*
 广告新打开的页面关闭
 */
-(void)sspInterstitalAdDidCloseOther;

@end

@interface sspInterstitialAd : NSObject<sspInterstitalDelegate>

@property (nonatomic, weak) UIViewController *rootViewController;

@property(nonatomic,weak)id<sspInterstitalDelegate>delegate;

@property (nonatomic, copy) NSString *postionId;


-(void)loadInterstital;

-(void)showInterstital;

@end
