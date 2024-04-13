#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/data/GridArea.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/world/level/LevelChunkGridAreaElement.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/ChunkState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Level;
class LevelChunkBuilderData;
class Dimension;

class ChunkSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource inner types define
    enum class LoadMode : int {
        None     = 0x0,
        Deferred = 0x1,
    };

    /*These member variables were obtained by analyzing BDS 1.20.61 using IDA.*/
    int                          mChunkSide;             // this+0x18
    Level*                       mLevel;                 // this+0x20
    Dimension*                   mDimension;             // this+0x28
    ChunkSource*                 mParent;                // this+0x30
    std::unique_ptr<ChunkSource> mOwnedParent;           // this+0x38
    LevelChunkBuilderData*       mLevelChunkBuilderData; // this+0x40
    std::atomic_bool             mShuttingDown;          // this+0x48
    char                         filler[32];             // the other four member variables

    // uchar filler[0x70 - sizeof(Bedrock::EnableNonOwnerReferences)];

public:
    // prevent constructor by default
    ChunkSource& operator=(ChunkSource const&);
    ChunkSource(ChunkSource const&);
    ChunkSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChunkSource@@UEAA@XZ
    virtual ~ChunkSource();

    // vIndex: 1, symbol: ?shutdown@ChunkSource@@UEAAXXZ
    virtual void shutdown();

    // vIndex: 2, symbol: ?isShutdownDone@ChunkSource@@UEAA_NXZ
    virtual bool isShutdownDone();

    // vIndex: 3, symbol: ?getExistingChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);

    // vIndex: 4, symbol: ?getRandomChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEAVRandom@@@Z
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random& random);

    // vIndex: 5, symbol: ?isChunkKnown@ChunkSource@@UEAA_NAEBVChunkPos@@@Z
    virtual bool isChunkKnown(class ChunkPos const& chunkPos);

    // vIndex: 6, symbol: ?isChunkSaved@ChunkSource@@UEAA_NAEBVChunkPos@@@Z
    virtual bool isChunkSaved(class ChunkPos const& chunkPos);

    // vIndex: 7, symbol:
    // ?createNewChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@1@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 8, symbol:
    // ?getOrLoadChunk@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@1@_N@Z
    virtual std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 9, symbol: ?postProcess@ChunkSource@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 10, symbol: ?checkAndReplaceChunk@ChunkSource@@UEAAXAEAVChunkViewSource@@AEAVLevelChunk@@@Z
    virtual void checkAndReplaceChunk(class ChunkViewSource& neighborhood, class LevelChunk& lc);

    // vIndex: 11, symbol: ?loadChunk@ChunkSource@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 12, symbol: ?postProcessMobsAt@ChunkSource@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    virtual void
    postProcessMobsAt(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    // vIndex: 13, symbol: ?saveLiveChunk@ChunkSource@@UEAA_NAEAVLevelChunk@@@Z
    virtual bool saveLiveChunk(class LevelChunk& lc);

    // vIndex: 14, symbol: ?writeEntityChunkTransfer@ChunkSource@@UEAAXAEAVLevelChunk@@@Z
    virtual void writeEntityChunkTransfer(class LevelChunk& levelChunk);

    // vIndex: 15, symbol:
    // ?writeEntityChunkTransfersToUnloadedChunk@ChunkSource@@UEAAXAEBVChunkKey@@AEBV?$vector@UActorUnloadedChunkTransferEntry@@V?$allocator@UActorUnloadedChunkTransferEntry@@@std@@@std@@@Z
    virtual void
    writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const&, std::vector<struct ActorUnloadedChunkTransferEntry> const&);

    // vIndex: 16, symbol: ?deserializeActorStorageToLevelChunk@ChunkSource@@UEAAXAEAVLevelChunk@@@Z
    virtual void deserializeActorStorageToLevelChunk(class LevelChunk&);

    // vIndex: 17, symbol: ?hintDiscardBatchBegin@ChunkSource@@UEAAXXZ
    virtual void hintDiscardBatchBegin();

    // vIndex: 18, symbol: ?hintDiscardBatchEnd@ChunkSource@@UEAAXXZ
    virtual void hintDiscardBatchEnd();

    // vIndex: 19, symbol:
    // ?acquireDiscarded@ChunkSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 20, symbol: ?compact@ChunkSource@@UEAAXXZ
    virtual void compact();

    // vIndex: 21, symbol: ?flushPendingDiscardedChunkWrites@ChunkSource@@UEAAXXZ
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 22, symbol: ?flushThreadBatch@ChunkSource@@UEAAXXZ
    virtual void flushThreadBatch();

    // vIndex: 23, symbol: ?isWithinWorldLimit@ChunkSource@@UEBA_NAEBVChunkPos@@@Z
    virtual bool isWithinWorldLimit(class ChunkPos const& cp) const;

    // vIndex: 24, symbol:
    // ?getChunkMap@ChunkSource@@UEAAPEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 25, symbol:
    // ?getStorage@ChunkSource@@UEBAAEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;

    // vIndex: 26, symbol: ?clearDeletedEntities@ChunkSource@@UEAAXXZ
    virtual void clearDeletedEntities();

    // vIndex: 27, symbol: ?canCreateViews@ChunkSource@@UEBA_NXZ
    virtual bool canCreateViews() const;

    // vIndex: 28, symbol:
    // ?tryGetBlendingDataProvider@ChunkSource@@UEAA?AV?$unique_ptr@VBlendingDataProvider@@U?$default_delete@VBlendingDataProvider@@@std@@@std@@XZ
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 29, symbol:
    // ?loadLevelChunkMetaDataDictionary@ChunkSource@@UEAA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
    virtual std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 30, symbol: ?setLevelChunk@ChunkSource@@UEAAXV?$shared_ptr@VLevelChunk@@@std@@@Z
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk>);

    // vIndex: 31, symbol: ?canLaunchTasks@ChunkSource@@UEBA_NXZ
    virtual bool canLaunchTasks() const;

    // vIndex: 32, symbol: ?chunkPosNeedsBlending@ChunkSource@@UEAA_NAEBVChunkPos@@@Z
    virtual bool chunkPosNeedsBlending(class ChunkPos const& cp);

    // symbol: ??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z
    MCAPI explicit ChunkSource(std::unique_ptr<class ChunkSource> parent);

    // symbol: ??0ChunkSource@@QEAA@PEAVDimension@@H@Z
    MCAPI ChunkSource(class Dimension* dimension, int side);

    // symbol: ?checkAndLaunchChunkGenerationTasks@ChunkSource@@QEAAX_N@Z
    MCAPI void checkAndLaunchChunkGenerationTasks(bool calledFromTask);

    // symbol:
    // ?createEmptyView@ChunkSource@@QEAA?AV?$GridArea@V?$shared_ptr@VLevelChunk@@@std@@@@W4LoadMode@1@_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@W4ChunkSourceViewGenerateMode@@PEBM@Z
    MCAPI class GridArea<std::shared_ptr<class LevelChunk>>
    createEmptyView(::ChunkSource::LoadMode lm, bool circle, std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add, ::ChunkSourceViewGenerateMode, float const*);

    // symbol: ?getAvailableChunk@ChunkSource@@QEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    MCAPI std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const& cp);

    // symbol: ?getAvailableChunkAt@ChunkSource@@QEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVBlockPos@@@Z
    MCAPI std::shared_ptr<class LevelChunk> getAvailableChunkAt(class BlockPos const& pos);

    // symbol: ?getChunkSide@ChunkSource@@QEBAHXZ
    MCAPI int getChunkSide() const;

    // symbol: ?getDimension@ChunkSource@@QEBAAEAVDimension@@XZ
    MCAPI class Dimension& getDimension() const;

    // symbol: ?getGeneratedChunk@ChunkSource@@QEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
    MCAPI std::shared_ptr<class LevelChunk> getGeneratedChunk(class ChunkPos const& cp);

    // symbol: ?getLevel@ChunkSource@@QEBAAEAVLevel@@XZ
    MCAPI class Level& getLevel() const;

    // symbol: ?initializeWithLevelStorageManager@ChunkSource@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol: ?setShuttingDown@ChunkSource@@QEAAX_N@Z
    MCAPI void setShuttingDown(bool value);

    // symbol: ?shouldServerGeneratePos@ChunkSource@@QEAA_NAEBVChunkPos@@MH@Z
    MCAPI bool shouldServerGeneratePos(class ChunkPos const& chunkPos, float, int);

    // symbol: ?gPerfIsClientSide@ChunkSource@@2_NA
    MCAPI static bool gPerfIsClientSide;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_checkAndDispatchTaskForLevelChunk@ChunkSource@@IEAA_NAEBU?$pair@VChunkPos@@W4ChunkState@@@std@@_N@Z
    MCAPI bool _checkAndDispatchTaskForLevelChunk(
        std::pair<class ChunkPos, ::ChunkState> const& chunkPosAndExpectedState,
        bool                                           areInTask
    );

    // symbol: ?_checkForReplacementDataTask@ChunkSource@@IEAAXAEAVLevelChunk@@AEAVChunkViewSource@@@Z
    MCAPI void _checkForReplacementDataTask(class LevelChunk& lc, class ChunkViewSource& chunks);

    // symbol: ?_checkForUnblockingChunks@ChunkSource@@IEAAXAEBVLevelChunk@@@Z
    MCAPI void _checkForUnblockingChunks(class LevelChunk const& lc);

    // symbol:
    // ?_checkLevelChunkForNextStage@ChunkSource@@IEAAXAEBVLevelChunk@@AEAV?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@W4ChunkState@@@Z
    MCAPI void _checkLevelChunkForNextStage(
        class LevelChunk const&                                           lc,
        class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>& grid,
        ::ChunkState                                                      stateToCheck
    );

    // symbol:
    // ?_checkLevelChunkForPostProcessing@ChunkSource@@IEAAXAEBVLevelChunk@@AEAV?$LevelChunkGridAreaElement@V?$weak_ptr@VLevelChunk@@@std@@@@@Z
    MCAPI void _checkLevelChunkForPostProcessing(
        class LevelChunk const&                                           lc,
        class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>& grid
    );

    // symbol: ?_chunkAtStage@ChunkSource@@IEAA_NV?$weak_ptr@VLevelChunk@@@std@@W4ChunkState@@@Z
    MCAPI bool _chunkAtStage(std::weak_ptr<class LevelChunk> lcwp, ::ChunkState stateToCheck);

    // symbol: ?_createOrReplaceGridAreaMap@ChunkSource@@IEAAXV?$shared_ptr@VLevelChunk@@@std@@_N@Z
    MCAPI void _createOrReplaceGridAreaMap(std::shared_ptr<class LevelChunk> lc, bool);

    // symbol: ?_freeChunkGenerationGridMap@ChunkSource@@IEAAXAEBVChunkPos@@_N@Z
    MCAPI void _freeChunkGenerationGridMap(class ChunkPos const& cp, bool);

    // symbol: ?_launchGenerationTask@ChunkSource@@IEAAXAEBV?$shared_ptr@VLevelChunk@@@std@@_N@Z
    MCAPI void _launchGenerationTask(std::shared_ptr<class LevelChunk> const& lc, bool areInTask);

    // symbol:
    // ?_launchLightingTask@ChunkSource@@IEAAXAEBV?$shared_ptr@VLevelChunk@@@std@@AEBV?$shared_ptr@VChunkViewSource@@@3@_N@Z
    MCAPI void _launchLightingTask(
        std::shared_ptr<class LevelChunk> const&      lc,
        std::shared_ptr<class ChunkViewSource> const& chunks,
        bool                                          areInTask
    );

    // symbol:
    // ?_launchPostProcessingTask@ChunkSource@@IEAAXAEBV?$shared_ptr@VLevelChunk@@@std@@AEBV?$shared_ptr@VChunkViewSource@@@3@_N@Z
    MCAPI void _launchPostProcessingTask(
        std::shared_ptr<class LevelChunk> const&      lc,
        std::shared_ptr<class ChunkViewSource> const& chunks,
        bool                                          areInTask
    );

    // symbol:
    // ?_launchReplacementDataTask@ChunkSource@@IEAAXAEBV?$shared_ptr@VLevelChunk@@@std@@AEBV?$shared_ptr@VChunkViewSource@@@3@_N@Z
    MCAPI void _launchReplacementDataTask(
        std::shared_ptr<class LevelChunk> const&      lc,
        std::shared_ptr<class ChunkViewSource> const& chunks,
        bool                                          areInTask
    );

    // symbol: ?_lightingTask@ChunkSource@@IEAAXAEBV?$shared_ptr@VLevelChunk@@@std@@AEAVChunkViewSource@@@Z
    MCAPI void _lightingTask(std::shared_ptr<class LevelChunk> const& lc, class ChunkViewSource& chunks);

    // symbol: ?_loadChunkTask@ChunkSource@@IEAAXAEAVLevelChunk@@@Z
    MCAPI void _loadChunkTask(class LevelChunk& lc);

    // symbol: ?_postProcessingTask@ChunkSource@@IEAAXAEAVLevelChunk@@AEAVChunkViewSource@@@Z
    MCAPI void _postProcessingTask(class LevelChunk& lc, class ChunkViewSource& chunks);

    // symbol: ?_spawnChunkGenerationTasks@ChunkSource@@IEAAXH_N@Z
    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_saveDirtyChunks@ChunkSource@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _saveDirtyChunks(class LevelStorage&);

    // NOLINTEND
};
