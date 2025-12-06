#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockPlacementType.h"
#include "mc/world/level/levelgen/structure/PlacedConnectionBlock.h"

class StructureBlockPlacementInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::variant<::BlockPlacementType, ::PlacedConnectionBlock>> mPlacementInfo;
    // NOLINTEND
};
