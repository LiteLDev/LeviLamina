#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct IconItemComponentLegacyFactoryData {
public:
    // prevent constructor by default
    IconItemComponentLegacyFactoryData& operator=(IconItemComponentLegacyFactoryData const&);
    IconItemComponentLegacyFactoryData(IconItemComponentLegacyFactoryData const&);
    IconItemComponentLegacyFactoryData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IconItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~IconItemComponentLegacyFactoryData();

    // symbol:
    // ?bindType@IconItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
