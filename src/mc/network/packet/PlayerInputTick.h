#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInputTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInputTick();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerInputTick(::EntityContext const& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EntityContext const& entity);
    // NOLINTEND
};
