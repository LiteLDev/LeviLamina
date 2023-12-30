#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"
#include "mc/entity/utilities/ActorDigestFormat.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/LevelChunkFormat.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/storage/ConsoleChunkBlender.h"

class DBChunkStorage : public ::ChunkSource {
public:
    // prevent constructor by default
    DBChunkStorage& operator=(DBChunkStorage const&);
    DBChunkStorage(DBChunkStorage const&);
    DBChunkStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DBChunkStorage@@UEAA@XZ
    virtual ~DBChunkStorage() = default;

    // vIndex: 1, symbol: ?shutdown@DBChunkStorage@@UEAAXXZ
    virtual void shutdown();

    // vIndex: 2, symbol: ?isShutdownDone@DBChunkStorage@@UEAA_NXZ
    virtual bool isShutdownDone();

    // vIndex: 5, symbol: ?isChunkKnown@DBChunkStorage@@UEAA_NAEBVChunkPos@@@Z
    virtual bool isChunkKnown(class ChunkPos const&);

    // vIndex: 6, symbol: ?isChunkSaved@DBChunkStorage@@UEAA_NAEBVChunkPos@@@Z
    virtual bool isChunkSaved(class ChunkPos const&);

    // vIndex: 9, symbol: ?postProcess@DBChunkStorage@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 10, symbol: ?checkAndReplaceChunk@DBChunkStorage@@UEAAXAEAVChunkViewSource@@AEAVLevelChunk@@@Z
    virtual void checkAndReplaceChunk(class ChunkViewSource& neighborhood, class LevelChunk& lc);

    // vIndex: 11, symbol: ?loadChunk@DBChunkStorage@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 13, symbol: ?saveLiveChunk@DBChunkStorage@@UEAA_NAEAVLevelChunk@@@Z
    virtual bool saveLiveChunk(class LevelChunk& lc);

    // vIndex: 14, symbol: ?writeEntityChunkTransfer@DBChunkStorage@@UEAAXAEAVLevelChunk@@@Z
    virtual void writeEntityChunkTransfer(class LevelChunk&);

    // vIndex: 15, symbol:
    // ?writeEntityChunkTransfersToUnloadedChunk@DBChunkStorage@@UEAAXAEBVChunkKey@@AEBV?$vector@UActorUnloadedChunkTransferEntry@@V?$allocator@UActorUnloadedChunkTransferEntry@@@std@@@std@@@Z
    virtual void
    writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const&, std::vector<struct ActorUnloadedChunkTransferEntry> const&);

    // vIndex: 16, symbol: ?deserializeActorStorageToLevelChunk@DBChunkStorage@@UEAAXAEAVLevelChunk@@@Z
    virtual void deserializeActorStorageToLevelChunk(class LevelChunk&);

    // vIndex: 17, symbol: ?hintDiscardBatchBegin@DBChunkStorage@@UEAAXXZ
    virtual void hintDiscardBatchBegin();

    // vIndex: 18, symbol: ?hintDiscardBatchEnd@DBChunkStorage@@UEAAXXZ
    virtual void hintDiscardBatchEnd();

    // vIndex: 19, symbol:
    // ?acquireDiscarded@DBChunkStorage@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 21, symbol: ?flushPendingDiscardedChunkWrites@DBChunkStorage@@UEAAXXZ
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 22, symbol: ?flushThreadBatch@DBChunkStorage@@UEAAXXZ
    virtual void flushThreadBatch();

    // vIndex: 28, symbol:
    // ?tryGetBlendingDataProvider@DBChunkStorage@@UEAA?AV?$unique_ptr@VBlendingDataProvider@@U?$default_delete@VBlendingDataProvider@@@std@@@std@@XZ
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 29, symbol:
    // ?loadLevelChunkMetaDataDictionary@DBChunkStorage@@UEAA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
    virtual std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 32, symbol: ?chunkPosNeedsBlending@DBChunkStorage@@UEAA_NAEBVChunkPos@@@Z
    virtual bool chunkPosNeedsBlending(class ChunkPos const&);

    // symbol:
    // ??0DBChunkStorage@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEAVDBStorage@@AEAVScheduler@@AEBVExperiments@@@Z
    MCAPI
    DBChunkStorage(std::unique_ptr<class ChunkSource>, class DBStorage&, class Scheduler&, class Experiments const&);

    // symbol:
    // ?_getBlenderMode@DBChunkStorage@@SA?AW4BlenderMode@ConsoleChunkBlender@@AEBVLevelChunk@@AEBVExperiments@@@Z
    MCAPI static ::ConsoleChunkBlender::BlenderMode _getBlenderMode(class LevelChunk const&, class Experiments const&);

    // symbol:
    // ?deserializeActorStorageToString@DBChunkStorage@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEBV23@V?$function@$$A6A_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z@3@@Z
    MCAPI static std::string
    deserializeActorStorageToString(bool, std::string const&, std::function<bool(std::string_view, std::string&)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_cacheSeamlessChunkBlendingData@DBChunkStorage@@AEAA?AU?$pair@_NV?$shared_ptr@VBlendingData@@@std@@@std@@VChunkPos@@_NV?$shared_ptr@VBlendingData@@@3@@Z
    MCAPI std::pair<bool, std::shared_ptr<class BlendingData>>
          _cacheSeamlessChunkBlendingData(class ChunkPos, bool, std::shared_ptr<class BlendingData>);

    // symbol: ?_checkSubChunksUseAbsoluteIndices@DBChunkStorage@@AEBA_NVDBChunkStorageKey@@AEBVLevelChunk@@AEA_N@Z
    MCAPI bool _checkSubChunksUseAbsoluteIndices(class DBChunkStorageKey, class LevelChunk const&, bool&) const;

    // symbol:
    // ?_deserializeIndependentActorStorage@DBChunkStorage@@AEAAXAEAVLevelChunk@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _deserializeIndependentActorStorage(class LevelChunk&, std::string const&);

    // symbol:
    // ?_getChunkNeighbors@DBChunkStorage@@AEAA?AVNeighbors@LevelChunk@@VChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class LevelChunk::Neighbors _getChunkNeighbors(class ChunkPos, DimensionType);

    // symbol:
    // ?_getEntityDigestKey@DBChunkStorage@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI std::string _getEntityDigestKey(std::string_view) const;

    // symbol:
    // ?_getLevelChunkFormat@DBChunkStorage@@AEAA?AV?$optional@W4LevelChunkFormat@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::optional<::LevelChunkFormat> _getLevelChunkFormat(std::string_view, std::string&);

    // symbol: ?_hasChunk@DBChunkStorage@@AEAA_NAEBVDBChunkStorageKey@@@Z
    MCAPI bool _hasChunk(class DBChunkStorageKey const& key);

    // symbol: ?_hasChunkUncached@DBChunkStorage@@AEAA_NAEBVDBChunkStorageKey@@@Z
    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const& key);

    // symbol:
    // ?_levelChunkCanBeUsedForBlending@DBChunkStorage@@AEAA?AU?$pair@_NV?$unique_ptr@UPersistentBlendData@@U?$default_delete@UPersistentBlendData@@@std@@@std@@@std@@AEBVDBChunkStorageKey@@@Z
    MCAPI std::pair<bool, std::unique_ptr<struct PersistentBlendData>>
          _levelChunkCanBeUsedForBlending(class DBChunkStorageKey const&);

    // symbol: ?_loadAndBlendFromDB@DBChunkStorage@@AEAAXAEAVLevelChunk@@0AEAVChunkViewSource@@@Z
    MCAPI void _loadAndBlendFromDB(class LevelChunk&, class LevelChunk&, class ChunkViewSource&);

    // symbol: ?_loadChunkFromDB@DBChunkStorage@@AEAA_NAEAVLevelChunk@@0AEAVChunkViewSource@@@Z
    MCAPI bool _loadChunkFromDB(class LevelChunk&, class LevelChunk&, class ChunkViewSource&);

    // symbol:
    // ?_saveBlendData@DBChunkStorage@@AEBAXAEAVLevelStorageWriteBatch@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@UPersistentBlendData@@@Z
    MCAPI void
    _saveBlendData(class LevelStorageWriteBatch&, std::string_view const&, std::string&, struct PersistentBlendData)
        const;

    // symbol: ?_serializeChunk@DBChunkStorage@@AEAAXAEAVLevelChunk@@AEAVLevelStorageWriteBatch@@_N@Z
    MCAPI void _serializeChunk(class LevelChunk&, class LevelStorageWriteBatch&, bool);

    // symbol:
    // ?_serializeEntities@DBChunkStorage@@AEAAXAEAVLevelChunk@@AEAVLevelStorageWriteBatch@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void _serializeEntities(class LevelChunk&, class LevelStorageWriteBatch&, std::string&, bool);

    // symbol:
    // ?_tryGetBlendingDataForChunk@DBChunkStorage@@AEAA?AU?$pair@_NV?$shared_ptr@VBlendingData@@@std@@@std@@AEBVChunkPos@@@Z
    MCAPI std::pair<bool, std::shared_ptr<class BlendingData>> _tryGetBlendingDataForChunk(class ChunkPos const&);

    // symbol:
    // ?_upgradeActorStorage@DBChunkStorage@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VChunkKey@@AEAV?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI std::string _upgradeActorStorage(class ChunkKey, std::string_view&);

    // symbol:
    // ?_writeActorDigest@DBChunkStorage@@AEAAXAEAVLevelStorageWriteBatch@@AEBVChunkKey@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _writeActorDigest(class LevelStorageWriteBatch&, class ChunkKey const&, std::string const&);

    // symbol:
    // ?_writeActorDigestFormatVersion@DBChunkStorage@@AEAAXAEAVLevelStorageWriteBatch@@AEBVChunkKey@@W4ActorDigestFormat@@@Z
    MCAPI void
    _writeActorDigestFormatVersion(class LevelStorageWriteBatch&, class ChunkKey const&, ::ActorDigestFormat);

    // symbol: ?_writeDiscardChunksBatch@DBChunkStorage@@AEAAXXZ
    MCAPI void _writeDiscardChunksBatch();

    // symbol:
    // ?_deserializeChunkActorStorageKeys@DBChunkStorage@@CA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVIDataInput@@@Z
    MCAPI static std::vector<std::string> _deserializeChunkActorStorageKeys(class IDataInput&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?threadBatch@DBChunkStorage@@0V?$ThreadLocalObject@VLevelStorageWriteBatch@@V?$allocator@VLevelStorageWriteBatch@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch> threadBatch;

    // symbol:
    // ?threadBuffer@DBChunkStorage@@0V?$ThreadLocalObject@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string> threadBuffer;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $threadBatch() { return threadBatch; }

    static auto& $threadBuffer() { return threadBuffer; }

    // NOLINTEND
};
