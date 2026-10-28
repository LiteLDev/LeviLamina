#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ReplayStateComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct InterpolateMovementNeededComponent;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct PublishSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                           ::Filter<::InterpolateMovementNeededComponent>,
                           ::Read<
                               ::ActorDataFlagComponent,
                               ::ActorDataHorseFlagComponent,
                               ::ActorDataJumpDurationComponent,
                               ::ActorDataBoundingBoxComponent,
                               ::ActorDataSeatOffsetComponent>,
                           ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
                           ::AddRemove<>,
                           ::GlobalRead<>,
                           ::GlobalWrite<>,
                           ::EntityFactoryT<>>> {
public:
    // PublishSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // PublishSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            64,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::InterpolateMovementNeededComponent>,
                ::ReplayStateComponent,
                ::ReplayStateTrackerComponent>>
            mView;
        ::ll::TypedStorage<
            8,
            24,
            ::ViewT<
                ::StrictEntityContext,
                ::ActorDataFlagComponent const,
                ::Optional<::ActorDataHorseFlagComponent const>,
                ::Optional<::ActorDataJumpDurationComponent const>,
                ::Optional<::ActorDataBoundingBoxComponent const>,
                ::Optional<::ActorDataSeatOffsetComponent const>>>
            mTracked;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::InterpolateMovementNeededComponent>,
        ::Read<
            ::ActorDataFlagComponent,
            ::ActorDataHorseFlagComponent,
            ::ActorDataJumpDurationComponent,
            ::ActorDataBoundingBoxComponent,
            ::ActorDataSeatOffsetComponent>,
        ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
        ::AddRemove<>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::std::optional<::ClientRewind::PublishSystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void tickEntity(
        ::StrictEntityContext const&   entity,
        ::ReplayStateComponent&        replay,
        ::ReplayStateTrackerComponent& tracker,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent const,
            ::Optional<::ActorDataHorseFlagComponent const>,
            ::Optional<::ActorDataJumpDurationComponent const>,
            ::Optional<::ActorDataBoundingBoxComponent const>,
            ::Optional<::ActorDataSeatOffsetComponent const>> const& tracked
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientRewind
