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
    // vIndex: 0
    virtual ~UseModifiersItemComponentLegacyFactoryData() = default;

    MCAPI UseModifiersItemComponentLegacyFactoryData();

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
