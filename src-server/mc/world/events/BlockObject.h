#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

struct BlockObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockSource*>> mRegion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mPos;
    // NOLINTEND
};
