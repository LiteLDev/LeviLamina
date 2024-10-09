#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct FoodItemComponent {
public:
    // prevent constructor by default
    FoodItemComponent(FoodItemComponent const&);
    FoodItemComponent();

public:
    // NOLINTBEGIN
    MCAPI FoodItemComponent(struct Puv::v1_20_50::FoodItemComponent&&);

    MCAPI struct Puv::v1_20_50::FoodItemComponent& operator=(struct Puv::v1_20_50::FoodItemComponent&&);

    MCAPI struct Puv::v1_20_50::FoodItemComponent& operator=(struct Puv::v1_20_50::FoodItemComponent const&);

    MCAPI ~FoodItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
