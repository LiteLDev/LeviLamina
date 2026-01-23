#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ActorDigestFormat.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/storage/ConsoleChunkBlender.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class BlendingData;
class BlendingDataProvider;
class ChunkKey;
class ChunkViewSource;
class DBChunkStorageKey;
class DBStorage;
class Experiments;
class IDataInput;
class LevelChunk;
class LevelChunkMetaDataDictionary;
class LevelStorageWriteBatch;
class Scheduler;
class TaskGroup;
struct ActorUnloadedChunkTransferEntry;
struct LevelChunkFinalDeleter;
struct PersistentBlendData;
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
    virtual ~DBChunkStorage() /*override*/;

    virtual void shutdown() /*override*/;

    virtual bool isShutdownDone() /*override*/;

    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    virtual bool isChunkSaved(::ChunkPos const& chunkPos) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;

    virtual void checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc) /*override*/;

    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& lc) /*override*/;

    virtual void neighborAwareChunkUpgrade(::LevelChunk& levelChunk, ::ChunkViewSource& neighborhood) /*override*/;

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

    MCAPI void _batchDelete(
        ::LevelStorageWriteBatch& batch,
        ::std::string const&      key,
        ::DBHelpers::Category     category,
        ::std::string_view        reason
    );

    MCAPI void _batchPut(
        ::LevelStorageWriteBatch& batch,
        ::std::string const&      key,
        ::std::string&&           buffer,
        ::DBHelpers::Category     category,
        ::std::string_view        reason
    );

    MCAPI ::std::pair<bool, ::std::shared_ptr<::BlendingData>> _cacheSeamlessChunkBlendingData(
        ::ChunkPos                        chunkPos,
        bool                              isCompleted,
        ::std::shared_ptr<::BlendingData> blendingData
    );

    MCAPI bool
    _checkSubChunksUseAbsoluteIndices(::DBChunkStorageKey key, ::LevelChunk const& lc, bool& flatworldsNeedFixup) const;

    MCAPI void _deserializeIndependentActorStorage(::LevelChunk& lc, ::std::string const& storageKeyDigestBuffer);

    MCAPI bool _hasChunk(::DBChunkStorageKey const& key);

    MCAPI bool _hasChunkUncached(::DBChunkStorageKey const& key);

    MCAPI ::std::pair<bool, ::std::unique_ptr<::PersistentBlendData>>
    _levelChunkCanBeUsedForBlending(::DBChunkStorageKey const& lcKey);

    MCAPI void _loadAndBlendFromDB(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::ChunkViewSource& neighborhood);

    MCAPI bool _loadChunkFromDB(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::ChunkViewSource& neighborhood);

    MCAPI void _saveBlendData(
        ::LevelStorageWriteBatch& batch,
        ::std::string_view        prefix,
        ::std::string&            buffer,
        ::PersistentBlendData     data
    ) const;

    MCAPI void
    _serializeChunk(::LevelChunk& lc, ::LevelStorageWriteBatch& batch, bool markEntitiesProcesedOnChunkDiscard);

    MCAPI void _serializeEntities(
        ::LevelChunk&             lc,
        ::LevelStorageWriteBatch& batch,
        ::std::string&            buffer,
        bool                      markEntitiesProcesedOnChunkDiscard
    );

    MCAPI ::std::pair<bool, ::std::shared_ptr<::BlendingData>>
    _tryGetBlendingDataForChunk(::ChunkPos const& checkPosition);

    MCAPI ::std::string _upgradeActorStorage(::ChunkKey chunkKey, ::std::string_view& legacyActorData);

    MCAPI void
    _writeActorDigest(::LevelStorageWriteBatch& batch, ::ChunkKey const& chunkKey, ::std::string const& digestBuffer);

    MCAPI void _writeActorDigestFormatVersion(
        ::LevelStorageWriteBatch& batch,
        ::ChunkKey const&         chunkKey,
        ::ActorDigestFormat       formatVersion
    );

    MCAPI void _writeDiscardChunksBatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string> _deserializeChunkActorStorageKeys(::IDataInput& digestStream);

    MCAPI static ::ConsoleChunkBlender::BlenderMode
    _getBlenderMode(::LevelChunk const& lc, ::Experiments const& experiments);

    MCAPI static ::std::string deserializeActorStorageToString(
        bool                                                      hasActorDigestVersionTag,
        ::std::string const&                                      storageKeyDigestBuffer,
        ::std::function<bool(::std::string_view, ::std::string&)> loadDataCallback
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::LevelStorageWriteBatch& threadBatch();

    MCAPI static ::std::string& threadBuffer();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $shutdown();

    MCAPI bool $isShutdownDone();

    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCFOLD bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCFOLD bool $isChunkSaved(::ChunkPos const& chunkPos);

    MCAPI bool $structurePostProcessChunk(::ChunkViewSource& neighborhood);

    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);

    MCAPI void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    MCAPI bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& lc);

    MCAPI void $neighborAwareChunkUpgrade(::LevelChunk& levelChunk, ::ChunkViewSource& neighborhood);

    MCAPI bool $saveLiveChunk(::LevelChunk& lc);

    MCAPI void $writeEntityChunkTransfer(::LevelChunk& levelChunk);

    MCAPI void $writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCAPI void $hintDiscardBatchBegin();

    MCAPI void $hintDiscardBatchEnd();

    MCAPI void $flushPendingDiscardedChunkWrites();

    MCAPI void $flushThreadBatch();

    MCAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();

    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCAPI void $deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
