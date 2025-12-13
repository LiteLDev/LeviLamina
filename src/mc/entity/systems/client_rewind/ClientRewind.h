#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {
// functions
// NOLINTBEGIN
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
// NOLINTEND

} // namespace ClientRewind
