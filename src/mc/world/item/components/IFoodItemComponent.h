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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static auto CAN_ALWAYS_EAT() -> char const (&)[];

    MCAPI static auto NUTRITION() -> char const (&)[];

    MCAPI static auto SATURATION_MODIFIER() -> char const (&)[];

    // NOLINTEND
};
