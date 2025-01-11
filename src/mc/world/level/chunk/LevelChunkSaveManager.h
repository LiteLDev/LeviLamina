#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class Dimension;
class DimensionManager;
class GameplayUserManager;
class ILevelChunkEventManagerConnector;
class ILevelChunkSaveManagerProxy;
class LevelChunk;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LevelChunkSaveManager {
public:
    // LevelChunkSaveManager inner types declare
    // clang-format off
    class CompareLevelChunkQueuedSavingElement;
    struct LevelChunkQueuedSavingElement;
    // clang-format on

    // LevelChunkSaveManager inner types define
    struct LevelChunkQueuedSavingElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>      mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
        // NOLINTEND
    };

    class CompareLevelChunkQueuedSavingElement {};

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
    MCAPI LevelChunkSaveManager(
        ::std::unique_ptr<::ILevelChunkSaveManagerProxy>     levelChunkSaverProxy,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager
    );

    MCAPI void _findRandomChunkToSave();

    MCAPI void _onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk, int closestPlayerDistanceSquared);

    MCAPI bool _shouldDoSave() const;

    MCFOLD bool isChunkSaveInProgress();

    MCAPI void registerForLevelChunkManagerEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void startLeaveGame();

    MCAPI void trySaveChunks();

    MCAPI ~LevelChunkSaveManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::ILevelChunkSaveManagerProxy>     levelChunkSaverProxy,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
