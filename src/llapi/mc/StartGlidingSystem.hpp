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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StartGlidingSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?tick\@StartGlidingSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@UPlayerInputRequestComponent\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@V?$FlagComponent\@UArmorFlyEnabledFlag\@\@\@\@UCollisionBoxDefinitionComponent\@\@UMoveInputComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@UPassengerComponent\@\@UStateVectorComponent\@\@UVanillaClientGameplayComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>, struct PlayerInputRequestComponent, class FlagComponent<struct UsesECSMovementFlag>>, struct Read<struct AbilitiesComponent, class FlagComponent<struct ArmorFlyEnabledFlag>, struct CollisionBoxDefinitionComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct PassengerComponent, struct StateVectorComponent, struct VanillaClientGameplayComponent>, struct Write<struct AABBShapeComponent, struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct WasPenetratingLastFrameFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?createStartGlidingSystem\@StartGlidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createStartGlidingSystem();

};