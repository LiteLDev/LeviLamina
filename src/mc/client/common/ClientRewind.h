#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/utilities/ActorDataIDs.h"
#include "mc/world/components/FlagComponent.h"

namespace ClientRewind {
// NOLINTBEGIN
// symbol: ?applyData@ClientRewind@@YAXAEBUReplayStateTrackerDiff@@AEAUSynchedActorDataComponent@@@Z
MCAPI void applyData(struct ReplayStateTrackerDiff const&, struct SynchedActorDataComponent&);

// symbol: ?applyData@ClientRewind@@YAXAEBUReplayStateFlagDiff@@AEAUSynchedActorDataComponent@@W4ActorDataIDs@@@Z
MCAPI void applyData(struct ReplayStateFlagDiff const&, struct SynchedActorDataComponent&, ::ActorDataIDs);

// symbol: ?extractSnapshot@ClientRewind@@YA?AUReplayStateTrackerDiff@@AEBUSynchedActorDataComponent@@@Z
MCAPI struct ReplayStateTrackerDiff extractSnapshot(struct SynchedActorDataComponent const&);

// symbol:
// ?tickAccumulate@ClientRewind@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEAUReplayStateTrackerComponent@@AEBUSynchedActorDataComponent@@@Z
MCAPI void
tickAccumulate(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, struct ReplayStateTrackerComponent&, struct SynchedActorDataComponent const&);
// NOLINTEND

}; // namespace ClientRewind
