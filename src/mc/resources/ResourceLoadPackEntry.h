#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct ResourceLoadPackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9c4874;
    ::ll::UntypedStorage<8, 32> mUnkd6cdff;
    ::ll::UntypedStorage<8, 32> mUnkfac138;
    ::ll::UntypedStorage<8, 32> mUnkc98dbd;
    ::ll::UntypedStorage<4, 4>  mUnkeeb888;
    ::ll::UntypedStorage<8, 8>  mUnk7856c6;
    ::ll::UntypedStorage<4, 4>  mUnk81e18b;
    ::ll::UntypedStorage<8, 8>  mUnk4b43fb;
    ::ll::UntypedStorage<8, 64> mUnk718579;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoadPackEntry& operator=(ResourceLoadPackEntry const&);
    ResourceLoadPackEntry(ResourceLoadPackEntry const&);
    ResourceLoadPackEntry();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ResourceLoadPackEntry();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
