#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class Player;
struct SubChunkPacketHandler;
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
        ::ll::UntypedStorage<4, 4>  mUnkb8c063;
        ::ll::UntypedStorage<4, 12> mUnkd004a7;
        ::ll::UntypedStorage<8, 16> mUnk1bd87e;
        // NOLINTEND

    public:
        // prevent constructor by default
        SubChunkInsertTaskInfo& operator=(SubChunkInsertTaskInfo const&);
        SubChunkInsertTaskInfo(SubChunkInsertTaskInfo const&);
        SubChunkInsertTaskInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::SubChunkInsertManager::SubChunkInsertTaskInfo&
        operator=(::SubChunkInsertManager::SubChunkInsertTaskInfo&&);

        MCNAPI_C ~SubChunkInsertTaskInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
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
    MCNAPI_C explicit SubChunkInsertManager(::std::function<::Player*()> getPrimaryLocalPlayer);

    MCNAPI_C void _launchSubChunkInsertTasks(::Player* player);

    MCNAPI_C void addSubChunkInsertTask(::std::shared_ptr<::SubChunkPacketHandler> handler);

    MCNAPI_C void tick();

    MCNAPI_C ~SubChunkInsertManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::function<::Player*()> getPrimaryLocalPlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
