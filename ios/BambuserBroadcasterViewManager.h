/**
 * Copyright Bambuser AB 2018
 */

#import <UIKit/UIKit.h>

// import RCTViewManager.h
#if __has_include(<React/RCTViewManager.h>)
#import <React/RCTViewManager.h>
#elif __has_include("RCTViewManager.h")
#import "RCTViewManager.h"
#else
#import "React/RCTViewManager.h"
#endif

@interface BambuserBroadcasterViewManager : RCTViewManager

@end
