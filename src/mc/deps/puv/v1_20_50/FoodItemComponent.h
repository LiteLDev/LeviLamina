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
    FoodItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0FoodItemComponent@v1_20_50@Puv@@QEAA@$$QEAU012@@Z
    MCAPI FoodItemComponent(struct Puv::v1_20_50::FoodItemComponent&&);

    // symbol: ??0FoodItemComponent@v1_20_50@Puv@@QEAA@AEBU012@@Z
    MCAPI FoodItemComponent(struct Puv::v1_20_50::FoodItemComponent const&);

    // symbol: ??4FoodItemComponent@v1_20_50@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_50::FoodItemComponent& operator=(struct Puv::v1_20_50::FoodItemComponent&&);

    // symbol: ??4FoodItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::FoodItemComponent& operator=(struct Puv::v1_20_50::FoodItemComponent const&);

    // symbol: ??1FoodItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~FoodItemComponent();

    // symbol: ?bindType@FoodItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
