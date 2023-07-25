#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHistory {
public:
    // ActorHistory inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on

    // ActorHistory inner types define
    struct Snapshot {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHISTORY_SNAPSHOT
    public:
        Snapshot& operator=(Snapshot const&) = delete;
        Snapshot(Snapshot const&)            = delete;
        Snapshot()                           = delete;
#endif

    public:
        /**
         * @symbol ??1Snapshot\@ActorHistory\@\@QEAA\@XZ
         */
        MCAPI ~Snapshot();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHISTORY
public:
    ActorHistory& operator=(ActorHistory const&) = delete;
    ActorHistory(ActorHistory const&)            = delete;
    ActorHistory()                               = delete;
#endif

public:
    /**
     * @symbol ?addFrame\@ActorHistory\@\@QEAA_NAEAUIActorMovementProxy\@\@_KAEAVEntityRegistry\@\@\@Z
     */
    MCAPI bool addFrame(struct IActorMovementProxy&, unsigned __int64, class EntityRegistry&);
    /**
     * @symbol ?createSnapshot\@ActorHistory\@\@QEBA?AUSnapshot\@1\@AEAUIActorMovementProxy\@\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy&, class EntityRegistry&) const;
    /**
     * @symbol ??1ActorHistory\@\@QEAA\@XZ
     */
    MCAPI ~ActorHistory();
};
