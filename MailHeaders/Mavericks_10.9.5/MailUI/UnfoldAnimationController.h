/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOpenGLContext, NSTimer, NSWindow, QCRenderer;

@interface UnfoldAnimationController : NSObject
{
    NSWindow *_window;
    NSOpenGLContext *_glContext;
    QCRenderer *_renderer;
    NSTimer *_timer;
    struct CGSize _size;
    double _foldTop;
    double _foldHeight;
    double _startTime;
    double _duration;
    id _completionBlock;
}

@property(readonly, nonatomic) double overflowHeight;
- (void)_renderTimer:(id)arg1;
- (void)stopAnimation;
- (void)startAnimationWithDestinationImage:(id)arg1 completionBlock:(id)arg2;
- (void)setFoldHeight:(double)arg1;
- (void)prepareAnimationWithBackgroundImage:(id)arg1 sourceImage:(id)arg2 foldTop:(double)arg3 contentTop:(double)arg4 contentBottom:(double)arg5 sideMargin:(double)arg6 screenRect:(struct CGRect)arg7 parentWindow:(id)arg8;
- (void)dealloc;

@end

