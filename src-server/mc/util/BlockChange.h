#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mUpdateFlags;
    ::ll::TypedStorage<8, 8, ::Block const*> mOldBlock;
    ::ll::TypedStorage<8, 8, ::Block const*> mNewBlock;
    // NOLINTEND
};
