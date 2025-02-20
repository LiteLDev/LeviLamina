#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LiquidType.h"

struct BlockLiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4> mUnkf69ae4;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLiquidDetectionComponent& operator=(BlockLiquidDetectionComponent const&);
    BlockLiquidDetectionComponent(BlockLiquidDetectionComponent const&);
    BlockLiquidDetectionComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::set<::LiquidType> const& supportedLiquids();
    // NOLINTEND
};
