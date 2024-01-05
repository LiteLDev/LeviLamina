#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MobEffectSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    MobEffectSubcomponent& operator=(MobEffectSubcomponent const&);
    MobEffectSubcomponent(MobEffectSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MobEffectSubcomponent@@UEAA@XZ
    virtual ~MobEffectSubcomponent();

    // vIndex: 1, symbol: ?readfromJSON@MobEffectSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@MobEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@MobEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@MobEffectSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0MobEffectSubcomponent@@QEAA@XZ
    MCAPI MobEffectSubcomponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addEffectFromJSON@MobEffectSubcomponent@@AEAAXAEAVValue@Json@@@Z
    MCAPI void _addEffectFromJSON(class Json::Value& component);

    // NOLINTEND
};
