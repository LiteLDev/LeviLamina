#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class Vec3;
// clang-format on

struct GameEventContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3 const>        mOriginPos;
    ::ll::TypedStorage<8, 8, ::Actor* const>       mSource;
    ::ll::TypedStorage<8, 8, ::Block const* const> mAffectedBlock;
    // NOLINTEND
};
