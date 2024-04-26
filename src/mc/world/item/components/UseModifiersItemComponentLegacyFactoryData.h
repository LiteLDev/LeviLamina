#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct UseModifiersItemComponentLegacyFactoryData {
public:
    // prevent constructor by default
    UseModifiersItemComponentLegacyFactoryData& operator=(UseModifiersItemComponentLegacyFactoryData const&);
    UseModifiersItemComponentLegacyFactoryData(UseModifiersItemComponentLegacyFactoryData const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UseModifiersItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~UseModifiersItemComponentLegacyFactoryData() = default;

    // symbol: ??0UseModifiersItemComponentLegacyFactoryData@@QEAA@XZ
    MCAPI UseModifiersItemComponentLegacyFactoryData();

    // symbol:
    // ?bindType@UseModifiersItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@UseModifiersItemComponentLegacyFactoryData@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
