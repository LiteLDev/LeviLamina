#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerEatFoodEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk968d22;
    ::ll::UntypedStorage<8, 152> mUnke42063;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerEatFoodEvent& operator=(PlayerEatFoodEvent const&);
    PlayerEatFoodEvent(PlayerEatFoodEvent const&);
    PlayerEatFoodEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerEatFoodEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
