#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Random;
// clang-format on

struct BlockAnimateTickData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const> mPos;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Random&> mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAnimateTickData& operator=(BlockAnimateTickData const&);
    BlockAnimateTickData(BlockAnimateTickData const&);
    BlockAnimateTickData();

};
