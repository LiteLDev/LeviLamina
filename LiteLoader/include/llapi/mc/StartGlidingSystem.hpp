/**
 * @file  StartGlidingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct StartGlidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGLIDINGSYSTEM
public:
    struct StartGlidingSystem& operator=(struct StartGlidingSystem const &) = delete;
    StartGlidingSystem(struct StartGlidingSystem const &) = delete;
    StartGlidingSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?tick\@StartGlidingSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPlayerInputRequestComponent\@\@V?$FlagComponent\@UArmorFlyEnabledFlag\@\@\@\@UPassengerComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UMoveInputComponent\@\@UVanillaClientGameplayComponent\@\@\@\@U?$Write\@USynchedActorDataComponent\@\@UPlayerActionComponent\@\@\@\@U?$AddRemove\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent, class FlagComponent<struct ArmorFlyEnabledFlag>, struct PassengerComponent, class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct AbilitiesComponent, struct MoveInputComponent, struct VanillaClientGameplayComponent>, struct Write<struct SynchedActorDataComponent, struct PlayerActionComponent>, struct AddRemove<struct ShouldUpdateBoundingBoxRequestComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createSystem\@StartGlidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};