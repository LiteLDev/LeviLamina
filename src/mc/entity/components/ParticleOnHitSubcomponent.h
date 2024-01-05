#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ParticleOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    ParticleOnHitSubcomponent& operator=(ParticleOnHitSubcomponent const&);
    ParticleOnHitSubcomponent(ParticleOnHitSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ParticleOnHitSubcomponent@@UEAA@XZ
    virtual ~ParticleOnHitSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@ParticleOnHitSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& value, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@ParticleOnHitSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@ParticleOnHitSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@ParticleOnHitSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0ParticleOnHitSubcomponent@@QEAA@XZ
    MCAPI ParticleOnHitSubcomponent();

    // NOLINTEND
};
