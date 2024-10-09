#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

struct UnderWaterSensingSystem {
public:
    // prevent constructor by default
    UnderWaterSensingSystem& operator=(UnderWaterSensingSystem const&);
    UnderWaterSensingSystem(UnderWaterSensingSystem const&);
    UnderWaterSensingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnderWaterSensingSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
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

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
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
            struct EntityFactoryT<>>& context,
        class StrictEntityContext&    entityContext
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void doUnderWaterSensing(
        class StrictEntityContext const&                                       entity,
        struct StateVectorComponent const&                                     stateVectorComponent,
        struct UpdateWaterStateRequestComponent const&                         request,
        class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const> headInWater,
        class EntityModifier<
            class FlagComponent<struct ActorHeadInWaterFlag>,
            class FlagComponent<struct ActorHeadWasInWaterFlag>> modifier,
        struct GetAttachPositionViews const&                     views,
        class IConstBlockSource const&                           region
    );

    // NOLINTEND
};
