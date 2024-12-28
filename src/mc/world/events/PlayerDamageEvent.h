#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDamageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf93c60;
    ::ll::UntypedStorage<8, 8>  mUnk22f1ba;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDamageEvent& operator=(PlayerDamageEvent const&);
    PlayerDamageEvent(PlayerDamageEvent const&);
    PlayerDamageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDamageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
