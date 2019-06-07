#ifndef RNFirebaseInstanceId_h
#define RNFirebaseInstanceId_h
#import <Foundation/Foundation.h>

#if __has_include(<FirebaseInstanceID/FirebaseInstanceID.h>)
#import "RCTBridgeModule.h"

@interface RNFirebaseInstanceId : NSObject <RCTBridgeModule> {
    
}

@end

#else
@interface RNFirebaseInstanceId : NSObject
@end
#endif

#endif
