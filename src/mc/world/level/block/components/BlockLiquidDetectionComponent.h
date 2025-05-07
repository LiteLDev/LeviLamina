#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/DetectionRule.h"
#include "mc/world/level/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
struct DetectionRule;
// clang-format on

struct BlockLiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::DetectionRule> mWaterDetectionRule;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::set<::LiquidType> const& supportedLiquids();
    // NOLINTEND
};
