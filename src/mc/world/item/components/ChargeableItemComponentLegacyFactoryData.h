#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ChargeableItemComponentLegacyFactoryData {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeableItemComponentLegacyFactoryData();

    MCAPI ChargeableItemComponentLegacyFactoryData();

    MCAPI ChargeableItemComponentLegacyFactoryData(struct ChargeableItemComponentLegacyFactoryData const&);

    MCAPI struct ChargeableItemComponentLegacyFactoryData& operator=(struct ChargeableItemComponentLegacyFactoryData&&);

    MCAPI struct ChargeableItemComponentLegacyFactoryData&
    operator=(struct ChargeableItemComponentLegacyFactoryData const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
