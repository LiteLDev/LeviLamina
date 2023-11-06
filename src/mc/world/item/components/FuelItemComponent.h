#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FuelItemComponent {
public:
    // prevent constructor by default
    FuelItemComponent& operator=(FuelItemComponent const&);
    FuelItemComponent(FuelItemComponent const&);
    FuelItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FuelItemComponent() = default;

    // symbol: ?setFuelDuration@FuelItemComponent@@QEAAXM@Z
    MCAPI void setFuelDuration(float);

    // symbol:
    // ?bindType@FuelItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@FuelItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
