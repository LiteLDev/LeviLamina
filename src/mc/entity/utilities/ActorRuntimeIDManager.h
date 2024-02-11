#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeIDManager {
public:
    // prevent constructor by default
    ActorRuntimeIDManager& operator=(ActorRuntimeIDManager const&);
    ActorRuntimeIDManager(ActorRuntimeIDManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActorRuntimeIDManager@@QEAA@XZ
    MCAPI ActorRuntimeIDManager();

    // symbol: ?addRuntimeActorEntity@ActorRuntimeIDManager@@QEAAXVActorRuntimeID@@VWeakEntityRef@@@Z
    MCAPI void addRuntimeActorEntity(class ActorRuntimeID, class WeakEntityRef entityRef);

    // symbol: ?getNextRuntimeID@ActorRuntimeIDManager@@QEAA?AVActorRuntimeID@@XZ
    MCAPI class ActorRuntimeID getNextRuntimeID();

    // symbol: ?getRuntimeActorEntity@ActorRuntimeIDManager@@QEBAPEAVActor@@VActorRuntimeID@@_N@Z
    MCAPI class Actor* getRuntimeActorEntity(class ActorRuntimeID actorId, bool getRemoved) const;

    // symbol:
    // ?getRuntimeActorList@ActorRuntimeIDManager@@QEBA?AV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@XZ
    MCAPI std::vector<class Actor*> getRuntimeActorList() const;

    // symbol: ?initialize@ActorRuntimeIDManager@@QEAAXAEAVActorManager@@AEAVGameplayUserManager@@@Z
    MCAPI void initialize(class ActorManager&, class GameplayUserManager&);

    // symbol: ?removeRuntimeActorEntity@ActorRuntimeIDManager@@QEAAXVActorRuntimeID@@@Z
    MCAPI void removeRuntimeActorEntity(class ActorRuntimeID);

    // symbol: ??1ActorRuntimeIDManager@@QEAA@XZ
    MCAPI ~ActorRuntimeIDManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addEntity@ActorRuntimeIDManager@@AEAAXAEBVEntityContext@@@Z
    MCAPI void _addEntity(class EntityContext const& entity);

    // symbol: ?_onActorAdded@ActorRuntimeIDManager@@AEAAXAEAVActor@@@Z
    MCAPI void _onActorAdded(class Actor& actor);

    // symbol: ?_onRemoveActorEntityReferences@ActorRuntimeIDManager@@AEAAXAEAVActor@@@Z
    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    // symbol: ?_removeEntity@ActorRuntimeIDManager@@AEAAXAEBVEntityContext@@@Z
    MCAPI void _removeEntity(class EntityContext const& entity);

    // NOLINTEND
};
