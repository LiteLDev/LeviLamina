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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct ActorHistory::Snapshot&&);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ActorHistory& operator=(ActorHistory const&);
    ActorHistory(ActorHistory const&);
    ActorHistory();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorHistory(uint64 historyWindow);

    MCAPI void addCorrectionToFrame(std::shared_ptr<struct IMovementCorrection> correction, uint64 frame);

    MCAPI bool addFrame(class EntityContext& entity, uint64 frame, class EntityRegistry& registry);

    MCAPI void addInputToFrontOfFrame(std::shared_ptr<struct IReplayableActorInput> input, uint64 frame);

    MCAPI void clearFrames();

    MCAPI struct ActorHistory::Snapshot const* getFrame(uint64 frame) const;

    MCAPI uint64 getOldestFrame() const;

    MCAPI void queueCorrection(std::shared_ptr<struct IMovementCorrection> correction);

    MCAPI void queueInputSimulation(std::unique_ptr<struct IReplayableActorInput> input);

    MCAPI void setSnapshotAsCorrection(uint64 frame);

    MCAPI ~ActorHistory();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(uint64 historyWindow);

    MCAPI void dtor$();

    // NOLINTEND
};
