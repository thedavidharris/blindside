#import <Foundation/Foundation.h>
#import "BSUtils.h"

NS_ASSUME_NONNULL_BEGIN

BS_LINK_REQUIRE(NSObject_BlindsidePrivate)
@interface NSObject (BlindsidePrivate)

/// A string used when printing errors about this object, when it used as an injector key
- (NSString *)bsKeyDescription;

@end

NS_ASSUME_NONNULL_END
