#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc53b65;
    ::ll::UntypedStorage<1, 1>  mUnk5c48f9;
    ::ll::UntypedStorage<1, 1>  mUnk3c7e19;
    ::ll::UntypedStorage<4, 4>  mUnkb86e8d;
    ::ll::UntypedStorage<4, 4>  mUnk555755;
    ::ll::UntypedStorage<4, 4>  mUnk1f7ee0;
    ::ll::UntypedStorage<4, 4>  mUnk4ecdcd;
    ::ll::UntypedStorage<4, 4>  mUnk7f875b;
    ::ll::UntypedStorage<4, 24> mUnk2410fa;
    ::ll::UntypedStorage<8, 16> mUnkc86da6;
    ::ll::UntypedStorage<1, 1>  mUnkf508ba;
    ::ll::UntypedStorage<4, 4>  mUnkb9607d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMovementSettings& operator=(PlayerMovementSettings const&);
    PlayerMovementSettings(PlayerMovementSettings const&);
    PlayerMovementSettings();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PlayerMovementSettings getDefault();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PlayerMovementSettings const& INVALID();
    // NOLINTEND
};
