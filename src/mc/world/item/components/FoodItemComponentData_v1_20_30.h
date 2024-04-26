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
    // NOLINTBEGIN
    // symbol: ??0FoodItemComponentData_v1_20_30@@QEAA@XZ
    MCAPI FoodItemComponentData_v1_20_30();

    // symbol: ??0FoodItemComponentData_v1_20_30@@QEAA@AEBU0@@Z
    MCAPI FoodItemComponentData_v1_20_30(struct FoodItemComponentData_v1_20_30 const&);

    // symbol: ??4FoodItemComponentData_v1_20_30@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct FoodItemComponentData_v1_20_30& operator=(struct FoodItemComponentData_v1_20_30&&);

    // symbol: ??4FoodItemComponentData_v1_20_30@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct FoodItemComponentData_v1_20_30& operator=(struct FoodItemComponentData_v1_20_30 const&);

    // symbol: ??1FoodItemComponentData_v1_20_30@@QEAA@XZ
    MCAPI ~FoodItemComponentData_v1_20_30();

    // symbol:
    // ?bindType@FoodItemComponentData_v1_20_30@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol:
    // ?upgrade@FoodItemComponentData_v1_20_30@@SA?AV?$optional@UFoodItemComponentData_v1_20_30@@@std@@PEBUFoodItemComponentLegacyFactoryData@@@Z
    MCAPI static std::optional<struct FoodItemComponentData_v1_20_30>
    upgrade(struct FoodItemComponentLegacyFactoryData const*);

    // NOLINTEND
};
