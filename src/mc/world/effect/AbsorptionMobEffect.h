#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class AbsorptionMobEffect : public ::MobEffect {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSORPTIONMOBEFFECT
public:
    AbsorptionMobEffect& operator=(AbsorptionMobEffect const&) = delete;
    AbsorptionMobEffect(AbsorptionMobEffect const&)            = delete;
    AbsorptionMobEffect()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applyEffects\@AbsorptionMobEffect\@\@UEBAXPEAVActor\@\@HH\@Z
     */
    virtual void applyEffects(class Actor*, int, int) const;
    /**
     * @vftbl 2
     * @symbol ?removeEffects\@AbsorptionMobEffect\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void removeEffects(class Actor*);
};
