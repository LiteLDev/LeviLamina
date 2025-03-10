#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Hopper.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
// clang-format on

class HopperComponent : public ::Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastPosition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool pullInItems(::Actor& owner);
    // NOLINTEND
};
