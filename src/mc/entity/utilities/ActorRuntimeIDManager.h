#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeIDManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORRUNTIMEIDMANAGER
public:
    ActorRuntimeIDManager& operator=(ActorRuntimeIDManager const&) = delete;
    ActorRuntimeIDManager(ActorRuntimeIDManager const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ActorRuntimeIDManager\@\@QEAA\@XZ
     */
    MCAPI ActorRuntimeIDManager();
    /**
     * @symbol ?addRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEAAXVActorRuntimeID\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI void addRuntimeActorEntity(class ActorRuntimeID, class WeakEntityRef);
    /**
     * @symbol ?getNextRuntimeID\@ActorRuntimeIDManager\@\@QEAA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getNextRuntimeID();
    /**
     * @symbol ?getRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEBAPEAVActor\@\@VActorRuntimeID\@\@_N\@Z
     */
    MCAPI class Actor* getRuntimeActorEntity(class ActorRuntimeID, bool) const;
    /**
     * @symbol
     * ?getRuntimeActorList\@ActorRuntimeIDManager\@\@QEBA?AV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Actor*> getRuntimeActorList() const;
    /**
     * @symbol ?initialize\@ActorRuntimeIDManager\@\@QEAAXAEAVActorManager\@\@AEAVGameplayUserManager\@\@\@Z
     */
    MCAPI void initialize(class ActorManager&, class GameplayUserManager&);
    /**
     * @symbol ?removeRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEAAXVActorRuntimeID\@\@\@Z
     */
    MCAPI void removeRuntimeActorEntity(class ActorRuntimeID);
    /**
     * @symbol ??1ActorRuntimeIDManager\@\@QEAA\@XZ
     */
    MCAPI ~ActorRuntimeIDManager();

    // private:
    /**
     * @symbol ?_addEntity\@ActorRuntimeIDManager\@\@AEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void _addEntity(class EntityContext const&);
    /**
     * @symbol ?_onActorAdded\@ActorRuntimeIDManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onActorAdded(class Actor&);
    /**
     * @symbol ?_onRemoveActorEntityReferences\@ActorRuntimeIDManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor&);
    /**
     * @symbol ?_removeEntity\@ActorRuntimeIDManager\@\@AEAAXAEBVEntityContext\@\@\@Z
     */
    MCAPI void _removeEntity(class EntityContext const&);

private:
};
