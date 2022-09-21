/**
 * @file  MC/AmbientSoundServerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~AmbientSoundServerSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   648167257
     * @vftbl  2
     * @symbol ?tick@AmbientSoundServerSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @hash   30511288
     * @symbol ?_tickAmbientSoundComponent@AmbientSoundServerSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VAmbientSoundServerComponent@@@@@Z
     */
    MCAPI static void _tickAmbientSoundComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class AmbientSoundServerComponent> &);

private:

};