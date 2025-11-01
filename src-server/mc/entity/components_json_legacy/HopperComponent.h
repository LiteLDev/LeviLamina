#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/actor/Hopper.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    MCNAPI bool pullInItems(::Actor& owner);
    // NOLINTEND

};
