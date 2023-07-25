#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SplashPotionEffectSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ThrownPotionEffectSubcomponent : public ::SplashPotionEffectSubcomponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNPOTIONEFFECTSUBCOMPONENT
public:
    ThrownPotionEffectSubcomponent& operator=(ThrownPotionEffectSubcomponent const&) = delete;
    ThrownPotionEffectSubcomponent(ThrownPotionEffectSubcomponent const&)            = delete;
    ThrownPotionEffectSubcomponent()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@ThrownPotionEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@ThrownPotionEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@ThrownPotionEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
};
