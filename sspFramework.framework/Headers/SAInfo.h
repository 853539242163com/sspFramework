//
//  SAInfo.h
//  sspFramework
//
//  Created by fc on 2023/10/17.
//

#import <Foundation/Foundation.h>
#import "SATools.h"

/*
 渲染方式
 */
typedef enum : NSUInteger {
    TYPE_MATERIAL,//自渲染
    TYPE_TEMPLATE,//模板
    TYPE_UNKNOWN
} SSPAdRenderType;
/*
 交互方式
 */
typedef enum : NSUInteger {
    ACTION_DOWNLOAD,//下载
    ACTION_INFO,//咨询
    ACTION_DEEP_LINK,//deeplink
    ACTION_CALL_PHONE,//打电话
    ACTION_UNKNOWN
} SSPAdActionType;
/*
 内容布局方式
 */
typedef enum : NSUInteger {
    Lay_Video,//视频
    Lay_HTML,
    Lay_LIVE,
    Lay_NORMAL, //上文下图 ||上图下文
    Lay_LARGE_PICTURE,//大图
    Lay_SMALL_PICTURE,//小图 左文右图||左图右文
    Lay_GROUP_PICTURES,//组图 三小图
    Lay_UNKNOWN
} SSPAdLayoutType;

@interface SAInfo : NSObject


@property (nonatomic, assign) SSPAdLayoutType layoutType;//布局方式
@property (nonatomic, assign) SSPAdActionType actionType;//事件
@property (nonatomic, assign) SSPAdRenderType renderType;//渲染方式
@property (nonatomic, assign) SAAdType adtype;//广告类型

@property (nonatomic, strong) NSMutableArray * _Nullable actionArrays;//需要注册点击事件的数组
@property (nonatomic, strong) NSObject * _Nonnull materialInObj;//素材类 根据联盟类型解析素材
@property (nonatomic, strong) NSObject * _Nonnull infoObj;//模板
@property (nonatomic, strong) UIView * _Nonnull infoView;


@property(nonatomic,nullable, copy)NSString * slotId;
@property(nonatomic,nullable, copy)NSString * eCPM;

@property(nonatomic,assign)bool loadRes;
@property(nonatomic,assign)bool isChe;

@end
