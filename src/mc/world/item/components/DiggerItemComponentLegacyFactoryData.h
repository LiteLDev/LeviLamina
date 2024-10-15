#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerItemComponentLegacyFactoryData {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiggerItemComponentLegacyFactoryData();

    MCAPI DiggerItemComponentLegacyFactoryData();

    MCAPI DiggerItemComponentLegacyFactoryData(struct DiggerItemComponentLegacyFactoryData const&);

    MCAPI struct DiggerItemComponentLegacyFactoryData& operator=(struct DiggerItemComponentLegacyFactoryData&&);

    MCAPI struct DiggerItemComponentLegacyFactoryData& operator=(struct DiggerItemComponentLegacyFactoryData const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(struct DiggerItemComponentLegacyFactoryData const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
