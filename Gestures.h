//
//  Gestures.h
// 
//  Containment for all Gesture Motions
//
//  Created by Aaron Klick on 10/15/09.
//  Copyright 2009 Vantage Technic. All rights reserved.
//
#import "CGPointUtils.h"
#import "CircleGesture.h"
#import "XGesture.h"
#import "SquareGesture.h"

//Protocol for Gesture Delegate
@protocol GestureComplete <NSObject>

@optional
-(void) circleComplete:(CGCircle) circle;
-(void) xComplete:(CGX) x;
-(void) squareComplete:(CGSquare) square;
-(void) swipeLeftComplete;
-(void) swipeRightComplete;
-(void) swipeUpComplete;
-(void) swipeDownComplete;

@end

@interface Gestures : NSObject {
    int _currentPointAddition;
}

+ (Gestures *) sharedGestures;

@property (nonatomic, strong) CircleGesture *circle;
@property (nonatomic, strong) NSMutableArray *points;
@property (nonatomic, strong) XGesture *x;
@property (nonatomic, strong) SquareGesture *square;
@property (nonatomic, assign) id <GestureComplete> delegate;
@property (nonatomic) int pointResetLimit;

@property (nonatomic) BOOL useSwipes;
@property (nonatomic) BOOL useSquare;
@property (nonatomic) BOOL useCircle;
@property (nonatomic) BOOL useX;

@property (nonatomic) int swipeTolerance;
@property (nonatomic) CGPoint firstTouch;
@property (nonatomic) CGPoint lastTouch;
@property (nonatomic) int minPointCount;

@property (nonatomic) NSTimeInterval firstTouchTime;
@property (nonatomic) NSTimeInterval lastTouchTime;

-(BOOL) isSwipeLeft;
-(BOOL) isSwipeRight;
-(BOOL) isSwipeUp;
-(BOOL) isSwipeDown;

-(void) addPoint:(CGPoint) point;

-(CGPoint) getLeft;
-(CGPoint) getRight;
-(CGPoint) getDown;
-(CGPoint) getUp;

-(CGPoint) accelerationSpeed;

-(void) reset;

-(CGPoint) calculateVelocity:(CGPoint) point1 point2:(CGPoint) point2 duration:(CGFloat) duration; 

@end

