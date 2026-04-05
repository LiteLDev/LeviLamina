#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicAmbientSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd64ba9;
    ::ll::UntypedStorage<8, 32> mUnk5375d2;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DynamicAmbientSound(DynamicAmbientSound const&);
    DynamicAmbientSound();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DynamicAmbientSound& operator=(DynamicAmbientSound const&);
    DynamicAmbientSound(DynamicAmbientSound const&);
    DynamicAmbientSound();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::DynamicAmbientSound& operator=(::DynamicAmbientSound const&);
#endif

    MCAPI ~DynamicAmbientSound();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
