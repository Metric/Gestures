//
//  XGesture.h
//
//  Created by Aaron Klick on 10/15/09.
//  Copyright 2009 Vantage Technic. All rights reserved.
//

#import "CGPointUtils.h"


@interface XGesture : NSObject {
	CGX _gestureX;
	
	CGPoint _firstTouch;
	CGPoint _lastTouch;
	
	NSTimeInterval _firstLineTime;
	NSTimeInterval _secondLineTime;
	
	int _count;
	
	CGLine _line1;
	CGLine _line2;
}

@property (readwrite) float centerTolerance;
@property (readwrite) float timeTolerance; 

-(void) createLine;
-(BOOL) isX:(CGPoint) first last:(CGPoint) last;

-(CGX) getX;
@end
