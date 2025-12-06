#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class DimensionManager;
class LevelChunk;
struct GameplayUserManager;
struct ILevelChunkEventManagerConnector;
struct ILevelChunkSaveManagerProxy;
// clang-format on

class LevelChunkSaveManager {
public:
    // LevelChunkSaveManager inner types declare
    // clang-format off
    struct CompareLevelChunkQueuedSavingElement;
    struct LevelChunkQueuedSavingElement;
    // clang-format on

    // LevelChunkSaveManager inner types define
    struct LevelChunkQueuedSavingElement {};

    struct CompareLevelChunkQueuedSavingElement {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelChunkSaveManagerProxy>> const>
        mLevelChunkSaveManagerProxy;
    ::ll::TypedStorage<
        8,
        32,
        ::std::priority_queue<
            ::LevelChunkSaveManager::LevelChunkQueuedSavingElement,
            ::std::vector<::LevelChunkSaveManager::LevelChunkQueuedSavingElement>,
            ::LevelChunkSaveManager::CompareLevelChunkQueuedSavingElement>>
                                                                                          mLevelChunkSaveQueue;
    ::ll::TypedStorage<1, 1, bool>                                                        mChunkSaveInProgress;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnChunkLoadedSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _findRandomChunkToSave();

    MCAPI void _onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk, int closestPlayerDistanceSquared);

    MCAPI void registerForLevelChunkManagerEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI ~LevelChunkSaveManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
