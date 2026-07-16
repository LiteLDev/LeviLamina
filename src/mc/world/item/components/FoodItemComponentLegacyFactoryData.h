#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

struct FoodItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mNutrition;
    ::ll::TypedStorage<4, 4, float>                mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>    mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool>                 mCanAlwaysEat;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnConsume;
    // NOLINTEND
};
