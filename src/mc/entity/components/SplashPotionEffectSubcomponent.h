#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SplashPotionEffectSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    SplashPotionEffectSubcomponent& operator=(SplashPotionEffectSubcomponent const&);
    SplashPotionEffectSubcomponent(SplashPotionEffectSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SplashPotionEffectSubcomponent@@UEAA@XZ
    virtual ~SplashPotionEffectSubcomponent();

    // vIndex: 1, symbol: ?readfromJSON@SplashPotionEffectSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@SplashPotionEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@SplashPotionEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@SplashPotionEffectSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0SplashPotionEffectSubcomponent@@QEAA@XZ
    MCAPI SplashPotionEffectSubcomponent();

    // symbol:
    // ?applyMobEffects@SplashPotionEffectSubcomponent@@QEAAXAEBVMobEffectInstance@@AEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@AEAVActor@@AEBV?$shared_ptr@$$CBVPotion@@@4@MPEAVMobEffect@@AEAVHitResult@@H@Z
    MCAPI void applyMobEffects(
        class MobEffectInstance const&,
        std::vector<class Actor*> const&,
        class Actor&,
        std::shared_ptr<class Potion const> const&,
        float,
        class MobEffect*,
        class HitResult&,
        int
    );

    // NOLINTEND
};
