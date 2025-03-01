#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class TaskGroup;
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
};
