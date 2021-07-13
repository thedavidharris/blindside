#import <Blindside/NSObject+BlindsidePrivate.h>
#import <Blindside/BSUtils.h>

BS_LINKABLE(NSObject_BlindsidePrivate)
@implementation NSObject (BlindsidePrivate)

- (NSString *)bsKeyDescription {
    Class protocolClass = NSClassFromString(@"Protocol");
    if (protocolClass != nil && [self isKindOfClass:protocolClass]) {
        return [NSString stringWithFormat:@"@protocol(%@)", NSStringFromProtocol((Protocol *)self)];
    } else {
        return [self description];
    }
}

@end
