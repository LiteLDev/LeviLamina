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
        MCAPI Snapshot(struct ActorHistory::Snapshot&&);

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
    MCAPI explicit ActorHistory(uint64);

    MCAPI void addCorrectionToFrame(std::shared_ptr<struct IMovementCorrection>, uint64);

    MCAPI bool addFrame(class EntityContext&, uint64, class EntityRegistry&);

    MCAPI void addInputToFrontOfFrame(std::shared_ptr<struct IReplayableActorInput>, uint64);

    MCAPI void clearFrames();

    MCAPI struct ActorHistory::Snapshot const* getFrame(uint64 frame) const;

    MCAPI uint64 getOldestFrame() const;

    MCAPI void queueCorrection(std::shared_ptr<struct IMovementCorrection>);

    MCAPI void queueInputSimulation(std::unique_ptr<struct IReplayableActorInput>);

    MCAPI void setSnapshotAsCorrection(uint64);

    MCAPI ~ActorHistory();

    // NOLINTEND
};
