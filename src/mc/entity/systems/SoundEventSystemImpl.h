#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/GetAttachPositionViews.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct SoundEventRequestQueueComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct SoundEventSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                  ::Filter<
                                      ::HorseFlagComponent,
                                      ::MobFlagComponent,
                                      ::ParrotFlagComponent,
                                      ::VehicleComponent,
                                      ::CamelFlagComponent,
                                      ::PlayerComponent>,
                                  ::Read<
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
                                  ::Write<::LevelComponent, ::SoundEventRequestQueueComponent>,
                                  ::AddRemove<>,
                                  ::GlobalRead<>,
                                  ::GlobalWrite<>,
                                  ::EntityFactoryT<>>> {
public:
    // SoundEventSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // SoundEventSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::ViewT<::StrictEntityContext, ::LevelComponent, ::SoundEventRequestQueueComponent>>
                                                             mRequestView;
        ::ll::TypedStorage<8, 480, ::GetAttachPositionViews> mAttachViews;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 544, ::std::optional<::SoundEventSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
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
            ::Write<::LevelComponent, ::SoundEventRequestQueueComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
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
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
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
            ::Write<::LevelComponent, ::SoundEventRequestQueueComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
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
