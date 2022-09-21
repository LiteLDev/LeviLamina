/**
 * @file  MC/GameEventMovementTrackingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingSystem.
 *
 */
class GameEventMovementTrackingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGSYSTEM
public:
    class GameEventMovementTrackingSystem& operator=(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GameEventMovementTrackingSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   945060749
     * @vftbl  2
     * @symbol ?tick@GameEventMovementTrackingSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @hash   -1219186161
     * @symbol ?_tickGameEventMovementTrackingComponent@GameEventMovementTrackingSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VGameEventMovementTrackingComponent@@@@@Z
     */
    MCAPI static void _tickGameEventMovementTrackingComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class GameEventMovementTrackingComponent> &);
    /**
     * @hash   294264340
     * @symbol ?_trackMovement@GameEventMovementTrackingSystem@@CAXAEAVActor@@AEAVGameEventMovementTrackingComponent@@@Z
     */
    MCAPI static void _trackMovement(class Actor &, class GameEventMovementTrackingComponent &);

private:

};