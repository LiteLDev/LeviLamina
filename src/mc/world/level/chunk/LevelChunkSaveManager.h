#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class DimensionManager;
class GameplayUserManager;
class ILevelChunkEventManagerConnector;
class ILevelChunkSaveManagerProxy;
class LevelChunk;
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
        ::ll::UntypedStorage<4, 4> mUnk246613;
        ::ll::UntypedStorage<8, 8> mUnkc50f27;
        ::ll::UntypedStorage<4, 4> mUnk200da2;
        // NOLINTEND

    public:
        // prevent constructor by default
        LevelChunkQueuedSavingElement& operator=(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement();
    };

    class CompareLevelChunkQueuedSavingElement {
    public:
        // prevent constructor by default
        CompareLevelChunkQueuedSavingElement& operator=(CompareLevelChunkQueuedSavingElement const&);
        CompareLevelChunkQueuedSavingElement(CompareLevelChunkQueuedSavingElement const&);
        CompareLevelChunkQueuedSavingElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd57538;
    ::ll::UntypedStorage<8, 32> mUnk950a43;
    ::ll::UntypedStorage<1, 1>  mUnk11735a;
    ::ll::UntypedStorage<8, 24> mUnk684d99;
    ::ll::UntypedStorage<8, 24> mUnk7a90a3;
    ::ll::UntypedStorage<8, 16> mUnkcb48d3;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkSaveManager& operator=(LevelChunkSaveManager const&);
    LevelChunkSaveManager(LevelChunkSaveManager const&);
    LevelChunkSaveManager();

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

    MCAPI bool isChunkSaveInProgress();

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
