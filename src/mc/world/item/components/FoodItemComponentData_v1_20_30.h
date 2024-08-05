#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentData_v1_20_30 {
public:
    // prevent constructor by default
    FoodItemComponentData_v1_20_30(FoodItemComponentData_v1_20_30 const&);
    FoodItemComponentData_v1_20_30();

public:
    // NOLINTBEGIN
    MCAPI struct FoodItemComponentData_v1_20_30& operator=(struct FoodItemComponentData_v1_20_30&&);

    MCAPI struct FoodItemComponentData_v1_20_30& operator=(struct FoodItemComponentData_v1_20_30 const&);

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
