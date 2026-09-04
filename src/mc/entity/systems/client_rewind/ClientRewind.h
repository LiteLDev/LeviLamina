#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ReplayStateComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct MoveInputComponent;
struct ReplayStateTrackerComponent;
struct ReplayStateTrackerDiff;
struct ReplayStateValidFrameSupportComponent;
// clang-format on

namespace ClientRewind {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void _advanceRewindFrameSystem(
    ::Optional<::MoveInputComponent const>                    moveInputComponent,
    ::Optional<::ReplayStateValidFrameSupportComponent const> validFrameSupportComponent,
    ::ActorOwnerComponent&                                    actorOwnerComponent,
    ::ReplayStateComponent&                                   replayStateComponent
);
#endif

MCAPI ::ReplayStateTrackerDiff extractSnapshot(
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

#ifdef LL_PLAT_C
MCAPI void tickAccumulate(
    ::ReplayStateTrackerComponent& tracker,
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);
#endif
// NOLINTEND

} // namespace ClientRewind
