#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class Vec3;
struct LiquidBlockEntry;
struct StateVectorComponent;
// clang-format on

struct LiquidPhysicsSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _applyFlow(::StateVectorComponent& stateVectorComponent, ::Vec3 flow, ::MaterialType liquidType);

    MCAPI static bool _hasAdjacentFlowingBlock(
        ::std::vector<::LiquidBlockEntry> const& liquidBlocks,
        ::IConstBlockSource const&               region,
        ::MaterialType                           liquidType
    );

    MCAPI static bool _hasFlowingBlock(::std::vector<::LiquidBlockEntry> const& liquidBlocks);
    // NOLINTEND
};
