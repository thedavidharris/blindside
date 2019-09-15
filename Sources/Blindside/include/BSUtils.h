#define AddVarArgsToNSMutableArray(firstKey, argKeys) va_list __argList__;\
va_start(__argList__, firstKey);\
for (id arg = (firstKey); arg != nil; arg = va_arg(__argList__, id)) {\
[(argKeys) addObject:arg];\
}\
va_end(__argList__);


// BS_LINKABLE and BS_LINK_REQUIRE macros allow categories to be used without requiring -ObjC.

#define BS_LINKABLE(NAME) \
    const char BSLinkable_ ## NAME = 'L';

// Annotate category @interface declarations with this macro.
#define BS_LINK_REQUIRE(NAME) \
  extern const char BSLinkable_ ## NAME; \
  extern const void *const OS_WEAK BSLink_ ## NAME; \
  const void *const OS_WEAK BSLink_ ## NAME = &BSLinkable_ ## NAME;