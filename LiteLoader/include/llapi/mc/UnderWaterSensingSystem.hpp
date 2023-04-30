/**
 * @file  UnderWaterSensingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct UnderWaterSensingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNDERWATERSENSINGSYSTEM
public:
    struct UnderWaterSensingSystem& operator=(struct UnderWaterSensingSystem const &) = delete;
    UnderWaterSensingSystem(struct UnderWaterSensingSystem const &) = delete;
    UnderWaterSensingSystem() = delete;
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
     * @symbol ?tick\@UnderWaterSensingSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UDimensionTypeComponent\@\@UUpdateWaterStateRequestComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@$$V\@\@U?$AddRemove\@V?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct DimensionTypeComponent, struct UpdateWaterStateRequestComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent>, struct Write<>, struct AddRemove<class FlagComponent<struct ActorHeadInWaterFlag>>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createSystem\@UnderWaterSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?doUnderWaterSensing\@UnderWaterSensingSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEBUUpdateWaterStateRequestComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@\@\@AEBUGetAttachPositionViews\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void doUnderWaterSensing(class StrictEntityContext const &, struct StateVectorComponent const &, struct UpdateWaterStateRequestComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorHeadInWaterFlag>>, struct GetAttachPositionViews const &, class IConstBlockSource const &);

};