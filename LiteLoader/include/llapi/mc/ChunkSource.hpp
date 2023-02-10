/**
 * @file  ChunkSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkSource.
 *
 */
class ChunkSource {

#define AFTER_EXTRA
// Add Member There
public:
    enum class LoadMode;
    enum class ChunkSourceViewGenerateMode;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKSOURCE
public:
    class ChunkSource& operator=(class ChunkSource const &) = delete;
    ChunkSource(class ChunkSource const &) = delete;
    ChunkSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ChunkSource();
    /**
     * @hash   864782965
     * @vftbl  1
     * @symbol  ?shutdown\@ChunkSource\@\@UEAAXXZ
     */
    virtual void shutdown();
    /**
     * @hash   -1637648333
     * @vftbl  2
     * @symbol  ?isShutdownDone\@ChunkSource\@\@UEAA_NXZ
     */
    virtual bool isShutdownDone();
    /**
     * @hash   -5942418
     * @vftbl  3
     * @symbol  ?getExistingChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @hash   -2056678515
     * @vftbl  4
     * @symbol  ?getRandomChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /**
     * @hash   -1597734327
     * @vftbl  5
     * @symbol  ?isChunkKnown\@ChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkKnown(class ChunkPos const &);
    /**
     * @hash   775004709
     * @vftbl  6
     * @symbol  ?isChunkSaved\@ChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkSaved(class ChunkPos const &);
    /**
     * @hash   1730881172
     * @vftbl  7
     * @symbol  ?createNewChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@1\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @hash   202351471
     * @vftbl  8
     * @symbol  ?getOrLoadChunk\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@1\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @hash   808293871
     * @vftbl  9
     * @symbol  ?postProcess\@ChunkSource\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    virtual bool postProcess(class ChunkViewSource &);
    /**
     * @hash   523067907
     * @vftbl  10
     * @symbol  ?checkAndReplaceChunk\@ChunkSource\@\@UEAAXAEAVChunkViewSource\@\@AEAVLevelChunk\@\@\@Z
     */
    virtual void checkAndReplaceChunk(class ChunkViewSource &, class LevelChunk &);
    /**
     * @hash   -1196794361
     * @vftbl  11
     * @symbol  ?loadChunk\@ChunkSource\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    virtual void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   1306059841
     * @vftbl  12
     * @symbol  ?postProcessMobsAt\@ChunkSource\@\@UEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /**
     * @hash   905304438
     * @vftbl  13
     * @symbol  ?saveLiveChunk\@ChunkSource\@\@UEAA_NAEAVLevelChunk\@\@\@Z
     */
    virtual bool saveLiveChunk(class LevelChunk &);
    /**
     * @hash   313839670
     * @vftbl  14
     * @symbol  ?writeEntityChunkTransfer\@ChunkSource\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    virtual void writeEntityChunkTransfer(class LevelChunk &);
    /**
     * @hash   -1351371338
     * @vftbl  15
     * @symbol  ?writeEntityChunkTransfersToUnloadedChunk\@ChunkSource\@\@UEAAXAEBVChunkKey\@\@AEBV?$vector\@UActorUnloadedChunkTransferEntry\@\@V?$allocator\@UActorUnloadedChunkTransferEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const &, std::vector<struct ActorUnloadedChunkTransferEntry> const &);
    /**
     * @hash   1695984677
     * @vftbl  16
     * @symbol  ?hintDiscardBatchBegin\@ChunkSource\@\@UEAAXXZ
     */
    virtual void hintDiscardBatchBegin();
    /**
     * @hash   620367991
     * @vftbl  17
     * @symbol  ?hintDiscardBatchEnd\@ChunkSource\@\@UEAAXXZ
     */
    virtual void hintDiscardBatchEnd();
    /**
     * @hash   1802013950
     * @vftbl  18
     * @symbol  ?acquireDiscarded\@ChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @hash   -1611956142
     * @vftbl  19
     * @symbol  ?compact\@ChunkSource\@\@UEAAXXZ
     */
    virtual void compact();
    /**
     * @hash   1746237990
     * @vftbl  20
     * @symbol  ?flushPendingDiscardedChunkWrites\@ChunkSource\@\@UEAAXXZ
     */
    virtual void flushPendingDiscardedChunkWrites();
    /**
     * @hash   -731562757
     * @vftbl  21
     * @symbol  ?flushThreadBatch\@ChunkSource\@\@UEAAXXZ
     */
    virtual void flushThreadBatch();
    /**
     * @hash   76880314
     * @vftbl  22
     * @symbol  ?isWithinWorldLimit\@ChunkSource\@\@UEBA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /**
     * @hash   -905414544
     * @vftbl  23
     * @symbol  ?getChunkMap\@ChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /**
     * @hash   1484133667
     * @vftbl  24
     * @symbol  ?getStorage\@ChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const & getStorage() const;
    /**
     * @hash   2136997420
     * @vftbl  25
     * @symbol  ?clearDeletedEntities\@ChunkSource\@\@UEAAXXZ
     */
    virtual void clearDeletedEntities();
    /**
     * @hash   968699026
     * @vftbl  26
     * @symbol  ?canCreateViews\@ChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @hash   170861353
     * @vftbl  27
     * @symbol  ?tryGetBlendingDataProvider\@ChunkSource\@\@UEAA?AV?$unique_ptr\@VBlendingDataProvider\@\@U?$default_delete\@VBlendingDataProvider\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();
    /**
     * @hash   1940605305
     * @vftbl  28
     * @symbol  ?loadLevelChunkMetaDataDictionary\@ChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    virtual class std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
    /**
     * @vftbl  29
     * @symbol  ?setLevelChunk\@ChunkSource\@\@UEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@Z
     */
    virtual void setLevelChunk(class std::shared_ptr<class LevelChunk>);
    /**
     * @hash   411561727
     * @symbol  ??0ChunkSource\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ChunkSource(std::unique_ptr<class ChunkSource>);
    /**
     * @hash   1668926189
     * @symbol  ??0ChunkSource\@\@QEAA\@PEAVDimension\@\@H\@Z
     */
    MCAPI ChunkSource(class Dimension *, int);
    /**
     * @hash   -2075643796
     * @symbol  ?checkAndLaunchChunkGenerationTasks\@ChunkSource\@\@QEAAX_N\@Z
     */
    MCAPI void checkAndLaunchChunkGenerationTasks(bool);
    /**
     * @symbol  ?createEmptyView\@ChunkSource\@\@QEAA?AV?$GridArea\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@W4LoadMode\@1\@_NV?$function\@$$A6AXV?$buffer_span_mut\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@V?$buffer_span\@I\@\@\@Z\@std\@\@W4ChunkSourceViewGenerateMode\@\@\@Z
     */
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>> createEmptyView(enum class ChunkSource::LoadMode, bool, class std::function<void (class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, enum class ChunkSourceViewGenerateMode);
    /**
     * @hash   1463615988
     * @symbol  ?getAvailableChunk\@ChunkSource\@\@QEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const &);
    /**
     * @hash   1648943236
     * @symbol  ?getAvailableChunkAt\@ChunkSource\@\@QEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunkAt(class BlockPos const &);
    /**
     * @hash   -225838478
     * @symbol  ?getChunkSide\@ChunkSource\@\@QEBAHXZ
     */
    MCAPI int getChunkSide() const;
    /**
     * @hash   961442920
     * @symbol  ?getDimension\@ChunkSource\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension & getDimension() const;
    /**
     * @hash   -546140188
     * @symbol  ?getGeneratedChunk\@ChunkSource\@\@QEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunk> getGeneratedChunk(class ChunkPos const &);
    /**
     * @hash   1464747112
     * @symbol  ?getLevel\@ChunkSource\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   2077895582
     * @symbol  ?setShuttingDown\@ChunkSource\@\@QEAAX_N\@Z
     */
    MCAPI void setShuttingDown(bool);
    /**
     * @symbol  ?shouldServerGeneratePos\@ChunkSource\@\@QEAA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool shouldServerGeneratePos(class ChunkPos const &);
    /**
     * @hash   -504615461
     * @symbol  ?gPerfIsClientSide\@ChunkSource\@\@2_NA
     */
    MCAPI static bool gPerfIsClientSide;

//protected:
    /**
     * @hash   -827099675
     * @symbol  ?_checkAndDispatchTaskForLevelChunk\@ChunkSource\@\@IEAA_NAEBU?$pair\@VChunkPos\@\@W4ChunkState\@\@\@std\@\@_N\@Z
     */
    MCAPI bool _checkAndDispatchTaskForLevelChunk(struct std::pair<class ChunkPos, enum class ChunkState> const &, bool);
    /**
     * @hash   -1641795960
     * @symbol  ?_checkForReplacementDataTask\@ChunkSource\@\@IEAAXAEAVLevelChunk\@\@AEAVChunkViewSource\@\@\@Z
     */
    MCAPI void _checkForReplacementDataTask(class LevelChunk &, class ChunkViewSource &);
    /**
     * @hash   632723889
     * @symbol  ?_checkForUnblockingChunks\@ChunkSource\@\@IEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void _checkForUnblockingChunks(class LevelChunk const &);
    /**
     * @hash   -1437718044
     * @symbol  ?_checkLevelChunkForNextStage\@ChunkSource\@\@IEAAXAEBVLevelChunk\@\@AEAV?$LevelChunkGridAreaElement\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@\@W4ChunkState\@\@\@Z
     */
    MCAPI void _checkLevelChunkForNextStage(class LevelChunk const &, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>> &, enum class ChunkState);
    /**
     * @hash   -1730880854
     * @symbol  ?_checkLevelChunkForPostProcessing\@ChunkSource\@\@IEAAXAEBVLevelChunk\@\@AEAV?$LevelChunkGridAreaElement\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@\@\@Z
     */
    MCAPI void _checkLevelChunkForPostProcessing(class LevelChunk const &, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>> &);
    /**
     * @hash   -1567107710
     * @symbol  ?_chunkAtStage\@ChunkSource\@\@IEAA_NV?$weak_ptr\@VLevelChunk\@\@\@std\@\@W4ChunkState\@\@\@Z
     */
    MCAPI bool _chunkAtStage(class std::weak_ptr<class LevelChunk>, enum class ChunkState);
    /**
     * @symbol  ?_createOrReplaceGridAreaMap\@ChunkSource\@\@IEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@_N\@Z
     */
    MCAPI void _createOrReplaceGridAreaMap(class std::shared_ptr<class LevelChunk>, bool);
    /**
     * @hash   -177608951
     * @symbol  ?_freeChunkGenerationGridMap\@ChunkSource\@\@IEAAXAEBVChunkPos\@\@_N\@Z
     */
    MCAPI void _freeChunkGenerationGridMap(class ChunkPos const &, bool);
    /**
     * @hash   -744590467
     * @symbol  ?_launchGenerationTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@_N\@Z
     */
    MCAPI void _launchGenerationTask(class std::shared_ptr<class LevelChunk> const &, bool);
    /**
     * @hash   -64114612
     * @symbol  ?_launchLightingTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBV?$shared_ptr\@VChunkViewSource\@\@\@3\@_N\@Z
     */
    MCAPI void _launchLightingTask(class std::shared_ptr<class LevelChunk> const &, class std::shared_ptr<class ChunkViewSource> const &, bool);
    /**
     * @hash   1532506693
     * @symbol  ?_launchPostProcessingTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBV?$shared_ptr\@VChunkViewSource\@\@\@3\@_N\@Z
     */
    MCAPI void _launchPostProcessingTask(class std::shared_ptr<class LevelChunk> const &, class std::shared_ptr<class ChunkViewSource> const &, bool);
    /**
     * @hash   557074656
     * @symbol  ?_launchReplacementDataTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBV?$shared_ptr\@VChunkViewSource\@\@\@3\@_N\@Z
     */
    MCAPI void _launchReplacementDataTask(class std::shared_ptr<class LevelChunk> const &, class std::shared_ptr<class ChunkViewSource> const &, bool);
    /**
     * @hash   385088089
     * @symbol  ?_lightingTask\@ChunkSource\@\@IEAAXAEBV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVChunkViewSource\@\@\@Z
     */
    MCAPI void _lightingTask(class std::shared_ptr<class LevelChunk> const &, class ChunkViewSource &);
    /**
     * @hash   -1371009573
     * @symbol  ?_loadChunkTask\@ChunkSource\@\@IEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void _loadChunkTask(class LevelChunk &);
    /**
     * @hash   366025326
     * @symbol  ?_postProcessingTask\@ChunkSource\@\@IEAAXAEAVLevelChunk\@\@AEAVChunkViewSource\@\@\@Z
     */
    MCAPI void _postProcessingTask(class LevelChunk &, class ChunkViewSource &);
    /**
     * @hash   -1463457627
     * @symbol  ?_spawnChunkGenerationTasks\@ChunkSource\@\@IEAAXH_N\@Z
     */
    MCAPI void _spawnChunkGenerationTasks(int, bool);

protected:

};