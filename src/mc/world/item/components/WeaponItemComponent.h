#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct WeaponItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WeaponItemComponent@@UEAA@XZ
    virtual ~WeaponItemComponent();

    // symbol: ??0WeaponItemComponent@@QEAA@XZ
    MCAPI WeaponItemComponent();

    // symbol: ??0WeaponItemComponent@@QEAA@AEBU0@@Z
    MCAPI WeaponItemComponent(struct WeaponItemComponent const&);

    // symbol: ??4WeaponItemComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct WeaponItemComponent& operator=(struct WeaponItemComponent&&);

    // symbol: ??4WeaponItemComponent@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct WeaponItemComponent& operator=(struct WeaponItemComponent const&);

    // symbol:
    // ?bindType@WeaponItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@WeaponItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
