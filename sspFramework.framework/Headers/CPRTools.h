//
//  CPRTools.h
//  sspFramework
//
//  Created by fc on 2024/3/5.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SAModel.h"


@interface CPRTools : NSObject

+ (instancetype)shared;

-(void)CPRSlotId:(NSString*)slotId posId:(NSString*)posId adType:(NSString *)type;

-(void)loadSuccessToDeleteWithPosId:(NSString*)posId SlotId:(NSString*)slotId;

-(void)delCPRSlotWithModel:(SAModel*)smodel;

-(NSArray*)notRequestIds:(NSString*)posId;

-(NSArray*)tFailSlotArray:(NSString*)posId;


-(NSString *)getTimeNow;

-(void)logWithSlotId:(NSString *)slotId samodel:(SAModel*)sm tactics:(SA_Tactics_configs *)tModel SlotM:(SA_Slot_configs *)slotModel;


-(void)saveValue:(NSString*)value ForKey:(NSString*)key;

-(NSString*)valueWithKey:(NSString*)key;

@end
