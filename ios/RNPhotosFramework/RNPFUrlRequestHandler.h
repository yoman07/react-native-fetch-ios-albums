#import <Foundation/Foundation.h>

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import <React/RCTURLRequestHandler.h>

@interface RNPFUrlRequestHandler : NSObject<RCTBridgeModule, RCTURLRequestHandler>

@end
