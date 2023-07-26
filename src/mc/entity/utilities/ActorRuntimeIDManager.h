#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeIDManager {

public:
    // prevent constructor by default
    ActorRuntimeIDManager& operator=(ActorRuntimeIDManager const&) = delete;
    ActorRuntimeIDManager(ActorRuntimeIDManager const&)            = delete;

public:
    /**
     * @symbol ??0ActorRuntimeIDManager\@\@QEAA\@XZ
     */
    MCAPI ActorRuntimeIDManager(); // NOLINT
    /**
     * @symbol ?addRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEAAXVActorRuntimeID\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI void addRuntimeActorEntity(class ActorRuntimeID, class WeakEntityRef); // NOLINT
    /**
     * @symbol ?getNextRuntimeID\@ActorRuntimeIDManager\@\@QEAA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getNextRuntimeID(); // NOLINT
    /**
     * @symbol ?getRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEBAPEAVActor\@\@VActorRuntimeID\@\@_N\@Z
     */
    MCAPI class Actor* getRuntimeActorEntity(class ActorRuntimeID, bool) const; // NOLINT
    /**
     * @symbol
     * ?getRuntimeActorList\@ActorRuntimeIDManager\@\@QEBA?AV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Actor*> getRuntimeActorList() const; // NOLINT
    /**
     * @symbol ?initialize\@ActorRuntimeIDManager\@\@QEAAXAEAVActorManager\@\@AEAVGameplayUserManager\@\@\@Z
     */
    MCAPI void initialize(class ActorManager&, class GameplayUserManager&); // NOLINT
    /**
     * @symbol ?removeRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEAAXVActorRuntimeID\@\@\@Z
     */
    MCAPI void removeRuntimeActorEntity(class ActorRuntimeID); // NOLINT
    /**
     * @symbol ??1ActorRuntimeIDManager\@\@QEAA\@XZ
     */
    MCAPI ~ActorRuntimeIDManager(); // NOLINT

    // private:
    /**
     * @symbol ?_addEntity\@ActorRuntimeIDManager\@\@AEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void _addEntity(class EntityContext const&); // NOLINT
    /**
     * @symbol ?_onActorAdded\@ActorRuntimeIDManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onActorAdded(class Actor&); // NOLINT
    /**
     * @symbol ?_onRemoveActorEntityReferences\@ActorRuntimeIDManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor&); // NOLINT
    /**
     * @symbol ?_removeEntity\@ActorRuntimeIDManager\@\@AEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void _removeEntity(class EntityContext const&); // NOLINT

private:
};
