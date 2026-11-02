#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct DynamicElementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfd879d;
    ::ll::UntypedStorage<4, 4>  mUnk27dd3d;
    ::ll::UntypedStorage<4, 8>  mUnkbf82fd;
    ::ll::UntypedStorage<4, 8>  mUnkd11ceb;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicElementData& operator=(DynamicElementData const&);
    DynamicElementData(DynamicElementData const&);
    DynamicElementData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~DynamicElementData();
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

} // namespace Social::Events
