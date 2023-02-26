/**
 * @file  MobEffectSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectSystem.
 *
 */
class MobEffectSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTSYSTEM
public:
    class MobEffectSystem& operator=(class MobEffectSystem const &) = delete;
    MobEffectSystem(class MobEffectSystem const &) = delete;
    MobEffectSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MobEffectSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@MobEffectSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickComponent\@MobEffectSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVMobEffectComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class MobEffectComponent &);

private:

};