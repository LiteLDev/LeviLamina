#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ReplayStateComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct DynamicRenderOffsetComponent;
struct InterpolateMovementNeededComponent;
struct MoveInputComponent;
struct ReplayStateTrackerComponent;
struct ReplayStateTrackerDiff;
struct ReplayStateValidFrameSupportComponent;
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
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

MCAPI void applyData(
    ::ClientRewind::ApplyReplayStateTrackerRequestComponent const& toApply,
    ::ActorDataDirtyFlagsComponent&                                dirtyFlags,
    ::std::tuple<
        ::ActorDataFlagComponent&,
        ::Optional<::ActorDataHorseFlagComponent>,
        ::Optional<::ActorDataJumpDurationComponent>,
        ::Optional<::ActorDataBoundingBoxComponent>,
        ::Optional<::ActorDataSeatOffsetComponent>>& data
);

MCAPI ::ReplayStateTrackerDiff extractSnapshot(
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

MCAPI void tickAccumulate(
    ::ReplayStateTrackerComponent& tracker,
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

#ifdef LL_PLAT_C
MCAPI void tickCorrectionInterpolation(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent>> entity,
    ::StrictEntityContext const&                                       offset,
    ::DynamicRenderOffsetComponent&                                    modifier,
    ::EntityModifier<::DynamicRenderOffsetComponent>
);

MCAPI void tickPublish(
    ::ReplayStateComponent&        replay,
    ::ReplayStateTrackerComponent& tracker,
    ::std::tuple<
        ::ActorDataFlagComponent const&,
        ::Optional<::ActorDataHorseFlagComponent const>,
        ::Optional<::ActorDataJumpDurationComponent const>,
        ::Optional<::ActorDataBoundingBoxComponent const>,
        ::Optional<::ActorDataSeatOffsetComponent const>> const& data
);

MCAPI void tickRewindHistory(::ViewT<::StrictEntityContext, ::ActorOwnerComponent, ::ReplayStateComponent> const& view);
#endif
// NOLINTEND

} // namespace ClientRewind
