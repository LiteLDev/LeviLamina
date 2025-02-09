#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct LevelBroadcastEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::LevelEvent const> mType;
    ::ll::TypedStorage<4, 12, ::Vec3 const>      mPos;
    ::ll::TypedStorage<4, 4, int const>          mData;
    // NOLINTEND
};
