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
    DrinkPotionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DrinkPotionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
