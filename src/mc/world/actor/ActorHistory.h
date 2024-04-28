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
        Snapshot& operator=(Snapshot const&);
        Snapshot(Snapshot const&);
        Snapshot();

    public:
        // NOLINTBEGIN
        // symbol: ??0Snapshot@ActorHistory@@QEAA@$$QEAU01@@Z
        MCAPI Snapshot(struct ActorHistory::Snapshot&&);

        // symbol: ??1Snapshot@ActorHistory@@QEAA@XZ
        MCAPI ~Snapshot();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ActorHistory& operator=(ActorHistory const&);
    ActorHistory(ActorHistory const&);
    ActorHistory();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorHistory@@QEAA@_K@Z
    MCAPI explicit ActorHistory(uint64);

    // symbol: ?addCorrectionToFrame@ActorHistory@@QEAAXV?$shared_ptr@UIMovementCorrection@@@std@@_K@Z
    MCAPI void addCorrectionToFrame(std::shared_ptr<struct IMovementCorrection>, uint64);

    // symbol: ?addFrame@ActorHistory@@QEAA_NAEAVEntityContext@@_KAEAVEntityRegistry@@@Z
    MCAPI bool addFrame(class EntityContext&, uint64, class EntityRegistry&);

    // symbol: ?addInputToFrontOfFrame@ActorHistory@@QEAAXV?$shared_ptr@UIReplayableActorInput@@@std@@_K@Z
    MCAPI void addInputToFrontOfFrame(std::shared_ptr<struct IReplayableActorInput>, uint64);

    // symbol: ?clearFrames@ActorHistory@@QEAAXXZ
    MCAPI void clearFrames();

    // symbol: ?getFrame@ActorHistory@@QEBAPEBUSnapshot@1@_K@Z
    MCAPI struct ActorHistory::Snapshot const* getFrame(uint64 frame) const;

    // symbol: ?getOldestFrame@ActorHistory@@QEBA_KXZ
    MCAPI uint64 getOldestFrame() const;

    // symbol: ?queueCorrection@ActorHistory@@QEAAXV?$shared_ptr@UIMovementCorrection@@@std@@@Z
    MCAPI void queueCorrection(std::shared_ptr<struct IMovementCorrection>);

    // symbol:
    // ?queueInputSimulation@ActorHistory@@QEAAXV?$unique_ptr@UIReplayableActorInput@@U?$default_delete@UIReplayableActorInput@@@std@@@std@@@Z
    MCAPI void queueInputSimulation(std::unique_ptr<struct IReplayableActorInput>);

    // symbol: ?setSnapshotAsCorrection@ActorHistory@@QEAAX_K@Z
    MCAPI void setSnapshotAsCorrection(uint64);

    // symbol: ??1ActorHistory@@QEAA@XZ
    MCAPI ~ActorHistory();

    // symbol: ?copyEntityState@ActorHistory@@SAXAEBVEntityContext@@AEAV2@_N@Z
    MCAPI static void copyEntityState(class EntityContext const&, class EntityContext&, bool);

    // NOLINTEND
};
