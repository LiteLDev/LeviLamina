#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/EntityNetId.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct RemoveVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::TypedStorage<4, 4, ::EntityNetId>   mEntityNetId;
    // NOLINTEND
};
