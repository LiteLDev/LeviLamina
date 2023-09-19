#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFoodItemComponent {
public:
    // prevent constructor by default
    IFoodItemComponent& operator=(IFoodItemComponent const&);
    IFoodItemComponent(IFoodItemComponent const&);
    IFoodItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ?CAN_ALWAYS_EAT@IFoodItemComponent@@2QBDB
    MCAPI static char const CAN_ALWAYS_EAT[];

    // symbol: ?NUTRITION@IFoodItemComponent@@2QBDB
    MCAPI static char const NUTRITION[];

    // symbol: ?SATURATION_MODIFIER@IFoodItemComponent@@2QBDB
    MCAPI static char const SATURATION_MODIFIER[];

    // NOLINTEND
};
