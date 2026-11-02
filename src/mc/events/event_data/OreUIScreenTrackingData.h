#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct OreUIScreenTrackingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk64cbe0;
    ::ll::UntypedStorage<8, 48>  mUnk785830;
    ::ll::UntypedStorage<8, 120> mUnk3147cd;
    ::ll::UntypedStorage<1, 1>   mUnkc3d10b;
    ::ll::UntypedStorage<8, 8>   mUnk25f40b;
    ::ll::UntypedStorage<8, 8>   mUnk663b76;
    // NOLINTEND

public:
    // prevent constructor by default
    OreUIScreenTrackingData& operator=(OreUIScreenTrackingData const&);
    OreUIScreenTrackingData(OreUIScreenTrackingData const&);
    OreUIScreenTrackingData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~OreUIScreenTrackingData();
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
