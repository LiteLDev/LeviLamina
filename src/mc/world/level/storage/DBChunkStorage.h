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
class BaseGameVersion;
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
    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk) /*override*/;

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
    MCNAPI DBChunkStorage(
        ::std::unique_ptr<::ChunkSource> parent,
        ::DBStorage&                     storage,
        ::Scheduler&                     scheduler,
        ::Experiments const&             experiments
    );

    MCNAPI void _batchPut(
        ::LevelStorageWriteBatch& batch,
        ::std::string const&      key,
        ::std::string&&           buffer,
        ::DBHelpers::Category     category,
        ::std::string_view        reason
    );

    MCNAPI ::std::pair<bool, ::std::shared_ptr<::BlendingData>> _cacheSeamlessChunkBlendingData(
        ::ChunkPos                        chunkPos,
        bool                              isCompleted,
        ::std::shared_ptr<::BlendingData> blendingData
    );

    MCNAPI bool
    _checkSubChunksUseAbsoluteIndices(::DBChunkStorageKey key, ::LevelChunk const& lc, bool& flatworldsNeedFixup) const;

    MCNAPI void _deserializeIndependentActorStorage(::LevelChunk& lc, ::std::string const& storageKeyDigestBuffer);

    MCNAPI ::std::optional<::LevelChunkFormat> _getLevelChunkFormat(::std::string_view prefix, ::std::string& buffer);

    MCNAPI bool _hasChunk(::DBChunkStorageKey const& key);

    MCNAPI bool _hasChunkUncached(::DBChunkStorageKey const& key);

    MCNAPI ::std::pair<bool, ::std::unique_ptr<::PersistentBlendData>>
    _levelChunkCanBeUsedForBlending(::DBChunkStorageKey const& lcKey);

    MCNAPI void _loadAndBlendFromDB(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::ChunkViewSource& neighborhood);

    MCNAPI bool _loadChunkFromDB(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::ChunkViewSource& neighborhood);

    MCNAPI void _saveBlendData(
        ::LevelStorageWriteBatch& batch,
        ::std::string_view        prefix,
        ::std::string&            buffer,
        ::PersistentBlendData     data
    ) const;

    MCNAPI void
    _serializeChunk(::LevelChunk& lc, ::LevelStorageWriteBatch& batch, bool markEntitiesProcesedOnChunkDiscard);

    MCNAPI void _serializeEntities(
        ::LevelChunk&             lc,
        ::LevelStorageWriteBatch& batch,
        ::std::string&            buffer,
        bool                      markEntitiesProcesedOnChunkDiscard
    );

    MCNAPI ::std::pair<bool, ::std::shared_ptr<::BlendingData>>
    _tryGetBlendingDataForChunk(::ChunkPos const& checkPosition);

    MCNAPI ::std::string _upgradeActorStorage(::ChunkKey chunkKey, ::std::string_view& legacyActorData);

    MCNAPI void
    _writeActorDigest(::LevelStorageWriteBatch& batch, ::ChunkKey const& chunkKey, ::std::string const& digestBuffer);

    MCNAPI void _writeDiscardChunksBatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::string> _deserializeChunkActorStorageKeys(::IDataInput& digestStream);

    MCNAPI static ::ConsoleChunkBlender::BlenderMode
    _getBlenderMode(::LevelChunk const& lc, ::Experiments const& experiments);

    MCNAPI static ::std::string deserializeActorStorageToString(
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
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ChunkSource> parent,
        ::DBStorage&                     storage,
        ::Scheduler&                     scheduler,
        ::Experiments const&             experiments
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $shutdown();

    MCNAPI bool $isShutdownDone();

    MCNAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCNAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCNAPI bool $isChunkSaved(::ChunkPos const& chunkPos);

    MCNAPI bool $postProcess(::ChunkViewSource& neighborhood);

    MCNAPI void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    MCNAPI bool $saveLiveChunk(::LevelChunk& lc);

    MCNAPI void $writeEntityChunkTransfer(::LevelChunk& levelChunk);

    MCNAPI void $writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    MCNAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCNAPI void $hintDiscardBatchBegin();

    MCNAPI void $hintDiscardBatchEnd();

    MCNAPI void $flushPendingDiscardedChunkWrites();

    MCNAPI void $flushThreadBatch();

    MCNAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();

    MCNAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCNAPI void $deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
