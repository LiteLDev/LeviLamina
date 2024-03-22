#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

struct UnderWaterSensingSystem {
public:
    // prevent constructor by default
    UnderWaterSensingSystem& operator=(UnderWaterSensingSystem const&);
    UnderWaterSensingSystem(UnderWaterSensingSystem const&);
    UnderWaterSensingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnderWaterSensingSystem@@UEAA@XZ
    virtual ~UnderWaterSensingSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@UnderWaterSensingSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UDimensionTypeComponent@@UStateVectorComponent@@UUpdateWaterStateRequestComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorDataFlagComponent@@UAABBShapeComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@@@U?$Write@$$V@@U?$AddRemove@V?$FlagComponent@UActorHeadInWaterFlag@@@@V?$FlagComponent@UActorHeadWasInWaterFlag@@@@@@U?$GlobalRead@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<
                          struct DimensionTypeComponent,
                          struct StateVectorComponent,
                          struct UpdateWaterStateRequestComponent,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct PassengerComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct ActorDataFlagComponent,
                          struct AABBShapeComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent>,
                      struct Write<>,
                      struct AddRemove<
                          class FlagComponent<struct ActorHeadInWaterFlag>,
                          class FlagComponent<struct ActorHeadWasInWaterFlag>>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // vIndex: 6, symbol:
    // ?singleTick@UnderWaterSensingSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UDimensionTypeComponent@@UStateVectorComponent@@UUpdateWaterStateRequestComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorDataFlagComponent@@UAABBShapeComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@@@U?$Write@$$V@@U?$AddRemove@V?$FlagComponent@UActorHeadInWaterFlag@@@@V?$FlagComponent@UActorHeadWasInWaterFlag@@@@@@U?$GlobalRead@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct DimensionTypeComponent, struct StateVectorComponent, struct UpdateWaterStateRequestComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct ActorDataFlagComponent, struct AABBShapeComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent>, struct Write<>, struct AddRemove<class FlagComponent<struct ActorHeadInWaterFlag>, class FlagComponent<struct ActorHeadWasInWaterFlag>>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol: ?createSystem@UnderWaterSensingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?doUnderWaterSensing@UnderWaterSensingSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEBUUpdateWaterStateRequestComponent@@V?$Optional@$$CBV?$FlagComponent@UActorHeadInWaterFlag@@@@@@V?$EntityModifier@V?$FlagComponent@UActorHeadInWaterFlag@@@@V?$FlagComponent@UActorHeadWasInWaterFlag@@@@@@AEBUGetAttachPositionViews@@AEBVIConstBlockSource@@@Z
    MCAPI static void doUnderWaterSensing(class StrictEntityContext const&, struct StateVectorComponent const&, struct UpdateWaterStateRequestComponent const&, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class EntityModifier<class FlagComponent<struct ActorHeadInWaterFlag>, class FlagComponent<struct ActorHeadWasInWaterFlag>>, struct GetAttachPositionViews const&, class IConstBlockSource const&);

    // NOLINTEND
};
