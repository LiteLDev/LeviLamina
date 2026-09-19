#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace SharedTypes::Brain {

struct BlockRefMemory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>  mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionID;
    // NOLINTEND
};

} // namespace SharedTypes::Brain
