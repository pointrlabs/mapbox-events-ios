#import "MMELocationManager.h"
#import "MMETestStub.h"
#import "MMELocationManaging.h"

@interface MMELocationManagerFake : MMETestStub <MMELocationManaging>

@property (nonatomic, weak) id<MMELocationManagerDelegate> delegate;
@property (nonatomic, getter=isUpdatingLocation, readonly) BOOL updatingLocation;
@property (nonatomic, getter=isMetricsEnabledForInUsePermissions) BOOL metricsEnabledForInUsePermissions;

- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
