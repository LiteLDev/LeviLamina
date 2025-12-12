#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
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
        ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityContext>>                             mSnapshotState;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::IMovementCorrection>>> mCorrections;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IReplayableActorInput>>               mCapturedInput;
        ::ll::TypedStorage<1, 1, bool>                                                     mIsCorrection;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64 const>                                             mHistoryWindow;
    ::ll::TypedStorage<8, 40, ::std::deque<::ActorHistory::Snapshot>>                  mSnapshots;
    ::ll::TypedStorage<8, 8, uint64>                                                   mOldestFrame;
    ::ll::TypedStorage<4, 4, ::std::bitset<2>>                                         mPendingCorrections;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::IMovementCorrection>>> mQueuedCorrection;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IReplayableActorInput>>               mNextInput;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addCorrectionToFrame(::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCAPI void queueCorrection(::std::shared_ptr<::IMovementCorrection> correction);
    // NOLINTEND
};
