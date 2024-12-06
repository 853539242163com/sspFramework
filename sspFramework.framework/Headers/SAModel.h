//
//  SAModel.h
//  sspFramework
//
//  Created by admin on 2023/8/14.
//

#import <Foundation/Foundation.h>


@interface SA_Promotion_cvr_platform_count :NSObject
@property (nonatomic , copy) NSString              * media_count_limit;
@property (nonatomic , copy) NSString              * media_platform;

@end

@interface SA_Promotion_ctr_platform_count :NSObject
@property (nonatomic , copy) NSString              * media_count_limit;
@property (nonatomic , copy) NSString              * media_platform;

@end

@interface SA_Slot_configs :NSObject
@property (nonatomic , copy) NSString              * slot_platform;
@property (nonatomic , copy) NSString              * slot_show_type;//展示类型（自渲染||模板）
@property (nonatomic , assign) NSInteger              slot_price;
@property (nonatomic , copy) NSString              * slot_app_id;
@property (nonatomic , assign) NSInteger              slot_smart_drop;
@property (nonatomic , assign) NSInteger              slot_support_shake;
@property (nonatomic , assign) NSInteger              slot_smart_ignore;//激励看看赚优化开关
@property (nonatomic , copy) NSString              * slot_id;
@property (nonatomic , copy) NSString              * slot_type;

@property (nonatomic , assign) NSInteger          failLimit;//失败次数
@property (nonatomic , assign) NSInteger          cooling_times;//冷却时长 s


@end

@interface SA_Tactics_configs :NSObject
@property (nonatomic , copy) NSString              * tactics_type;
@property (nonatomic , copy) NSString              * tactics_id;
@property (nonatomic , copy) NSString              * request_timeout;
@property (nonatomic , copy) NSArray<SA_Slot_configs *>              * slot_configs;
@end

@interface SA_Bidding_config :NSObject
@property (nonatomic , copy) NSString              * tactics_id;
@property (nonatomic , copy) NSString              * tactics_type;
@property (nonatomic , copy) NSString              * request_timeout;
@property (nonatomic , copy) NSArray<SA_Slot_configs *>              * slot_configs;
@end

@interface SA_Data : NSObject

@property (nonatomic , copy) NSString              * position_name;
@property (nonatomic , copy) NSString              * group_id;
@property (nonatomic , copy) NSString              * policy_name;
@property (nonatomic , copy) NSString              * position_cache_count;
@property (nonatomic , assign) NSInteger              slot_request_failed_limit;
@property (nonatomic , assign) NSInteger              slot_request_cooling_time;

@property (nonatomic , copy) NSArray<SA_Promotion_cvr_platform_count *>              * promotion_cvr_platform_count;
@property (nonatomic , copy) NSArray<SA_Promotion_ctr_platform_count *>              * promotion_ctr_platform_count;
@property (nonatomic , copy) NSArray<SA_Tactics_configs *>              * tactics_configs;
@property (nonatomic , strong) SA_Bidding_config              * bidding_config;

@property (nonatomic , copy) NSString              * distance_deal_bast;
@property (nonatomic , copy) NSString              * distance_slide_ratio_up;
@property (nonatomic , copy) NSString              * group_name;
@property (nonatomic , copy) NSString              * promotion_cvr_award_amount;
@property (nonatomic , copy) NSString              * position_id;
@property (nonatomic , copy) NSString              * distance_slide_max;
@property (nonatomic , copy) NSString              * promotion_trial_time;
@property (nonatomic , copy) NSString              * position_config_verify;
@property (nonatomic , copy) NSString              * promotion_ctr_show_ratio;
@property (nonatomic , copy) NSString              * distance_slide_ratio_down;
@property (nonatomic , copy) NSString              * promotion_ctr_position_count;
@property (nonatomic , copy) NSString              * distance_jump_default;
@property (nonatomic , assign) NSInteger              distance_start_default;


@property (nonatomic , copy) NSString              * promotion_cvr_position_count;
@property (nonatomic , assign) NSString              * dynamic_mode_switch;
@property (nonatomic , copy) NSString              * promotion_ctr_award_amount;
@property (nonatomic , copy) NSString              * promotion_award_unit;
@property (nonatomic , copy) NSString              * policy_id;
@property (nonatomic , copy) NSString              * bidding_minimum_price;
@property (nonatomic , copy) NSString              * promotion_cvr_show_ratio;

@end

@interface SAModel : NSObject

@property (nonatomic , copy) NSString              * message;
@property (nonatomic , strong) SA_Data              * data;
@property (nonatomic , copy) NSString              * code;

@end

