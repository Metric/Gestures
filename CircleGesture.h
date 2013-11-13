//
//  CircleGesture.h
//
//  Created by Aaron Klick on 10/10/09.
//  Copyright 2009 Vantage Technic. All rights reserved.
//

#import "CGPointUtils.h"

@interface CircleGesture : NSObject {
	NSMutableArray *_allPoints;
	CGPoint _firstTouch;
	NSTimeInterval _firstTouchTime;
	CGPoint _lastTouch;
	NSTimeInterval _lastTouchTime;
	
	CGCircle _completeCircle;
}

@property (nonatomic) float circleClosureDistanceVariance;
@property (nonatomic) float maximumCircleTime;
@property (nonatomic) float radiusVariancePercent;
@property (nonatomic) float overlapTolerance;

-(CGCircle) createCircle;
-(CGCircle) getCircle;

-(BOOL) isCompleteCircle:(NSMutableArray *) currentPoints first:(CGPoint) first last:(CGPoint) last firstTime:(NSTimeInterval) firstTime lastTime:(NSTimeInterval) lastTime;

@end
