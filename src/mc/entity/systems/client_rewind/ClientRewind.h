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
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
// clang-format on

namespace ClientRewind {
// NOLINTBEGIN
MCAPI struct ReplayStateTrackerDiff
extractSnapshot(std::tuple<
                struct ActorDataFlagComponent const&,
                class Optional<struct ActorDataHorseFlagComponent const>,
                class Optional<struct ActorDataJumpDurationComponent const>,
                class Optional<struct ActorDataBoundingBoxComponent const>,
                class Optional<struct ActorDataSeatOffsetComponent const>> const& data);

MCAPI void tickAccumulate(
    struct ReplayStateTrackerComponent& tracker,
    std::tuple<
        struct ActorDataFlagComponent const&,
        class Optional<struct ActorDataHorseFlagComponent const>,
        class Optional<struct ActorDataJumpDurationComponent const>,
        class Optional<struct ActorDataBoundingBoxComponent const>,
        class Optional<struct ActorDataSeatOffsetComponent const>> const& data
);
// NOLINTEND

}; // namespace ClientRewind
