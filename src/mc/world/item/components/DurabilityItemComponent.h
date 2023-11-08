#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DurabilityItemComponent {
public:
    // prevent constructor by default
    DurabilityItemComponent& operator=(DurabilityItemComponent const&);
    DurabilityItemComponent(DurabilityItemComponent const&);
    DurabilityItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DurabilityItemComponent@@UEAA@XZ
    virtual ~DurabilityItemComponent() = default;

    // symbol: ?getDamageChanceRange@DurabilityItemComponent@@QEBA?AUIntRange@@XZ
    MCAPI struct IntRange getDamageChanceRange() const;

    // symbol: ?getMaxDamage@DurabilityItemComponent@@QEBAHXZ
    MCAPI int getMaxDamage() const;

    // symbol: ?setMaxDamage@DurabilityItemComponent@@QEAAXH@Z
    MCAPI void setMaxDamage(int);

    // symbol:
    // ?bindType@DurabilityItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@DurabilityItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
