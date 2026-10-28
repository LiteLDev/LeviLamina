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
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct InterpolateMovementNeededComponent;
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
// clang-format on

namespace ClientRewind {

struct ApplySystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                         ::Filter<::InterpolateMovementNeededComponent>,
                         ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                         ::Write<
                             ::ActorDataFlagComponent,
                             ::ActorDataHorseFlagComponent,
                             ::ActorDataJumpDurationComponent,
                             ::ActorDataBoundingBoxComponent,
                             ::ActorDataSeatOffsetComponent,
                             ::ActorDataDirtyFlagsComponent>,
                         ::AddRemove<>,
                         ::GlobalRead<>,
                         ::GlobalWrite<>,
                         ::EntityFactoryT<>>> {
public:
    // ApplySystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ApplySystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<
                ::StrictEntityContext,
                ::ClientRewind::ApplyReplayStateTrackerRequestComponent,
                ::ActorDataDirtyFlagsComponent>>
            mView;
        ::ll::TypedStorage<
            8,
            24,
            ::ViewT<
                ::StrictEntityContext,
                ::ActorDataFlagComponent,
                ::Optional<::ActorDataHorseFlagComponent>,
                ::Optional<::ActorDataJumpDurationComponent>,
                ::Optional<::ActorDataBoundingBoxComponent>,
                ::Optional<::ActorDataSeatOffsetComponent>>>
            mTracked;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::InterpolateMovementNeededComponent>,
        ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
        ::Write<
            ::ActorDataFlagComponent,
            ::ActorDataHorseFlagComponent,
            ::ActorDataJumpDurationComponent,
            ::ActorDataBoundingBoxComponent,
            ::ActorDataSeatOffsetComponent,
            ::ActorDataDirtyFlagsComponent>,
        ::AddRemove<>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::std::optional<::ClientRewind::ApplySystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickEntity(
        ::StrictEntityContext const&                             entity,
        ::ClientRewind::ApplyReplayStateTrackerRequestComponent& request,
        ::ActorDataDirtyFlagsComponent&                          dirtyFlags,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent,
            ::Optional<::ActorDataHorseFlagComponent>,
            ::Optional<::ActorDataJumpDurationComponent>,
            ::Optional<::ActorDataBoundingBoxComponent>,
            ::Optional<::ActorDataSeatOffsetComponent>> const& tracked
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientRewind
