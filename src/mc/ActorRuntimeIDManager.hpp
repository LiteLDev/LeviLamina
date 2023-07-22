/**
 * @file  ActorRuntimeIDManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorRuntimeIDManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORRUNTIMEIDMANAGER
public:
    class ActorRuntimeIDManager& operator=(class ActorRuntimeIDManager const &) = delete;
    ActorRuntimeIDManager(class ActorRuntimeIDManager const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ActorRuntimeIDManager\@\@QEAA\@XZ
     */
    MCAPI ActorRuntimeIDManager();
    /**
     * @symbol  ?addRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEAAXVActorRuntimeID\@\@VWeakEntityRef\@\@\@Z
     */
    MCAPI void addRuntimeActorEntity(class ActorRuntimeID, class WeakEntityRef);
    /**
     * @symbol  ?getNextRuntimeID\@ActorRuntimeIDManager\@\@QEAA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getNextRuntimeID();
    /**
     * @symbol  ?getRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEBAPEAVActor\@\@VActorRuntimeID\@\@_N\@Z
     */
    MCAPI class Actor * getRuntimeActorEntity(class ActorRuntimeID, bool) const;
    /**
     * @symbol  ?getRuntimeActorList\@ActorRuntimeIDManager\@\@QEBA?AV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Actor *> getRuntimeActorList() const;
    /**
     * @symbol  ?initialize\@ActorRuntimeIDManager\@\@QEAAXAEAVActorManager\@\@\@Z
     */
    MCAPI void initialize(class ActorManager &);
    /**
     * @symbol  ?removeRuntimeActorEntity\@ActorRuntimeIDManager\@\@QEAAXVActorRuntimeID\@\@\@Z
     */
    MCAPI void removeRuntimeActorEntity(class ActorRuntimeID);
    /**
     * @symbol  ??1ActorRuntimeIDManager\@\@QEAA\@XZ
     */
    MCAPI ~ActorRuntimeIDManager();

//private:
    /**
     * @symbol  ?_onActorAdded\@ActorRuntimeIDManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onActorAdded(class Actor &);
    /**
     * @symbol  ?_onRemoveActorEntityReferences\@ActorRuntimeIDManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor &);

private:

};