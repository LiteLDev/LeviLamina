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
    MCAPI static char const CAN_ALWAYS_EAT[];

    MCAPI static char const NUTRITION[];

    MCAPI static char const SATURATION_MODIFIER[];

    // NOLINTEND
};
