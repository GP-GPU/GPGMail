/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBackgroundActivityScheduler, NSObject<OS_dispatch_source>;

@interface PowerManager : NSObject
{
    struct __CFRunLoopSource *_powerSourceRunLoopSource;
    NSBackgroundActivityScheduler *_applicationRefreshActivity;
    NSObject<OS_dispatch_source> *_fetchCheckPointTimer;
    id _applicationRefreshCompletionHandler;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy) id applicationRefreshCompletionHandler; // @synthesize applicationRefreshCompletionHandler=_applicationRefreshCompletionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *fetchCheckPointTimer; // @synthesize fetchCheckPointTimer=_fetchCheckPointTimer;
@property(readonly, nonatomic) NSBackgroundActivityScheduler *applicationRefreshActivity; // @synthesize applicationRefreshActivity=_applicationRefreshActivity;
- (void).cxx_destruct;
- (void)_applicationRefreshDidEnd;
- (id)_applicationRefreshShouldBegin;
- (void)_systemDidWake:(id)arg1;
- (void)_systemWillSleep:(id)arg1;
- (void)registerForPowerEvents;
- (void)dealloc;
- (id)init;

@end

