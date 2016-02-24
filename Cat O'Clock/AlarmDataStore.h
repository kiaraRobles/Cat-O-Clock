//
//  AlarmDataStore.h
//  Cat O'Clock
//
//  Created by Kiara Robles on 2/18/16.
//  Copyright © 2016 kiaraRobles. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlarmModel.h"

@interface AlarmDataStore : NSObject

@property (nonatomic, strong) NSMutableArray *alarmsArray;

+ (instancetype)sharedAlarmDataStore;

- (void)addAlarmToAlarmArray:(AlarmModel *)alarmModel;
- (void)removeAlarmFromAlarmArrayAtIndex:(NSUInteger)alarmIndex;
- (void)updateAlarmInAlarmArray:(NSUInteger)alarmIndex;

- (void)saveAlarmsToUserDefaults;
- (NSArray *)getAlarmsFromUserDefaults;
- (void)checkForValidAlarm;

@end