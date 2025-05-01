#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
struct LiquidBlockEntry;
// clang-format on

struct LiquidPhysicsSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _hasAdjacentFlowingBlock(
        ::std::vector<::LiquidBlockEntry> const& liquidBlocks,
        ::IConstBlockSource const&               region,
        ::MaterialType                           liquidType
    );
    // NOLINTEND
};
