#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionAcceptanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 360> mUnkcb00e8;
    ::ll::UntypedStorage<1, 1>   mUnk9517d4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionAcceptanceComponent& operator=(PlayerActionAcceptanceComponent const&);
    PlayerActionAcceptanceComponent(PlayerActionAcceptanceComponent const&);
    PlayerActionAcceptanceComponent();

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
