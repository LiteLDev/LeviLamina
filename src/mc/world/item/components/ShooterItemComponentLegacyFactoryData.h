#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ShooterItemComponentLegacyFactoryData {
public:
    // ShooterItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponentLegacyFactoryData inner types define
    struct ShooterAmmunitionEntry {
    public:
        // prevent constructor by default
        ShooterAmmunitionEntry(ShooterAmmunitionEntry const&);
        ShooterAmmunitionEntry();

    public:
        // NOLINTBEGIN
        MCAPI struct ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry&&);

        MCAPI struct ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ShooterItemComponentLegacyFactoryData(ShooterItemComponentLegacyFactoryData const&);
    ShooterItemComponentLegacyFactoryData();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShooterItemComponentLegacyFactoryData() = default;

    MCAPI struct ShooterItemComponentLegacyFactoryData& operator=(struct ShooterItemComponentLegacyFactoryData&&);

    MCAPI struct ShooterItemComponentLegacyFactoryData& operator=(struct ShooterItemComponentLegacyFactoryData const&);

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
