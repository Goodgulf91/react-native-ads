
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAdsSpec.h"

@interface Ads : NSObject <NativeAdsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Ads : NSObject <RCTBridgeModule>
#endif

@end
