//
//  SASlot.h
//  sspFramework
//
//  Created by admin on 2023/8/14.
//

#import <Foundation/Foundation.h>


@interface SASlot : NSObject
/*
 中青平台media_app_id
 */
@property(nonatomic,nullable, copy)NSString * media_app_id;
/*
 中青平台appid
 */
@property(nonatomic,nullable, copy)NSString * app_id;
/*
 接⼊⽅应⽤渠道
 */
@property(nonatomic,nullable, copy)NSString * partner_channel;
/*
 接⼊⽅应⽤⽤⼾信息
 */
@property(nonatomic,nullable, copy)NSString * partner_user_id;
/*
接⼊⽅⽤⼾是否为投放⽤⼾
 */
@property (nonatomic,nullable, copy)NSString *  partner_launch_user;
/*
 接⼊⽅传⼊的额外参数
 */
@property(nonatomic,nullable, copy)NSString * partner_extra_params;
/*
 中青平台广告位id （请求广告时传即可）
 */
@property(nonatomic, nullable, copy)NSString * position_id;
/*
idfa
 */
@property(nonatomic, nullable, copy)NSString * idfa;

@end

