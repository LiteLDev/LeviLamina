#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/components/FlagComponent.h"

namespace ClientRewind {
// NOLINTBEGIN
// symbol:
// ?applyData@ClientRewind@@YAXAEBUReplayStateTrackerDiff@@AEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@V?$optional_ref@UActorDataHorseFlagComponent@@@@V?$optional_ref@UActorDataJumpDurationComponent@@@@@Z
MCAPI void
applyData(struct ReplayStateTrackerDiff const&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, class optional_ref<struct ActorDataHorseFlagComponent>, class optional_ref<struct ActorDataJumpDurationComponent>);

// symbol:
// ?extractSnapshot@ClientRewind@@YA?AUReplayStateTrackerDiff@@AEBUActorDataFlagComponent@@V?$optional_ref@$$CBUActorDataHorseFlagComponent@@@@V?$optional_ref@$$CBUActorDataJumpDurationComponent@@@@@Z
MCAPI struct ReplayStateTrackerDiff
extractSnapshot(struct ActorDataFlagComponent const&, class optional_ref<struct ActorDataHorseFlagComponent const>, class optional_ref<struct ActorDataJumpDurationComponent const>);

// symbol:
// ?tickAccumulate@ClientRewind@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEAUReplayStateTrackerComponent@@AEBUActorDataFlagComponent@@V?$optional_ref@$$CBUActorDataHorseFlagComponent@@@@V?$optional_ref@$$CBUActorDataJumpDurationComponent@@@@@Z
MCAPI void
tickAccumulate(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, struct ReplayStateTrackerComponent&, struct ActorDataFlagComponent const&, class optional_ref<struct ActorDataHorseFlagComponent const>, class optional_ref<struct ActorDataJumpDurationComponent const>);
// NOLINTEND

}; // namespace ClientRewind
