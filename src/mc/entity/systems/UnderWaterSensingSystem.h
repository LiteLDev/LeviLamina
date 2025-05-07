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
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorHeadInWaterFlagComponent;
struct ActorHeadWasInWaterFlagComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct DimensionTypeComponent;
struct GetAttachPositionViews;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct UnderWaterSensingSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                     ::Filter<
                                         ::HorseFlagComponent,
                                         ::MobFlagComponent,
                                         ::ParrotFlagComponent,
                                         ::VehicleComponent,
                                         ::CamelFlagComponent,
                                         ::PlayerComponent>,
                                     ::Read<
                                         ::DimensionTypeComponent,
                                         ::StateVectorComponent,
                                         ::UpdateWaterStateRequestComponent,
                                         ::ActorRotationComponent,
                                         ::MobBodyRotationComponent,
                                         ::PassengerComponent,
                                         ::RenderRotationComponent,
                                         ::StandAnimationComponent,
                                         ::ActorDataFlagComponent,
                                         ::AABBShapeComponent,
                                         ::OffsetsComponent,
                                         ::VanillaOffsetComponent,
                                         ::PassengerRenderingRidingOffsetComponent>,
                                     ::Write<>,
                                     ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
                                     ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                                     ::GlobalWrite<>,
                                     ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<
                          ::HorseFlagComponent,
                          ::MobFlagComponent,
                          ::ParrotFlagComponent,
                          ::VehicleComponent,
                          ::CamelFlagComponent,
                          ::PlayerComponent>,
                      ::Read<
                          ::DimensionTypeComponent,
                          ::StateVectorComponent,
                          ::UpdateWaterStateRequestComponent,
                          ::ActorRotationComponent,
                          ::MobBodyRotationComponent,
                          ::PassengerComponent,
                          ::RenderRotationComponent,
                          ::StandAnimationComponent,
                          ::ActorDataFlagComponent,
                          ::AABBShapeComponent,
                          ::OffsetsComponent,
                          ::VanillaOffsetComponent,
                          ::PassengerRenderingRidingOffsetComponent>,
                      ::Write<>,
                      ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::UpdateWaterStateRequestComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 0
    virtual ~UnderWaterSensingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doUnderWaterSensing(
        ::StrictEntityContext const&                                                          entity,
        ::StateVectorComponent const&                                                         stateVectorComponent,
        ::UpdateWaterStateRequestComponent const&                                             request,
        ::Optional<::ActorHeadInWaterFlagComponent const>                                     headInWater,
        ::EntityModifier<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent> modifier,
        ::GetAttachPositionViews const&                                                       views,
        ::IConstBlockSource const&                                                            region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::StrictExecutionContext<
                      ::Filter<
                          ::HorseFlagComponent,
                          ::MobFlagComponent,
                          ::ParrotFlagComponent,
                          ::VehicleComponent,
                          ::CamelFlagComponent,
                          ::PlayerComponent>,
                      ::Read<
                          ::DimensionTypeComponent,
                          ::StateVectorComponent,
                          ::UpdateWaterStateRequestComponent,
                          ::ActorRotationComponent,
                          ::MobBodyRotationComponent,
                          ::PassengerComponent,
                          ::RenderRotationComponent,
                          ::StandAnimationComponent,
                          ::ActorDataFlagComponent,
                          ::AABBShapeComponent,
                          ::OffsetsComponent,
                          ::VanillaOffsetComponent,
                          ::PassengerRenderingRidingOffsetComponent>,
                      ::Write<>,
                      ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context);

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::UpdateWaterStateRequestComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
