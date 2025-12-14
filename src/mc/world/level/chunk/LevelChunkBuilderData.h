#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

class LevelChunkBuilderData {
public:
    // LevelChunkBuilderData inner types declare
    // clang-format off
    struct ChunkReadyForProcessingElement;
    // clang-format on

    // LevelChunkBuilderData inner types define
    struct ChunkReadyForProcessingElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::pair<::ChunkPos, ::ChunkState>> mChunkPosAndExpectedState;
        ::ll::TypedStorage<4, 4, int>                                    mPriority;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SpinLockImpl> mChunkGenerationGridMapSpinLock;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ChunkPos, ::std::shared_ptr<::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>>>>
                                                                                    mChunkGenerationGridMap;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                       mChunksToAddToProcessingSpinLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ChunkPos, ::ChunkState>>> mChunksToAddToProcessing;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                       mChunksReadyForProcessingSpinLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::pair<::ChunkPos, ::ChunkState>>> mChunksReadyForProcessing;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkBuilderData::ChunkReadyForProcessingElement>> mChunkSortVector;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mChunkGenerationTasksInFlight;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>    mSpawnTasksLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunkBuilderData();

    MCAPI ~LevelChunkBuilderData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
