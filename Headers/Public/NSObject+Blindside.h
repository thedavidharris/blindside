#import <Foundation/Foundation.h>

#import <Blindside/BSNullabilityCompat.h>
#import <Blindside/BSUtils.h>

@class BSInitializer, BSPropertySet;
@protocol BSInjector;

NS_ASSUME_NONNULL_BEGIN

BS_LINK_REQUIRE(NSObject_Blindside)
@interface NSObject(Blindside)

+ (id)bsCreateWithArgs:(NSArray *)args injector:(id<BSInjector>)injector;

+ (nullable BSInitializer *)bsInitializer;

+ (nullable BSPropertySet *)bsProperties;

- (void)bsAwakeFromPropertyInjection;

@end

NS_ASSUME_NONNULL_END
