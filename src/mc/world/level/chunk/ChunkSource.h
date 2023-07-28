#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated inclusion list
#include "mc/deps/core/data/GridArea.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/world/level/LevelChunkGridAreaElement.h"

class ChunkSource : public Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource inner types declare
    // clang-format off

    // clang-format on

    // ChunkSource inner types define
    enum class LoadMode : int {
        None    = 0x0,
        Deferred = 0x1,
    };


    // int                          mChunkSide;             // this+0x18
    // Level*                       mLevel;                 // this+0x20
    // Dimension*                   mDimension;             // this+0x28
    // ChunkSource*                 mParent;                // this+0x30
    // std::unique_ptr<ChunkSource> mOwnedParent;           // this+0x38
    // LevelChunkBuilderData*       mLevelChunkBuilderData; // this+0x40
    // std::atomic<bool>            mShuttingDown;          // this+0x48
    // void*                        unknownPtr              // this+0x50

    char filler[0x58 - sizeof(Bedrock::EnableNonOwnerReferences)];

public:
    // prevent constructor by default
    ChunkSource& operator=(ChunkSource const&) = delete;
    ChunkSource(ChunkSource const&)            = delete;
    ChunkSource()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?shutdown\@ChunkSource\@\@UEAAXXZ
     */
    virtual void shutdown(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isShutdownDone\@ChunkSource\@\@UEAA_NXZ
     */
    virtual bool isShutdownDone(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getExistingChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getRandomChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?isChunkKnown\@ChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkKnown(class ChunkPos const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isChunkSaved\@ChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkSaved(class ChunkPos const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?createNewChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@1\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getOrLoadChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@1\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?postProcess\@ChunkSource\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    virtual bool postProcess(class ChunkViewSource&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?checkAndReplaceChunk\@ChunkSource\@\@UEAAXAEAVChunkViewSource\@\@AEAVLevelChunk\@\@\@Z
     */
    virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?loadChunk\@ChunkSource\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    virtual void loadChunk(class LevelChunk&, bool); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?postProcessMobsAt\@ChunkSource\@\@UEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, int, int, class Random&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?saveLiveChunk\@ChunkSource\@\@UEAA_NAEAVLevelChunk\@\@\@Z
     */
    virtual bool saveLiveChunk(class LevelChunk&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?writeEntityChunkTransfer\@ChunkSource\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    virtual void writeEntityChunkTransfer(class LevelChunk&); // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?writeEntityChunkTransfersToUnloadedChunk\@ChunkSource\@\@UEAAXAEBVChunkKey\@\@AEBV?$vector\@UActorUnloadedChunkTransferEntry\@\@V?$allocator\@UActorUnloadedChunkTransferEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void
    writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const&, std::vector<struct ActorUnloadedChunkTransferEntry> const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?hintDiscardBatchBegin\@ChunkSource\@\@UEAAXXZ
     */
    virtual void hintDiscardBatchBegin(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?hintDiscardBatchEnd\@ChunkSource\@\@UEAAXXZ
     */
    virtual void hintDiscardBatchEnd(); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?acquireDiscarded\@ChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?compact\@ChunkSource\@\@UEAAXXZ
     */
    virtual void compact(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?flushPendingDiscardedChunkWrites\@ChunkSource\@\@UEAAXXZ
     */
    virtual void flushPendingDiscardedChunkWrites(); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?flushThreadBatch\@ChunkSource\@\@UEAAXXZ
     */
    virtual void flushThreadBatch(); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?isWithinWorldLimit\@ChunkSource\@\@UEBA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const&) const; // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?getChunkMap\@ChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>, // NOLINT
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const*
    getChunkMap(); // NOLINT
    /**
     * @vftbl 24
     * @symbol
     * ?getStorage\@ChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map< // NOLINT
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>, // NOLINT
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const&
    getStorage() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?clearDeletedEntities\@ChunkSource\@\@UEAAXXZ
     */
    virtual void clearDeletedEntities(); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?canCreateViews\@ChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?tryGetBlendingDataProvider\@ChunkSource\@\@UEAA?AV?$unique_ptr\@VBlendingDataProvider\@\@U?$default_delete\@VBlendingDataProvider\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider(); // NOLINT
    /**
     * @vftbl 28
     * @symbol
     * ?loadLevelChunkMetaDataDictionary\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    virtual class std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary(); // NOLINT
    /**
     * @vftbl 29
     * @symbol ?setLevelChunk\@ChunkSource\@\@UEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@Z
     */
    virtual void setLevelChunk(class std::shared_ptr<class LevelChunk>); // NOLINT
    /**
     * @vftbl 30
     * @symbol ?canLaunchTasks\@ChunkSource\@\@UEBA_NXZ
     */
    virtual bool canLaunchTasks() const; // NOLINT
    /**
     * @vftbl 31
     * @symbol ?chunkPosNeedsBlending\@ChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool chunkPosNeedsBlending(class ChunkPos const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChunkSource(); // NOLINT
#endif
    /**
     * @symbol ??0ChunkSource\@\@QEAA\@PEAVDimension\@\@H\@Z
     */
    MCAPI ChunkSource(class Dimension*, int); // NOLINT
    /**
     * @symbol
     * ??0ChunkSource\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ChunkSource(std::unique_ptr<class ChunkSource>); // NOLINT
    /**
     * @symbol ?checkAndLaunchChunkGenerationTasks\@ChunkSource\@\@QEAAX_N\@Z
     */
    MCAPI void checkAndLaunchChunkGenerationTasks(bool); // NOLINT
    /**
     * @symbol
     * ?createEmptyView\@ChunkSource\@\@QEAA?AV?$GridArea\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@W4LoadMode\@1\@_NV?$function\@$$A6AXV?$buffer_span_mut\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@V?$buffer_span\@I\@\@\@Z\@std\@\@W4ChunkSourceViewGenerateMode\@\@PEBM\@Z
     */
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>>
    createEmptyView(enum class ChunkSource::LoadMode, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, enum class ChunkSourceViewGenerateMode, float const*); // NOLINT
    /**
     * @symbol ?getAvailableChunk\@ChunkSource\@\@QEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?getAvailableChunkAt\@ChunkSource\@\@QEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunkAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getChunkSide\@ChunkSource\@\@QEBAHXZ
     */
    MCAPI int getChunkSide() const; // NOLINT
    /**
     * @symbol ?getDimension\@ChunkSource\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension& getDimension() const; // NOLINT
    /**
     * @symbol ?getGeneratedChunk\@ChunkSource\@\@QEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunk> getGeneratedChunk(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?getLevel\@ChunkSource\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel() const; // NOLINT
    /**
     * @symbol ?initializeWithLevelStorageManager\@ChunkSource\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&); // NOLINT
    /**
     * @symbol ?setShuttingDown\@ChunkSource\@\@QEAAX_N\@Z
     */
    MCAPI void setShuttingDown(bool); // NOLINT
    /**
     * @symbol ?shouldServerGeneratePos\@ChunkSource\@\@QEAA_NAEBVChunkPos\@\@MH\@Z
     */
    MCAPI bool shouldServerGeneratePos(class ChunkPos const&, float, int); // NOLINT
    /**
     * @symbol ?gPerfIsClientSide\@ChunkSource\@\@2_NA
     */
    MCAPI static bool gPerfIsClientSide; // NOLINT

    // protected:
    /**
     * @symbol
     * ?_checkAndDispatchTaskForLevelChunk\@ChunkSource\@\@IEAA_NAEBU?$pair\@VChunkPos\@\@W4ChunkState\@\@\@std\@\@_N\@Z
     */
    MCAPI bool
    _checkAndDispatchTaskForLevelChunk(struct std::pair<class ChunkPos, enum class ChunkState> const&, bool); // NOLINT
    /**
     * @symbol ?_checkForReplacementDataTask\@ChunkSource\@\@IEAAXAEAVLevelChunk\@\@AEAVChunkViewSource\@\@\@Z
     */
    MCAPI void _checkForReplacementDataTask(class LevelChunk&, class ChunkViewSource&); // NOLINT
    /**
     * @symbol ?_checkForUnblockingChunks\@ChunkSource\@\@IEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void _checkForUnblockingChunks(class LevelChunk const&); // NOLINT
    /**
     * @symbol
     * ?_checkLevelChunkForNextStage\@ChunkSource\@\@IEAAXAEBVLevelChunk\@\@AEAV?$LevelChunkGridAreaElement\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@\@W4ChunkState\@\@\@Z
     */
    MCAPI void _checkLevelChunkForNextStage(
        class LevelChunk const&,
        class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>>&,
        enum class ChunkState
    ); // NOLINT
    /**
     * @symbol
     * ?_checkLevelChunkForPostProcessing\@ChunkSource\@\@IEAAXAEBVLevelChunk\@\@AEAV?$LevelChunkGridAreaElement\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@\@\@Z
     */
    MCAPI void
    _checkLevelChunkForPostProcessing(class LevelChunk const&, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>>&); // NOLINT
    /**
     * @symbol ?_chunkAtStage\@ChunkSource\@\@IEAA_NV?$weak_ptr\@VLevelChunk\@\@\@std\@\@W4ChunkState\@\@\@Z
     */
    MCAPI bool _chunkAtStage(class std::weak_ptr<class LevelChunk>, enum class ChunkState); // NOLINT
    /**
     * @symbol ?_createOrReplaceGridAreaMap\@ChunkSource\@\@IEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@_N\@Z
     */
    MCAPI void _createOrReplaceGridAreaMap(class std::shared_ptr<class LevelChunk>, bool); // NOLINT
    /**
     * @symbol ?_freeChunkGenerationGridMap\@ChunkSource\@\@IEAAXAEBVChunkPos\@\@_N\@Z
     */
    MCAPI void _freeChunkGenerationGridMap(class ChunkPos const&, bool); // NOLINT
    /**
     * @symbol ?_launchGenerationTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@_N\@Z
     */
    MCAPI void _launchGenerationTask(class std::shared_ptr<class LevelChunk> const&, bool); // NOLINT
    /**
     * @symbol
     * ?_launchLightingTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBV?$shared_ptr\@VChunkViewSource\@\@\@3\@_N\@Z
     */
    MCAPI void _launchLightingTask(
        class std::shared_ptr<class LevelChunk> const&,
        class std::shared_ptr<class ChunkViewSource> const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?_launchPostProcessingTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBV?$shared_ptr\@VChunkViewSource\@\@\@3\@_N\@Z
     */
    MCAPI void _launchPostProcessingTask(
        class std::shared_ptr<class LevelChunk> const&,
        class std::shared_ptr<class ChunkViewSource> const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?_launchReplacementDataTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBV?$shared_ptr\@VChunkViewSource\@\@\@3\@_N\@Z
     */
    MCAPI void _launchReplacementDataTask(
        class std::shared_ptr<class LevelChunk> const&,
        class std::shared_ptr<class ChunkViewSource> const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?_lightingTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVChunkViewSource\@\@\@Z
     */
    MCAPI void _lightingTask(class std::shared_ptr<class LevelChunk> const&, class ChunkViewSource&); // NOLINT
    /**
     * @symbol ?_loadChunkTask\@ChunkSource\@\@IEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void _loadChunkTask(class LevelChunk&); // NOLINT
    /**
     * @symbol ?_postProcessingTask\@ChunkSource\@\@IEAAXAEAVLevelChunk\@\@AEAVChunkViewSource\@\@\@Z
     */
    MCAPI void _postProcessingTask(class LevelChunk&, class ChunkViewSource&); // NOLINT
    /**
     * @symbol ?_spawnChunkGenerationTasks\@ChunkSource\@\@IEAAXH_N\@Z
     */
    MCAPI void _spawnChunkGenerationTasks(int, bool); // NOLINT

    // private:
    /**
     * @symbol ?_saveDirtyChunks\@ChunkSource\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _saveDirtyChunks(class LevelStorage&); // NOLINT

protected:
private:
};
