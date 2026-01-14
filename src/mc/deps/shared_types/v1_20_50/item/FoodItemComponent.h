#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct FoodItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mUsingConvertsTo;
    ::ll::TypedStorage<4, 4, int>                                    mNutrition;
    ::ll::TypedStorage<4, 4, float>                                  mSaturationModifier;
    ::ll::TypedStorage<1, 1, bool>                                   mCanAlwaysEat;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponent& operator=(FoodItemComponent const&);
    FoodItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FoodItemComponent(::SharedTypes::v1_20_50::FoodItemComponent const&);

    MCAPI ~FoodItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::FoodItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
