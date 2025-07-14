#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
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

    enum class ChunkCacheStatus : int {
        Missing   = 0,
        Available = 1,
        DontCache = 2,
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
    // vIndex: 0
    virtual ~DBChunkStorage() /*override*/;

    // vIndex: 1
    virtual void shutdown() /*override*/;

    // vIndex: 2
    virtual bool isShutdownDone() /*override*/;

    // vIndex: 11
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 5
    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    // vIndex: 6
    virtual bool isChunkSaved(::ChunkPos const& chunkPos) /*override*/;

    // vIndex: 9
    virtual bool postProcess(::ChunkViewSource& neighborhood) /*override*/;

    // vIndex: 10
    virtual void checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc) /*override*/;

    // vIndex: 14
    virtual bool saveLiveChunk(::LevelChunk& lc) /*override*/;

    // vIndex: 15
    virtual void writeEntityChunkTransfer(::LevelChunk& lc) /*override*/;

    // vIndex: 16
    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    ) /*override*/;

    // vIndex: 20
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    // vIndex: 18
    virtual void hintDiscardBatchBegin() /*override*/;

    // vIndex: 19
    virtual void hintDiscardBatchEnd() /*override*/;

    // vIndex: 22
    virtual void flushPendingDiscardedChunkWrites() /*override*/;

    // vIndex: 23
    virtual void flushThreadBatch() /*override*/;

    // vIndex: 29
    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider() /*override*/;

    // vIndex: 30
    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary() /*override*/;

    // vIndex: 17
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk) /*override*/;

    // vIndex: 33
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

    MCAPI ::std::optional<::LevelChunkFormat> _getLevelChunkFormat(::std::string_view prefix, ::std::string& buffer);

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

    MCAPI bool $postProcess(::ChunkViewSource& neighborhood);

    MCAPI void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    MCAPI bool $saveLiveChunk(::LevelChunk& lc);

    MCAPI void $writeEntityChunkTransfer(::LevelChunk& lc);

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
