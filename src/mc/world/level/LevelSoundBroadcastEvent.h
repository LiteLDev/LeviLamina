#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct LevelSoundBroadcastEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent const> mType;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                mPos;
    ::ll::TypedStorage<4, 4, int const>                                    mData;
    // NOLINTEND
};
