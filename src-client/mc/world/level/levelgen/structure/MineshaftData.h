#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct MineshaftData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mLogBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mPlankBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mFenceBlock;
    ::ll::TypedStorage<4, 4, float>          roomChance;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftData& operator=(MineshaftData const&);
    MineshaftData(MineshaftData const&);
    MineshaftData();
};
