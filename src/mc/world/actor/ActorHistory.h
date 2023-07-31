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

    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const&) = delete;
        Snapshot(Snapshot const&)            = delete;
        Snapshot()                           = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1Snapshot\@ActorHistory\@\@QEAA\@XZ
         */
        MCAPI ~Snapshot();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ActorHistory& operator=(ActorHistory const&) = delete;
    ActorHistory(ActorHistory const&)            = delete;
    ActorHistory()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addFrame\@ActorHistory\@\@QEAA_NAEAUIActorMovementProxy\@\@_KAEAVEntityRegistry\@\@\@Z
     */
    MCAPI bool addFrame(struct IActorMovementProxy&, uint64_t, class EntityRegistry&);
    /**
     * @symbol ?createSnapshot\@ActorHistory\@\@QEBA?AUSnapshot\@1\@AEAUIActorMovementProxy\@\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy&, class EntityRegistry&) const;
    /**
     * @symbol ??1ActorHistory\@\@QEAA\@XZ
     */
    MCAPI ~ActorHistory();
    // NOLINTEND
};
