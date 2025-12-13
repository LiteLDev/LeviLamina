#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DrinkPotionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3c6934;
    ::ll::UntypedStorage<4, 4>  mUnkbfc32b;
    ::ll::UntypedStorage<8, 64> mUnk1390a3;
    // NOLINTEND

public:
    // prevent constructor by default
    DrinkPotionData& operator=(DrinkPotionData const&);
    DrinkPotionData(DrinkPotionData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DrinkPotionData();

    MCNAPI ~DrinkPotionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
