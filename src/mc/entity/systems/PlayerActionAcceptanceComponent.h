#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerActionComponent.h"

struct PlayerActionAcceptanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 360, ::PlayerActionComponent> mClientPlayerActions;
    ::ll::TypedStorage<1, 1, bool>                      mShouldCompare;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerActionAcceptanceComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
