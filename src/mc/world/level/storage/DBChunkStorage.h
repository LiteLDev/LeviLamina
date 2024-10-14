#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/platform/threading/ThreadLocalObject.h"
#include "mc/world/level/chunk/ActorDigestFormat.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/storage/ConsoleChunkBlender.h"

class DBChunkStorage : public ::ChunkSource {
public:
    // prevent constructor by default
    DBChunkStorage& operator=(DBChunkStorage const&);
    DBChunkStorage(DBChunkStorage const&);
    DBChunkStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DBChunkStorage() = default;

    // vIndex: 1
    virtual void shutdown();

    // vIndex: 2
    virtual bool isShutdownDone();

    // vIndex: 5
    virtual bool isChunkKnown(class ChunkPos const& chunkPos);

    // vIndex: 6
    virtual bool isChunkSaved(class ChunkPos const& chunkPos);

    // vIndex: 9
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 10
    virtual void checkAndReplaceChunk(class ChunkViewSource& neighborhood, class LevelChunk& lc);

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 13
    virtual bool saveLiveChunk(class LevelChunk& lc);

    // vIndex: 14
    virtual void writeEntityChunkTransfer(class LevelChunk& lc);

    // vIndex: 15
    virtual void writeEntityChunkTransfersToUnloadedChunk(
        class ChunkKey const&                                      chunkKey,
        std::vector<struct ActorUnloadedChunkTransferEntry> const& transfers
    );

    // vIndex: 16
    virtual void deserializeActorStorageToLevelChunk(class LevelChunk& levelChunk);

    // vIndex: 17
    virtual void hintDiscardBatchBegin();

    // vIndex: 18
    virtual void hintDiscardBatchEnd();

    // vIndex: 19
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 21
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 22
    virtual void flushThreadBatch();

    // vIndex: 28
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 29
    virtual std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 32
    virtual bool chunkPosNeedsBlending(class ChunkPos const& cp);

    MCAPI DBChunkStorage(
        std::unique_ptr<class ChunkSource> parent,
        class DBStorage&                   storage,
        class Scheduler&                   scheduler,
        class Experiments const&           experiments
    );

    MCAPI static ::ConsoleChunkBlender::BlenderMode
    _getBlenderMode(class LevelChunk const& lc, class Experiments const& experiments);

    MCAPI static std::string deserializeActorStorageToString(
        bool                                                hasActorDigestVersionTag,
        std::string const&                                  storageKeyDigestBuffer,
        std::function<bool(std::string_view, std::string&)> loadDataCallback
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::pair<bool, std::shared_ptr<class BlendingData>> _cacheSeamlessChunkBlendingData(
        class ChunkPos                      chunkPos,
        bool                                isCompleted,
        std::shared_ptr<class BlendingData> blendingData
    );

    MCAPI bool _checkSubChunksUseAbsoluteIndices(
        class DBChunkStorageKey key,
        class LevelChunk const& lc,
        bool&                   flatworldsNeedFixup
    ) const;

    MCAPI void _deserializeIndependentActorStorage(class LevelChunk& lc, std::string const& storageKeyDigestBuffer);

    MCAPI class LevelChunk::Neighbors _getChunkNeighbors(class ChunkPos lc, DimensionType dimensionType);

    MCAPI std::optional<::LevelChunkFormat> _getLevelChunkFormat(std::string_view prefix, std::string& buffer);

    MCAPI bool _hasChunk(class DBChunkStorageKey const& key);

    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const& key);

    MCAPI std::pair<bool, std::unique_ptr<struct PersistentBlendData>>
          _levelChunkCanBeUsedForBlending(class DBChunkStorageKey const& lcKey);

    MCAPI void
    _loadAndBlendFromDB(class LevelChunk& lc, class LevelChunk& generatedChunk, class ChunkViewSource& neighborhood);

    MCAPI bool
    _loadChunkFromDB(class LevelChunk& lc, class LevelChunk& generatedChunk, class ChunkViewSource& neighborhood);

    MCAPI void _saveBlendData(
        class LevelStorageWriteBatch& batch,
        std::string_view const&       prefix,
        std::string&                  buffer,
        struct PersistentBlendData    data
    ) const;

    MCAPI void
    _serializeChunk(class LevelChunk& lc, class LevelStorageWriteBatch& batch, bool markEntitiesProcesedOnChunkDiscard);

    MCAPI void _serializeEntities(
        class LevelChunk&             lc,
        class LevelStorageWriteBatch& batch,
        std::string&                  buffer,
        bool                          markEntitiesProcesedOnChunkDiscard
    );

    MCAPI std::pair<bool, std::shared_ptr<class BlendingData>>
          _tryGetBlendingDataForChunk(class ChunkPos const& checkPosition);

    MCAPI std::string _upgradeActorStorage(class ChunkKey chunkKey, std::string_view& legacyActorData);

    MCAPI void _writeActorDigest(
        class LevelStorageWriteBatch& batch,
        class ChunkKey const&         chunkKey,
        std::string const&            digestBuffer
    );

    MCAPI void _writeActorDigestFormatVersion(
        class LevelStorageWriteBatch& batch,
        class ChunkKey const&         chunkKey,
        ::ActorDigestFormat           formatVersion
    );

    MCAPI void _writeDiscardChunksBatch();

    MCAPI static std::vector<std::string> _deserializeChunkActorStorageKeys(class IDataInput& digestStream);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void acquireDiscarded$(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    MCAPI void checkAndReplaceChunk$(class ChunkViewSource& neighborhood, class LevelChunk& lc);

    MCAPI bool chunkPosNeedsBlending$(class ChunkPos const& cp);

    MCAPI void deserializeActorStorageToLevelChunk$(class LevelChunk& levelChunk);

    MCAPI void flushPendingDiscardedChunkWrites$();

    MCAPI void flushThreadBatch$();

    MCAPI void hintDiscardBatchBegin$();

    MCAPI void hintDiscardBatchEnd$();

    MCAPI bool isChunkKnown$(class ChunkPos const& chunkPos);

    MCAPI bool isChunkSaved$(class ChunkPos const& chunkPos);

    MCAPI bool isShutdownDone$();

    MCAPI void loadChunk$(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary$();

    MCAPI bool postProcess$(class ChunkViewSource& neighborhood);

    MCAPI bool saveLiveChunk$(class LevelChunk& lc);

    MCAPI void shutdown$();

    MCAPI std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider$();

    MCAPI void writeEntityChunkTransfer$(class LevelChunk& lc);

    MCAPI void writeEntityChunkTransfersToUnloadedChunk$(
        class ChunkKey const&                                      chunkKey,
        std::vector<struct ActorUnloadedChunkTransferEntry> const& transfers
    );

    MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch>& threadBatch();

    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string>& threadBuffer();

    // NOLINTEND
};
