/**
 * @file  MC/MoveCollisionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MoveCollisionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECOLLISIONSYSTEM
public:
    class MoveCollisionSystem& operator=(class MoveCollisionSystem const &) = delete;
    MoveCollisionSystem(class MoveCollisionSystem const &) = delete;
    MoveCollisionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveCollisionSystem();
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
     * @symbol ?tick@MoveCollisionSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UIsWearingLeatherBoots@@@@V?$FlagComponent@UIsWorldBuilderFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UActorTypeComponent@@UFallDistanceComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorHeadRotationComponent@@UActorRotationComponent@@UOffsetsComponent@@UStateVectorComponent@@USynchedActorDataComponent@@UAABBShapeComponent@@UConstBlockSourceComponent@@@@U?$Write@UMoveRequestComponent@@UTerrainSurfaceOffsetComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWearingLeatherBoots>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct ActorHeadRotationComponent, struct ActorRotationComponent, struct OffsetsComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct AABBShapeComponent, struct ConstBlockSourceComponent>, struct Write<struct MoveRequestComponent, struct TerrainSurfaceOffsetComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createSystem@MoveCollisionSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tickMoveCollisionSystem@MoveCollisionSystem@@SAXAEAVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUConstBlockSourceComponent@@AEAUMoveRequestComponent@@AEAUTerrainSurfaceOffsetComponent@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UIsWearingLeatherBoots@@@@V?$FlagComponent@UIsWorldBuilderFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UActorTypeComponent@@UFallDistanceComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorHeadRotationComponent@@UActorRotationComponent@@UOffsetsComponent@@UStateVectorComponent@@USynchedActorDataComponent@@UAABBShapeComponent@@UConstBlockSourceComponent@@@@U?$Write@UMoveRequestComponent@@UTerrainSurfaceOffsetComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     */
    MCAPI static void tickMoveCollisionSystem(class StrictEntityContext &, struct AABBShapeComponent const &, struct ConstBlockSourceComponent const &, struct MoveRequestComponent &, struct TerrainSurfaceOffsetComponent &, class StrictExecutionContext<struct Filter<class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWearingLeatherBoots>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct ActorHeadRotationComponent, struct ActorRotationComponent, struct OffsetsComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct AABBShapeComponent, struct ConstBlockSourceComponent>, struct Write<struct MoveRequestComponent, struct TerrainSurfaceOffsetComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);

};