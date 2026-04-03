#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/block/DetectionRule.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"

struct BlockLiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::SharedTypes::v1_26_0::DetectionRule> mWaterDetectionRule;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::set<::SharedTypes::v1_26_0::LiquidType> const& supportedLiquids();
    // NOLINTEND
};
