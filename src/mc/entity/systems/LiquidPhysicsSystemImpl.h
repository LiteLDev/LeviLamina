#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
struct LiquidBlockEntry;
// clang-format on

struct LiquidPhysicsSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _hasAdjacentFlowingBlock(
        ::std::vector<::LiquidBlockEntry> const& liquidBlocks,
        ::IConstBlockSource const&               region,
        ::SharedTypes::v1_26_20::MaterialType    liquidType
    );
    // NOLINTEND
};
