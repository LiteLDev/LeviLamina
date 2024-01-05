#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ImpactDamageSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    ImpactDamageSubcomponent& operator=(ImpactDamageSubcomponent const&);
    ImpactDamageSubcomponent(ImpactDamageSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ImpactDamageSubcomponent@@UEAA@XZ
    virtual ~ImpactDamageSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@ImpactDamageSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@ImpactDamageSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@ImpactDamageSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@ImpactDamageSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0ImpactDamageSubcomponent@@QEAA@XZ
    MCAPI ImpactDamageSubcomponent();

    // NOLINTEND
};
