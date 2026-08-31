#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct FoodItemComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>               mNutrition;
    ::ll::TypedStorage<4, 4, float>             mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool>              mCanAlwaysEat;
    // NOLINTEND
};
