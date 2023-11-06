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

    // vIndex: 1, symbol: ?readfromJSON@SpawnAoECloudSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&) = 0;

    // vIndex: 2, symbol: ?writetoJSON@SpawnAoECloudSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const = 0;

    // vIndex: 3, symbol: ?doOnHitEffect@IgniteSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&) = 0;

    // vIndex: 4, symbol: ?getName@OnHitSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0OnHitSubcomponent@@QEAA@XZ
    MCAPI OnHitSubcomponent();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canAttack@OnHitSubcomponent@@IEBA_NPEAVActor@@0@Z
    MCAPI bool _canAttack(class Actor*, class Actor*) const;

    // NOLINTEND
};
