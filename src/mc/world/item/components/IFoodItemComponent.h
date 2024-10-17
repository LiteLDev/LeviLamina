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
    MCAPI static ::ll::CArrayT<char const>& CAN_ALWAYS_EAT();

    MCAPI static ::ll::CArrayT<char const>& NUTRITION();

    MCAPI static ::ll::CArrayT<char const>& SATURATION_MODIFIER();

    // NOLINTEND
};
