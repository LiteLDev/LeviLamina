#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/storage/DBChunkStorageKey.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlendingData;
class BlendingDataProvider;
class ChunkKey;
class ChunkViewSource;
class DBStorage;
class Experiments;
class LevelChunk;
class LevelChunkMetaDataDictionary;
class LevelStorageWriteBatch;
class Scheduler;
class TaskGroup;
struct ActorUnloadedChunkTransferEntry;
struct ChunkDeletionMetadata;
struct LevelChunkFinalDeleter;
// clang-format on

class DBChunkStorage : public ::ChunkSource {
public:
    // DBChunkStorage inner types declare
    // clang-format off
    struct PreCavesAndCliffsMetaData;
    // clang-format on

    // DBChunkStorage inner types define
    enum class ChunkCacheStatus : int {
        Missing   = 0,
        Available = 1,
        DontCache = 2,
    };

    struct PreCavesAndCliffsMetaData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk5cb409;
        ::ll::UntypedStorage<4, 4> mUnk75181d;
        // NOLINTEND

    public:
        // prevent constructor by default
        PreCavesAndCliffsMetaData& operator=(PreCavesAndCliffsMetaData const&);
        PreCavesAndCliffsMetaData(PreCavesAndCliffsMetaData const&);
        PreCavesAndCliffsMetaData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DBChunkStorageKey, ::DBChunkStorage::ChunkCacheStatus>>
                                                  mHasChunkCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mHasChunkCacheSharedMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::pair<bool, ::std::shared_ptr<::BlendingData>>>>
                                                                                          mChunkBlendingDataCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                         mChunkBlendingDataSharedMutex;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                         mAttenuatorSharedMutex;
    ::ll::TypedStorage<8, 8, ::DBStorage&>                                                mStorage;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelStorageWriteBatch>>> mBufferPool;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter>>> mDiscardBatch;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>> mLiveChunksBeingSaved;
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter>>>
                                                             mDiscardedWhileLiveSaved;
    ::ll::TypedStorage<1, 1, bool>                           mBatch;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>             mCurrentLevelVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    DBChunkStorage& operator=(DBChunkStorage const&);
    DBChunkStorage(DBChunkStorage const&);
    DBChunkStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DBChunkStorage() /*override*/ = default;

    virtual void shutdown() /*override*/;

    virtual bool isShutdownDone() /*override*/;

    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    virtual bool isChunkSaved(::ChunkPos const& chunkPos) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&) /*override*/;

    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&) /*override*/;

    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&) /*override*/;

    virtual void deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    ) /*override*/;

    virtual void deleteStoredChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    ) /*override*/;

    virtual bool saveLiveChunk(::LevelChunk& lc) /*override*/;

    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk) /*override*/;

    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    ) /*override*/;

    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    virtual void hintDiscardBatchBegin() /*override*/;

    virtual void hintDiscardBatchEnd() /*override*/;

    virtual void flushPendingDiscardedChunkWrites() /*override*/;

    virtual void flushThreadBatch() /*override*/;

    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider() /*override*/;

    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary() /*override*/;

    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk) /*override*/;

    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DBChunkStorage(
        ::std::unique_ptr<::ChunkSource> parent,
        ::DBStorage&                     storage,
        ::Scheduler&                     scheduler,
        ::Experiments const&             experiments
    );

    MCAPI void freeCaches();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::ChunkSource> parent,
        ::DBStorage&                     storage,
        ::Scheduler&                     scheduler,
        ::Experiments const&             experiments
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
