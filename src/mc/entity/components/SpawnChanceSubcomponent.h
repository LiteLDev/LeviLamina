#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpawnChanceSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    SpawnChanceSubcomponent& operator=(SpawnChanceSubcomponent const&);
    SpawnChanceSubcomponent(SpawnChanceSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpawnChanceSubcomponent@@UEAA@XZ
    virtual ~SpawnChanceSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@SpawnChanceSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@SpawnChanceSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@SpawnChanceSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@SpawnChanceSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0SpawnChanceSubcomponent@@QEAA@XZ
    MCAPI SpawnChanceSubcomponent();

    // NOLINTEND
};
