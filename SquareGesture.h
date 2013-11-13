//
//  SquareGesture.h
//
//  Created by Aaron Klick on 10/17/09.
//  Copyright 2009 Vantage Technic. All rights reserved.
//

#import "CGPointUtils.h"


@interface SquareGesture : NSObject {
	NSMutableArray *_allPoints;
	CGPoint _firstTouch;
	CGPoint _lastTouch;
	
	CGSquare _gestureSquare;
	
	NSTimeInterval _firstTouchTime;
	NSTimeInterval _lastTouchTime;
}

@property (readwrite) float squareClosureTolerance;
@property (readwrite) float timeTolerance;
@property (readwrite) float straightnessTolerance;
@property (readwrite) float squarenessTolerance;

-(CGSquare) getSquare;
-(BOOL) isCompleteSquare:(NSMutableArray *) currentPoints first:(CGPoint) touchFirst last:(CGPoint) touchLast firstTime:(NSTimeInterval) firstTime lastTime:(NSTimeInterval) lastTime;

@end
