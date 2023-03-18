/**
 * @file  StartGlidingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StartGlidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGLIDINGSYSTEM
public:
    class StartGlidingSystem& operator=(class StartGlidingSystem const &) = delete;
    StartGlidingSystem(class StartGlidingSystem const &) = delete;
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
     * @symbol ?tick\@StartGlidingSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@UPlayerInputRequestComponent\@\@V?$FlagComponent\@UArmorFlyEnabledFlag\@\@\@\@UPassengerComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UMoveInputComponent\@\@UStateVectorComponent\@\@UVanillaClientGameplayComponent\@\@UCollisionBoxDefinitionComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@USynchedActorDataComponent\@\@UPlayerActionComponent\@\@UOffsetsComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, struct PlayerInputRequestComponent, class FlagComponent<struct ArmorFlyEnabledFlag>, struct PassengerComponent, class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct AbilitiesComponent, struct MoveInputComponent, struct StateVectorComponent, struct VanillaClientGameplayComponent, struct CollisionBoxDefinitionComponent>, struct Write<struct AABBShapeComponent, struct SynchedActorDataComponent, struct PlayerActionComponent, struct OffsetsComponent>, struct AddRemove<class FlagComponent<struct WasPenetratingLastFrameFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createSystem\@StartGlidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
