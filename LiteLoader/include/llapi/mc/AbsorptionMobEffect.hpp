/**
 * @file  AbsorptionMobEffect.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MobEffect.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AbsorptionMobEffect.
 *
 */
class AbsorptionMobEffect : public MobEffect {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSORPTIONMOBEFFECT
public:
    class AbsorptionMobEffect& operator=(class AbsorptionMobEffect const &) = delete;
    AbsorptionMobEffect(class AbsorptionMobEffect const &) = delete;
    AbsorptionMobEffect() = delete;
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
    virtual void applyEffects(class Actor *, int, int) const;
    /**
     * @vftbl 2
     * @symbol ?removeEffects\@AbsorptionMobEffect\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void removeEffects(class Actor *);

};
