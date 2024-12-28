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
    // prevent constructor by default
    HopperComponent& operator=(HopperComponent const&);
    HopperComponent(HopperComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HopperComponent();

    MCAPI ::BlockPos getLastPosition() const;

    MCAPI bool pullInItems(::Actor& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
