#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/GetAttachPositionViews.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct AttributeRequestComponent;
struct CamelFlagComponent;
struct DimensionTypeComponent;
struct ExhaustionComponent;
struct ExternalDataComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct ServerPlayerCurrentMovementComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace FoodExhaustionSystemImpl {

struct FoodExhaustionSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                      ::Filter<
                                          ::ActorMovementTickNeededComponent,
                                          ::PassengerComponent,
                                          ::PlayerComponent,
                                          ::HorseFlagComponent,
                                          ::MobFlagComponent,
                                          ::ParrotFlagComponent,
                                          ::VehicleComponent,
                                          ::CamelFlagComponent>,
                                      ::Read<
                                          ::DimensionTypeComponent,
                                          ::ExhaustionComponent,
                                          ::OnGroundFlagComponent,
                                          ::ActorGameTypeComponent,
                                          ::ServerPlayerCurrentMovementComponent,
                                          ::StateVectorComponent,
                                          ::ActorDataFlagComponent,
                                          ::WasInWaterFlagComponent,
                                          ::ActorRotationComponent,
                                          ::MobBodyRotationComponent,
                                          ::PassengerComponent,
                                          ::RenderRotationComponent,
                                          ::StandAnimationComponent,
                                          ::AABBShapeComponent,
                                          ::OffsetsComponent,
                                          ::VanillaOffsetComponent,
                                          ::PassengerRenderingRidingOffsetComponent>,
                                      ::Write<>,
                                      ::AddRemove<::AttributeRequestComponent>,
                                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
                                      ::GlobalWrite<>,
                                      ::EntityFactoryT<>>> {
public:
    // FoodExhaustionSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // FoodExhaustionSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            96,
            ::ViewT<
                ::StrictEntityContext,
                ::Exclude<::PassengerComponent>,
                ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>,
                ::Optional<::OnGroundFlagComponent const>,
                ::Optional<::WasInWaterFlagComponent const>,
                ::ExhaustionComponent const,
                ::ActorGameTypeComponent const,
                ::ServerPlayerCurrentMovementComponent const,
                ::StateVectorComponent const,
                ::ActorDataFlagComponent const>>
                                                                                                  mView;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::ExternalDataComponent const>>                 mExternalData;
        ::ll::TypedStorage<8, 480, ::GetAttachPositionViews>                                      mAttachPos;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>> mDimensionType;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const>> mBlockSourceFactory;
        ::ll::TypedStorage<8, 8, ::EntityModifier<::AttributeRequestComponent>>                   mModifier;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 632, ::std::optional<::FoodExhaustionSystemImpl::FoodExhaustionSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::PassengerComponent,
                ::PlayerComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::ExhaustionComponent,
                ::OnGroundFlagComponent,
                ::ActorGameTypeComponent,
                ::ServerPlayerCurrentMovementComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::WasInWaterFlagComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::AttributeRequestComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::PassengerComponent,
                ::PlayerComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::ExhaustionComponent,
                ::OnGroundFlagComponent,
                ::ActorGameTypeComponent,
                ::ServerPlayerCurrentMovementComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::WasInWaterFlagComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::AttributeRequestComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FoodExhaustionSystemImpl
