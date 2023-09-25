/**
 * @file  ActorHistory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHistory.
 *
 */
class ActorHistory {

#define AFTER_EXTRA
// Add Member There
public:
struct Snapshot {
    Snapshot() = delete;
    Snapshot(Snapshot const&) = delete;
    Snapshot(Snapshot const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHISTORY
public:
    class ActorHistory& operator=(class ActorHistory const &) = delete;
    ActorHistory(class ActorHistory const &) = delete;
    ActorHistory() = delete;
#endif

public:
    /**
     * @symbol ?addFrame\@ActorHistory\@\@QEAA_NAEAUIActorMovementProxy\@\@_KAEAVEntityRegistry\@\@\@Z
     */
    MCAPI bool addFrame(struct IActorMovementProxy &, unsigned __int64, class EntityRegistry &);
    /**
     * @symbol ?addInputToFrontOfFrame\@ActorHistory\@\@QEAAXV?$shared_ptr\@UIReplayableActorInput\@\@\@std\@\@_K\@Z
     */
    MCAPI void addInputToFrontOfFrame(class std::shared_ptr<struct IReplayableActorInput>, unsigned __int64);
    /**
     * @symbol ?createSnapshot\@ActorHistory\@\@QEBA?AUSnapshot\@1\@AEAUIActorMovementProxy\@\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy &, class EntityRegistry &) const;
    /**
     * @symbol ?getFrame\@ActorHistory\@\@QEBAPEBUSnapshot\@1\@_K\@Z
     */
    MCAPI struct ActorHistory::Snapshot const * getFrame(unsigned __int64) const;
    /**
     * @symbol ??1ActorHistory\@\@QEAA\@XZ
     */
    MCAPI ~ActorHistory();

};
