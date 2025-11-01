#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mNutrition;
    ::ll::TypedStorage<4, 4, float> mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool> mCanAlwaysEat;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentData_v1_20_30();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FoodItemComponentData_v1_20_30(::FoodItemComponentData_v1_20_30 const&);

    MCAPI ::FoodItemComponentData_v1_20_30& operator=(::FoodItemComponentData_v1_20_30 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx, ::std::vector<::AllExperiments> const& requiredToggles, ::std::optional<::SemVersion> releasedMinFormatVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FoodItemComponentData_v1_20_30 const&);
    // NOLINTEND

};
