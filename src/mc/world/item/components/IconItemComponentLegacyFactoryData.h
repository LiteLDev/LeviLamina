#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

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
    // vIndex: 0
    virtual ~IconItemComponentLegacyFactoryData();

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

    MCAPI void dtor$();

    // NOLINTEND
};
