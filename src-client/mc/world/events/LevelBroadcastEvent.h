#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"

struct LevelBroadcastEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::LevelEvent const> mType;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                           mPos;
    ::ll::TypedStorage<4, 4, int const>                               mData;
    // NOLINTEND
};
