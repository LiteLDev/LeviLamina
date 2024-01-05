#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class OnHitSubcomponent {
public:
    // prevent constructor by default
    OnHitSubcomponent& operator=(OnHitSubcomponent const&);
    OnHitSubcomponent(OnHitSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnHitSubcomponent@@UEAA@XZ
    virtual ~OnHitSubcomponent();

    // vIndex: 1, symbol: ?readfromJSON@ActorDefinitionEventSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion) = 0;

    // vIndex: 2, symbol: ?writetoJSON@ActorDefinitionEventSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const = 0;

    // vIndex: 3, symbol: ?doOnHitEffect@ActorDefinitionEventSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component) = 0;

    // vIndex: 4, symbol: ?getName@OnHitSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0OnHitSubcomponent@@QEAA@XZ
    MCAPI OnHitSubcomponent();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canAttack@OnHitSubcomponent@@IEBA_NPEAVActor@@0@Z
    MCAPI bool _canAttack(class Actor* projectileOwnerActor, class Actor* hitActor) const;

    // NOLINTEND
};
