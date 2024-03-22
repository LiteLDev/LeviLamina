#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
// clang-format on

namespace ClientRewind {
// NOLINTBEGIN
// symbol:
// ?extractSnapshot@ClientRewind@@YA?AUReplayStateTrackerDiff@@AEBV?$tuple@AEBUActorDataFlagComponent@@V?$Optional@$$CBUActorDataHorseFlagComponent@@@@V?$Optional@$$CBUActorDataJumpDurationComponent@@@@V?$Optional@$$CBUActorDataBoundingBoxComponent@@@@V?$Optional@$$CBUActorDataSeatOffsetComponent@@@@@std@@@Z
MCAPI struct ReplayStateTrackerDiff extractSnapshot(std::tuple<
                                                    struct ActorDataFlagComponent const&,
                                                    class Optional<struct ActorDataHorseFlagComponent const>,
                                                    class Optional<struct ActorDataJumpDurationComponent const>,
                                                    class Optional<struct ActorDataBoundingBoxComponent const>,
                                                    class Optional<struct ActorDataSeatOffsetComponent const>> const&);

// symbol:
// ?tickAccumulate@ClientRewind@@YAXAEAUReplayStateTrackerComponent@@AEBV?$tuple@AEBUActorDataFlagComponent@@V?$Optional@$$CBUActorDataHorseFlagComponent@@@@V?$Optional@$$CBUActorDataJumpDurationComponent@@@@V?$Optional@$$CBUActorDataBoundingBoxComponent@@@@V?$Optional@$$CBUActorDataSeatOffsetComponent@@@@@std@@@Z
MCAPI void tickAccumulate(struct ReplayStateTrackerComponent&, std::tuple<struct ActorDataFlagComponent const&, class Optional<struct ActorDataHorseFlagComponent const>, class Optional<struct ActorDataJumpDurationComponent const>, class Optional<struct ActorDataBoundingBoxComponent const>, class Optional<struct ActorDataSeatOffsetComponent const>> const&);
// NOLINTEND

}; // namespace ClientRewind
