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
    // vIndex: 0
    virtual ~DiggerItemComponentLegacyFactoryData();

    MCAPI DiggerItemComponentLegacyFactoryData();

    MCAPI DiggerItemComponentLegacyFactoryData(struct DiggerItemComponentLegacyFactoryData const&);

    MCAPI struct DiggerItemComponentLegacyFactoryData& operator=(struct DiggerItemComponentLegacyFactoryData&&);

    MCAPI struct DiggerItemComponentLegacyFactoryData& operator=(struct DiggerItemComponentLegacyFactoryData const&);

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
