//
//  CGPointUtils.h
//  pocket Kat
//
//  Created by Aaron Klick on 10/10/09.
//  Copyright 2009 Vantage Technic. All rights reserved.
//

#import <math.h>

CGFloat distanceBetweenPoints (CGPoint first, CGPoint second);
CGFloat angleBetweenPoints(CGPoint first, CGPoint second);

typedef struct 
{
	CGPoint point1;
	CGPoint point2;
} CGLine;

typedef struct 
{
	CGPoint center;
	CGFloat radius;
} CGCircle;

typedef struct 
{
	CGLine line1;
	CGLine line2;
	
	CGPoint center;
} CGX;

typedef struct
{
	CGPoint center;
	CGFloat width;
	CGFloat height;
} CGSquare;


NSString* NSStringFromCGPoint(CGPoint point);
CGPoint CGPointFromNSString(NSString *pointString);
CGCircle CGMakeCircle(CGPoint center, CGFloat radius);
CGX CGMakeX(CGLine line1, CGLine line2, CGPoint center);
CGLine CGMakeLine(CGPoint point1, CGPoint point2);
CGSquare CGMakeSquare(CGPoint center, CGFloat width, CGFloat height);

CGFloat angleBetweenLines(CGLine line1, CGLine line2);
CGFloat distanceBetweenLines(CGLine line1, CGLine line2);
BOOL CGCircleCollision(CGCircle circle1, CGCircle circle2);