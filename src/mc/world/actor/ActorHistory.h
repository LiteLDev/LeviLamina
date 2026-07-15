#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorHistory();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ActorHistory(uint64 historyWindow);
#endif

    MCAPI void addCorrectionToFrame(::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

#ifdef LL_PLAT_C
    MCAPI void addFrame(::EntityContext& entity, uint64 frame, ::EntityRegistry& registry);
#endif

    MCAPI ~ActorHistory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void prepareEntityForRewindFromCapture(
        ::EntityContext const& fromCapture,
        ::EntityContext const& fromLive,
        ::EntityContext&       toRewind
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(uint64 historyWindow);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
