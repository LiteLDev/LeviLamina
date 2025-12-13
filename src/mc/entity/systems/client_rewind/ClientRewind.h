#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ReplayStateComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededComponent;
struct MoveInputComponent;
struct ReplayStateTrackerComponent;
struct ReplayStateValidFrameSupportComponent;
// clang-format on

namespace ClientRewind {
// functions
// NOLINTBEGIN
MCNAPI_C void _advanceRewindFrameSystem(
    ::Optional<::MoveInputComponent const>                    moveInputComponent,
    ::Optional<::ReplayStateValidFrameSupportComponent const> validFrameSupportComponent,
    ::ActorOwnerComponent&                                    actorOwnerComponent,
    ::ReplayStateComponent&                                   replayStateComponent
);

MCNAPI_C void _tickAdvanceRewindFrameSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::Optional<::MoveInputComponent const>,
        ::Optional<::ReplayStateValidFrameSupportComponent const>,
        ::ActorOwnerComponent,
        ::ReplayStateComponent> view
);

MCNAPI void tickAccumulate(
    ::ReplayStateTrackerComponent& tracker,
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

MCNAPI void tickDiscard(
    ::ReplayStateTrackerComponent& tracker,
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

MCNAPI_C void tickPublish(
    ::ReplayStateComponent&        replay,
    ::ReplayStateTrackerComponent& tracker,
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

MCNAPI_C void
tickRewindHistory(::ViewT<::StrictEntityContext, ::ActorOwnerComponent, ::ReplayStateComponent> const& view);
// NOLINTEND

} // namespace ClientRewind
