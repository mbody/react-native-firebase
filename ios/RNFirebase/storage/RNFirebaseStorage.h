#ifndef RNFirebaseStorage_h
#define RNFirebaseStorage_h
#import <Foundation/Foundation.h>

#if __has_include(<FirebaseStorage/FIRStorage.h>)
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"

@interface RNFirebaseStorage : RCTEventEmitter<RCTBridgeModule> {

}

@end

#else
@interface RNFirebaseStorage : NSObject
@end
#endif

#endif
