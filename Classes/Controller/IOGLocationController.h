//
//  IOGLocationController.h
//  Pods
//
//  Created by Vincil Bishop on 1/8/14.
//
//

#import <Foundation/Foundation.h>

#define kIOGLocationController_LocationUpdated_Notification @"kIOGLocationController_LocationUpdated_Notification"

@interface IOGLocationController : NSObject<CLLocationManagerDelegate>

@property (nonatomic,strong) CLLocationManager *locationManager;

@property (nonatomic,strong) CLLocation *currentLocation;
@property (nonatomic,strong) CLLocation *lastLocation;

+ (IOGLocationController*) sharedController;

@end