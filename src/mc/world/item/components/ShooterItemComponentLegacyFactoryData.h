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
        // symbol: ??4ShooterAmmunitionEntry@ShooterItemComponentLegacyFactoryData@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry&&);

        // symbol: ??4ShooterAmmunitionEntry@ShooterItemComponentLegacyFactoryData@@QEAAAEAU01@AEBU01@@Z
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
    // vIndex: 0, symbol: __gen_??1ShooterItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~ShooterItemComponentLegacyFactoryData() = default;

    // symbol: ??4ShooterItemComponentLegacyFactoryData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ShooterItemComponentLegacyFactoryData& operator=(struct ShooterItemComponentLegacyFactoryData&&);

    // symbol: ??4ShooterItemComponentLegacyFactoryData@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ShooterItemComponentLegacyFactoryData& operator=(struct ShooterItemComponentLegacyFactoryData const&);

    // symbol:
    // ?bindType@ShooterItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
