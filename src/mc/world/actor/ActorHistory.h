#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
struct IMovementCorrection;
struct IReplayableActorInput;
// clang-format on

class ActorHistory {
public:
    // ActorHistory inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on

    // ActorHistory inner types define
    struct Snapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkbab8be;
        ::ll::UntypedStorage<8, 24> mUnk4712e3;
        ::ll::UntypedStorage<8, 24> mUnkb40e17;
        ::ll::UntypedStorage<1, 1>  mUnked986d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const&);
        Snapshot(Snapshot const&);
        Snapshot();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Snapshot();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb333c9;
    ::ll::UntypedStorage<8, 40> mUnkb07939;
    ::ll::UntypedStorage<8, 8>  mUnkf30cca;
    ::ll::UntypedStorage<1, 1>  mUnk6f3591;
    ::ll::UntypedStorage<8, 24> mUnkb8d0de;
    ::ll::UntypedStorage<8, 24> mUnkf6138a;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHistory& operator=(ActorHistory const&);
    ActorHistory(ActorHistory const&);
    ActorHistory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorHistory(uint64 historyWindow);

    MCAPI void addCorrectionToFrame(::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCAPI bool addFrame(::EntityContext& entity, uint64 frame, ::EntityRegistry& registry);

    MCAPI void addInputToFrame(::std::shared_ptr<::IReplayableActorInput> input, uint64 frame);

    MCAPI void addInputToFrontOfFrame(::std::shared_ptr<::IReplayableActorInput> input, uint64 frame);

    MCAPI void clearFrames();

    MCAPI ::ActorHistory::Snapshot const* getFrame(uint64 frame) const;

    MCFOLD uint64 getOldestFrame() const;

    MCAPI void queueCorrection(::std::shared_ptr<::IMovementCorrection> correction);

    MCAPI void queueInputSimulation(::std::unique_ptr<::IReplayableActorInput> input);

    MCAPI void setSnapshotAsCorrection(uint64 frame);

    MCAPI ~ActorHistory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 historyWindow);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
