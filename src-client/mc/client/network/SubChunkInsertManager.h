#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class Player;
class SubChunkPacketHandler;
// clang-format on

class SubChunkInsertManager {
public:
    // SubChunkInsertManager inner types declare
    // clang-format off
    struct SubChunkInsertTaskInfo;
    // clang-format on

    // SubChunkInsertManager inner types define
    struct SubChunkInsertTaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                         mDistanceToPlayerSq;
        ::ll::TypedStorage<4, 12, ::SubChunkPos>                              mPosition;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SubChunkPacketHandler>> mHandler;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkInsertManager::SubChunkInsertTaskInfo>> mQueuedSubChunkTasks;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                   mTaskGroup;
    ::ll::TypedStorage<8, 8, uint64>                                                          mMaxInFlightTasksFloor;
    ::ll::TypedStorage<8, 8, uint64>                                                          mMaxInFlightTasks;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsLeavingGame;
    ::ll::TypedStorage<8, 64, ::std::function<::Player*()>>                                   mGetPrimaryLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkInsertManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SubChunkInsertManager(::std::function<::Player*()> getPrimaryLocalPlayer);

    MCAPI void addSubChunkInsertTask(::std::shared_ptr<::SubChunkPacketHandler> handler);

    MCAPI void tick();

    MCAPI ~SubChunkInsertManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<::Player*()> getPrimaryLocalPlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
