#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ChargeableItemComponentLegacyFactoryData {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChargeableItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~ChargeableItemComponentLegacyFactoryData();

    // symbol: ??0ChargeableItemComponentLegacyFactoryData@@QEAA@XZ
    MCAPI ChargeableItemComponentLegacyFactoryData();

    // symbol: ??0ChargeableItemComponentLegacyFactoryData@@QEAA@AEBU0@@Z
    MCAPI ChargeableItemComponentLegacyFactoryData(struct ChargeableItemComponentLegacyFactoryData const&);

    // symbol: ??4ChargeableItemComponentLegacyFactoryData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ChargeableItemComponentLegacyFactoryData& operator=(struct ChargeableItemComponentLegacyFactoryData&&);

    // symbol: ??4ChargeableItemComponentLegacyFactoryData@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ChargeableItemComponentLegacyFactoryData&
    operator=(struct ChargeableItemComponentLegacyFactoryData const&);

    // symbol:
    // ?bindType@ChargeableItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ChargeableItemComponentLegacyFactoryData@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
