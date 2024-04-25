#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentLegacyFactoryData {
public:
    // prevent constructor by default
    FoodItemComponentLegacyFactoryData& operator=(FoodItemComponentLegacyFactoryData const&);
    FoodItemComponentLegacyFactoryData(FoodItemComponentLegacyFactoryData const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FoodItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~FoodItemComponentLegacyFactoryData() = default;

    // symbol: ??0FoodItemComponentLegacyFactoryData@@QEAA@XZ
    MCAPI FoodItemComponentLegacyFactoryData();

    // symbol:
    // ?bindType@FoodItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
