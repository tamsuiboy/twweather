//
//  TWWeatherAppDelegate.h
//  TWWeather
//
//  Created by zonble on 2009/07/31.s
//

extern NSString *TWCurrentForecastDidFetchNotification;
extern NSString *forecastOfCurrentLocationPreference;

@interface TWWeatherAppDelegate : NSObject <UIApplicationDelegate> 
{
    UIWindow *window;
    UINavigationController *navigationController;
	NSDictionary *forecastOfCurrentLocation;
}

+ (TWWeatherAppDelegate*)sharedDelegate;
- (NSString *)imageNameWithTimeTitle:(NSString *)timeTitle description:(NSString *)description;
- (void)fetchForecastOFCurrentLocation;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) IBOutlet NSDictionary *forecastOfCurrentLocation;

@end

