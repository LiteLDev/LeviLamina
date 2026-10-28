#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
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
#include "mc/entity/utilities/GetAttachPositionViews.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

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
    // UnderWaterSensingSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // UnderWaterSensingSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<
                ::StrictEntityContext,
                ::StateVectorComponent const,
                ::UpdateWaterStateRequestComponent const,
                ::Optional<::ActorHeadInWaterFlagComponent const>>>
            mView;
        ::ll::TypedStorage<8, 16, ::EntityModifier<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>>
                                                                 mModifier;
        ::ll::TypedStorage<8, 480, ::GetAttachPositionViews>     mAttachPos;
        ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs> mBlockSource;
        // NOLINTEND

    public:
        // prevent constructor by default
        Views();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Views(
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
                ::EntityFactoryT<>>& c
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
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
                ::EntityFactoryT<>>& c
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UnderWaterSensingSystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnderWaterSensingSystem() /*override*/ = default;

    virtual void tick(
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
            ::EntityFactoryT<>>& context
    ) /*override*/;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doUnderWaterSensing(
        ::StrictEntityContext const&                      entity,
        ::StateVectorComponent const&                     stateVectorComponent,
        ::UpdateWaterStateRequestComponent const&         request,
        ::Optional<::ActorHeadInWaterFlagComponent const> headInWater,
        ::EntityModifier<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent> const& modifier,
        ::GetAttachPositionViews const&                                                              views,
        ::IConstBlockSource const&                                                                   region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
            ::EntityFactoryT<>>& context
    );

    MCAPI void $singleTick(
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
