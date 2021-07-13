#import <Foundation/Foundation.h>

#import <Blindside/BSBinder.h>
#import <Blindside/BSBlockProvider.h>
#import <Blindside/BSInitializer.h>
#import <Blindside/BSInjector.h>
#import <Blindside/BSModule.h>
#import <Blindside/BSNull.h>
#import <Blindside/BSNullabilityCompat.h>
#import <Blindside/BSPropertySet.h>
#import <Blindside/BSProvider.h>
#import <Blindside/BSScope.h>
#import <Blindside/BSSingleton.h>
#import <Blindside/NSObject+Blindside.h>
#import <Blindside/BSUtils.h>

NS_ASSUME_NONNULL_BEGIN

@interface Blindside : NSObject

/**
 * Returns a BSInjector configured with the module.
 */
+ (id<BSInjector>)injectorWithModule:(id<BSModule>)module;

/**
 * Returns a BSInjector configured with the modules. Starting at index 0, each module
 * will in turn have it configure: method called. Thus, if two modules bind to the same
 * key, the second binding will win.
 */
+ (id<BSInjector>)injectorWithModules:(NSArray *)modules;

@end

NS_ASSUME_NONNULL_END
