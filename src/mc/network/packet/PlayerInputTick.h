#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd82549;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInputTick& operator=(PlayerInputTick const&);
    PlayerInputTick(PlayerInputTick const&);
    PlayerInputTick();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerInputTick(uint64 value);

    MCAPI explicit operator uint64() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 value);
    // NOLINTEND
};
