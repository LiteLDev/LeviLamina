#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SplashPotionEffectSubcomponent {

public:
    // prevent constructor by default
    SplashPotionEffectSubcomponent& operator=(SplashPotionEffectSubcomponent const&) = delete;
    SplashPotionEffectSubcomponent(SplashPotionEffectSubcomponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@SplashPotionEffectSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value&, class SemVersion const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@SplashPotionEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@SplashPotionEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getName\@SplashPotionEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPLASHPOTIONEFFECTSUBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SplashPotionEffectSubcomponent(); // NOLINT
#endif
    /**
     * @symbol ??0SplashPotionEffectSubcomponent\@\@QEAA\@XZ
     */
    MCAPI SplashPotionEffectSubcomponent(); // NOLINT
    /**
     * @symbol
     * ?applyMobEffects\@SplashPotionEffectSubcomponent\@\@QEAAXAEBVMobEffectInstance\@\@AEBV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@AEAVActor\@\@AEBV?$shared_ptr\@$$CBVPotion\@\@\@4\@MPEAVMobEffect\@\@AEAVHitResult\@\@H\@Z
     */
    MCAPI void applyMobEffects(
        class MobEffectInstance const&,
        std::vector<class Actor*> const&,
        class Actor&,
        class std::shared_ptr<class Potion const> const&,
        float,
        class MobEffect*,
        class HitResult&,
        int
    ); // NOLINT
};
