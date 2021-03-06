//
//  CustomAnnotation.h
//  IPSOS
//
//  Created by 沈鹏 on 14-8-1.
//  Copyright (c) 2014年 沈鹏. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface CustomAnnotation : NSObject<MKAnnotation>

-(id) initWithCoordinate:(CLLocationCoordinate2D) coords;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@end
