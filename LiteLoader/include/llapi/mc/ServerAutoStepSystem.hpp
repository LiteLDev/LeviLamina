/**
 * @file  MC/ServerAutoStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerAutoStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERAUTOSTEPSYSTEM
public:
    class ServerAutoStepSystem& operator=(class ServerAutoStepSystem const &) = delete;
    ServerAutoStepSystem(class ServerAutoStepSystem const &) = delete;
    ServerAutoStepSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ServerAutoStepSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?tick@ServerAutoStepSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UIsWearingLeatherBoots@@@@V?$FlagComponent@UIsWorldBuilderFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoStepRequestFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@USynchedActorDataComponent@@V?$FlagComponent@UCollidableMobFlag@@@@@@U?$Read@UActorTypeComponent@@UFallDistanceComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UAABBShapeComponent@@UActorHeadRotationComponent@@UActorRotationComponent@@UOffsetsComponent@@UStateVectorComponent@@USynchedActorDataComponent@@UConstBlockSourceComponent@@UMaxAutoStepComponent@@USpatialEntityFetcherComponent@@@@U?$Write@UAABBShapeComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@VHitboxComponent@@UMoveRequestComponent@@USlideOffsetComponent@@USubBBsComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWearingLeatherBoots>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoStepRequestFlag>, class FlagComponent<struct FallingBlockFlag>, struct SynchedActorDataComponent, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct AABBShapeComponent, struct ActorHeadRotationComponent, struct ActorRotationComponent, struct OffsetsComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct ConstBlockSourceComponent, struct MaxAutoStepComponent, struct SpatialEntityFetcherComponent>, struct Write<struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, class HitboxComponent, struct MoveRequestComponent, struct SlideOffsetComponent, struct SubBBsComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createServerAutoStepSystem@ServerAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerAutoStepSystem();

};