#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"

class AutonomousActorManager {
public:
    // prevent constructor by default
    AutonomousActorManager& operator=(AutonomousActorManager const&);
    AutonomousActorManager(AutonomousActorManager const&);
    AutonomousActorManager();

public:
    // NOLINTBEGIN
    // symbol: ??0AutonomousActorManager@@QEAA@V?$WeakRef@VEntityRegistry@@@@@Z
    MCAPI explicit AutonomousActorManager(class WeakRef<class EntityRegistry>);

    // symbol:
    // ?addAutonomousActorEntity@AutonomousActorManager@@QEAAPEAVActor@@AEAVDimension@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCAPI class Actor* addAutonomousActorEntity(class Dimension&, class OwnerPtr<class EntityContext>);

    // symbol:
    // ?addAutonomousActorEntity@AutonomousActorManager@@QEAAPEAVActor@@AEAVIAddActorEntityProxy@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCAPI class Actor*
    addAutonomousActorEntity(class IAddActorEntityProxy&, class OwnerPtr<class EntityContext> entity);

    // symbol: ?hasOwnedInactiveAutonomousActorWithUniqueID@AutonomousActorManager@@QEBA_NUActorUniqueID@@@Z
    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(struct ActorUniqueID actorUniqueID) const;

    // symbol:
    // ?initializeWithActorManager@AutonomousActorManager@@QEAAXAEBV?$not_null@V?$StackRefResult@VActorManager@@@@@gsl@@@Z
    MCAPI void initializeWithActorManager(gsl::not_null<class StackRefResult<class ActorManager>> const&);

    // symbol: ?loadAutonomousActorsFromDisk@AutonomousActorManager@@QEAAXAEAVLevelStorage@@AEAVActorFactory@@@Z
    MCAPI void loadAutonomousActorsFromDisk(class LevelStorage&, class ActorFactory&);

    // symbol: ?onLevelTearingDown@AutonomousActorManager@@QEAAXXZ
    MCAPI void onLevelTearingDown();

    // symbol: ?registerForLevelChunkEvents@AutonomousActorManager@@QEAAXAEAVILevelChunkEventManagerConnector@@@Z
    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector&);

    // symbol: ?registerLevelStorageManagerListener@AutonomousActorManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);

    // symbol: ??1AutonomousActorManager@@QEAA@XZ
    MCAPI ~AutonomousActorManager();

    // symbol: ?AUTONOMOUS_ACTOR_KEY@AutonomousActorManager@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const AUTONOMOUS_ACTOR_KEY;

    // symbol: ?AUTONOMOUS_ACTOR_LIST_KEY@AutonomousActorManager@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const AUTONOMOUS_ACTOR_LIST_KEY;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_moveActiveAutonomousActorEntityToInactive@AutonomousActorManager@@AEAAXAEAVActor@@AEAVLevelChunk@@@Z
    MCAPI void _moveActiveAutonomousActorEntityToInactive(class Actor& actor, class LevelChunk& levelChunk);

    // symbol: ?_onChunkDiscarded@AutonomousActorManager@@AEAAXAEAVLevelChunk@@@Z
    MCAPI void _onChunkDiscarded(class LevelChunk&);

    // symbol: ?_onRemoveActorEntityReferences@AutonomousActorManager@@AEAAXAEAVActor@@@Z
    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    // symbol: ?_saveAllAutonomousActors@AutonomousActorManager@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _saveAllAutonomousActors(class LevelStorage& levelStorage);

    // symbol: ?_deduplicateDuplicateActorsFromList@AutonomousActorManager@@CAXAEAVListTag@@@Z
    MCAPI static void _deduplicateDuplicateActorsFromList(class ListTag&);

    // NOLINTEND
};
