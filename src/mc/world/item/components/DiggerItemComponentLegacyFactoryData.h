#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerItemComponentLegacyFactoryData {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DiggerItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~DiggerItemComponentLegacyFactoryData();

    // symbol: ??0DiggerItemComponentLegacyFactoryData@@QEAA@XZ
    MCAPI DiggerItemComponentLegacyFactoryData();

    // symbol: ??0DiggerItemComponentLegacyFactoryData@@QEAA@AEBU0@@Z
    MCAPI DiggerItemComponentLegacyFactoryData(struct DiggerItemComponentLegacyFactoryData const&);

    // symbol: ??4DiggerItemComponentLegacyFactoryData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct DiggerItemComponentLegacyFactoryData& operator=(struct DiggerItemComponentLegacyFactoryData&&);

    // symbol: ??4DiggerItemComponentLegacyFactoryData@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct DiggerItemComponentLegacyFactoryData& operator=(struct DiggerItemComponentLegacyFactoryData const&);

    // symbol:
    // ?bindType@DiggerItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
