/**
 * @file  AmbientSoundServerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AmbientSoundServerSystem.
 *
 */
class AmbientSoundServerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDSERVERSYSTEM
public:
    class AmbientSoundServerSystem& operator=(class AmbientSoundServerSystem const &) = delete;
    AmbientSoundServerSystem(class AmbientSoundServerSystem const &) = delete;
    AmbientSoundServerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AmbientSoundServerSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@AmbientSoundServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickAmbientSoundComponent\@AmbientSoundServerSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVAmbientSoundServerComponent\@\@\@Z
     */
    MCAPI static void _tickAmbientSoundComponent(class ActorOwnerComponent &, class AmbientSoundServerComponent &);

private:

};