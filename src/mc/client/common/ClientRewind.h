#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/utilities/ActorDataIDs.h"
#include "mc/world/components/FlagComponent.h"

namespace ClientRewind {
// NOLINTBEGIN
// symbol: ?applyData@ClientRewind@@YAXAEBUReplayStateFlagDiff@@AEAUSynchedActorDataComponent@@W4ActorDataIDs@@@Z
MCAPI void applyData(struct ReplayStateFlagDiff const&, struct SynchedActorDataComponent&, ::ActorDataIDs);

// symbol:
// ?applyData@ClientRewind@@YAXAEBUReplayStateTrackerDiff@@AEAUSynchedActorDataComponent@@AEAUActorDataDirtyFlagsComponent@@V?$optional_ref@UActorDataHorseFlagComponent@@@@V?$optional_ref@UActorDataJumpDurationComponent@@@@@Z
MCAPI void
applyData(struct ReplayStateTrackerDiff const&, struct SynchedActorDataComponent&, struct ActorDataDirtyFlagsComponent&, class optional_ref<struct ActorDataHorseFlagComponent>, class optional_ref<struct ActorDataJumpDurationComponent>);

// symbol:
// ?tickAccumulate@ClientRewind@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEAUReplayStateTrackerComponent@@AEBUSynchedActorDataComponent@@V?$optional_ref@$$CBUActorDataHorseFlagComponent@@@@V?$optional_ref@$$CBUActorDataJumpDurationComponent@@@@@Z
MCAPI void
tickAccumulate(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, struct ReplayStateTrackerComponent&, struct SynchedActorDataComponent const&, class optional_ref<struct ActorDataHorseFlagComponent const>, class optional_ref<struct ActorDataJumpDurationComponent const>);
// NOLINTEND

}; // namespace ClientRewind
