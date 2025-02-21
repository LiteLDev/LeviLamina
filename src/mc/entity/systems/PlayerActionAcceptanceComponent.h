#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerActionComponent;
// clang-format on

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
    MCAPI ~PlayerActionAcceptanceComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
