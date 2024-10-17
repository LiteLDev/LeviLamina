#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

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

    /*These member variables were obtained by analyzing BDS-WIN 1.20.61 using IDA.*/
    int                                                     mChunkSide;             // this+0x18
    Level*                                                  mLevel;                 // this+0x20
    Dimension*                                              mDimension;             // this+0x28
    ChunkSource*                                            mParent;                // this+0x30
    std::unique_ptr<ChunkSource>                            mOwnedParent;           // this+0x38
    LevelChunkBuilderData*                                  mLevelChunkBuilderData; // this+0x40
    std::atomic_bool                                        mShuttingDown;          // this+0x48
    char                                                    pad_0x0049[0x17];       // the other 3 member variables
    std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> mChunkStorage;          // this+0x60

    // uchar filler[0x70 - sizeof(Bedrock::EnableNonOwnerReferences)];

public:
    // prevent constructor by default
    ChunkSource& operator=(ChunkSource const&);
    ChunkSource(ChunkSource const&);
    ChunkSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkSource();

    // vIndex: 1
    virtual void shutdown();

    // vIndex: 2
    virtual bool isShutdownDone();

    // vIndex: 3
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);

    // vIndex: 4
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random& random);

    // vIndex: 5
    virtual bool isChunkKnown(class ChunkPos const& chunkPos);

    // vIndex: 6
    virtual bool isChunkSaved(class ChunkPos const& chunkPos);

    // vIndex: 7
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 8
    virtual std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 9
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 10
    virtual void checkAndReplaceChunk(class ChunkViewSource& neighborhood, class LevelChunk& lc);

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 12
    virtual void
    postProcessMobsAt(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    // vIndex: 13
    virtual bool saveLiveChunk(class LevelChunk& lc);

    // vIndex: 14
    virtual void writeEntityChunkTransfer(class LevelChunk& levelChunk);

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

    // vIndex: 20
    virtual void compact();

    // vIndex: 21
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 22
    virtual void flushThreadBatch();

    // vIndex: 23
    virtual bool isWithinWorldLimit(class ChunkPos const& cp) const;

    // vIndex: 24
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();

    // vIndex: 25
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;

    // vIndex: 26
    virtual void clearDeletedEntities();

    // vIndex: 27
    virtual bool canCreateViews() const;

    // vIndex: 28
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 29
    virtual std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 30
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk>);

    // vIndex: 31
    virtual bool canLaunchTasks() const;

    // vIndex: 32
    virtual bool chunkPosNeedsBlending(class ChunkPos const& cp);

    MCAPI explicit ChunkSource(std::unique_ptr<class ChunkSource> parent);

    MCAPI ChunkSource(class Dimension* dimension, int side);

    MCAPI void checkAndLaunchChunkGenerationTasks(bool calledFromTask);

    MCAPI class GridArea<std::shared_ptr<class LevelChunk>> createEmptyView(
        ::ChunkSource::LoadMode                                                                                lm,
        bool                                                                                                   circle,
        std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        float const*                  serverBuildRatio
    );

    MCAPI std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const& cp);

    MCAPI std::shared_ptr<class LevelChunk> getAvailableChunkAt(class BlockPos const& pos);

    MCAPI int getChunkSide() const;

    MCAPI class Dimension& getDimension() const;

    MCAPI std::shared_ptr<class LevelChunk> getGeneratedChunk(class ChunkPos const& cp);

    MCAPI class Level& getLevel() const;

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager& levelStorageManager);

    MCAPI void setShuttingDown(bool value);

    MCAPI bool shouldServerGeneratePos(class ChunkPos const& chunkPos, float serverBuildRatio, int viewRadius);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _checkAndDispatchTaskForLevelChunk(
        std::pair<class ChunkPos, ::ChunkState> const& chunkPosAndExpectedState,
        bool                                           areInTask
    );

    MCAPI void _checkForReplacementDataTask(class LevelChunk& lc, class ChunkViewSource& chunks);

    MCAPI void _checkForUnblockingChunks(class LevelChunk const& lc);

    MCAPI void _checkLevelChunkForNextStage(
        class LevelChunk const&                                           lc,
        class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>& grid,
        ::ChunkState                                                      stateToCheck
    );

    MCAPI void _checkLevelChunkForPostProcessing(
        class LevelChunk const&                                           lc,
        class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>& grid
    );

    MCAPI bool _chunkAtStage(std::weak_ptr<class LevelChunk> lcwp, ::ChunkState stateToCheck);

    MCAPI void _createOrReplaceGridAreaMap(std::shared_ptr<class LevelChunk> lc, bool createNeighbourGridsIfMissing);

    MCAPI void _freeChunkGenerationGridMap(class ChunkPos const& cp, bool isLevelChunkDeletion);

    MCAPI void _launchGenerationTask(std::shared_ptr<class LevelChunk> const& lc, bool areInTask);

    MCAPI void _launchLightingTask(
        std::shared_ptr<class LevelChunk> const&      lc,
        std::shared_ptr<class ChunkViewSource> const& chunks,
        bool                                          areInTask
    );

    MCAPI void _launchPostProcessingTask(
        std::shared_ptr<class LevelChunk> const&      lc,
        std::shared_ptr<class ChunkViewSource> const& chunks,
        bool                                          areInTask
    );

    MCAPI void _launchReplacementDataTask(
        std::shared_ptr<class LevelChunk> const&      lc,
        std::shared_ptr<class ChunkViewSource> const& chunks,
        bool                                          areInTask
    );

    MCAPI void _lightingTask(std::shared_ptr<class LevelChunk> const& lc, class ChunkViewSource& chunks);

    MCAPI void _loadChunkTask(class LevelChunk& lc);

    MCAPI void _postProcessingTask(class LevelChunk& lc, class ChunkViewSource& chunks);

    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _saveDirtyChunks(class LevelStorage&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Dimension* dimension, int side);

    MCAPI void* ctor$(std::unique_ptr<class ChunkSource> parent);

    MCAPI void dtor$();

    MCAPI void acquireDiscarded$(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    MCAPI bool canCreateViews$() const;

    MCAPI bool canLaunchTasks$() const;

    MCAPI void checkAndReplaceChunk$(class ChunkViewSource& neighborhood, class LevelChunk& lc);

    MCAPI bool chunkPosNeedsBlending$(class ChunkPos const& cp);

    MCAPI void clearDeletedEntities$();

    MCAPI void compact$();

    MCAPI std::shared_ptr<class LevelChunk>
          createNewChunk$(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI void deserializeActorStorageToLevelChunk$(class LevelChunk& levelChunk);

    MCAPI void flushPendingDiscardedChunkWrites$();

    MCAPI void flushThreadBatch$();

    MCAPI std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap$();

    MCAPI std::shared_ptr<class LevelChunk> getExistingChunk$(class ChunkPos const&);

    MCAPI std::shared_ptr<class LevelChunk>
          getOrLoadChunk$(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI std::shared_ptr<class LevelChunk> getRandomChunk$(class Random& random);

    MCAPI std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage$() const;

    MCAPI void hintDiscardBatchBegin$();

    MCAPI void hintDiscardBatchEnd$();

    MCAPI bool isChunkKnown$(class ChunkPos const& chunkPos);

    MCAPI bool isChunkSaved$(class ChunkPos const& chunkPos);

    MCAPI bool isShutdownDone$();

    MCAPI bool isWithinWorldLimit$(class ChunkPos const& cp) const;

    MCAPI void loadChunk$(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary$();

    MCAPI bool postProcess$(class ChunkViewSource& neighborhood);

    MCAPI void
    postProcessMobsAt$(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    MCAPI bool saveLiveChunk$(class LevelChunk& lc);

    MCAPI void setLevelChunk$(std::shared_ptr<class LevelChunk>);

    MCAPI void shutdown$();

    MCAPI std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider$();

    MCAPI void writeEntityChunkTransfer$(class LevelChunk& levelChunk);

    MCAPI void writeEntityChunkTransfersToUnloadedChunk$(
        class ChunkKey const&                                      chunkKey,
        std::vector<struct ActorUnloadedChunkTransferEntry> const& transfers
    );

    MCAPI static bool& gPerfIsClientSide();

    // NOLINTEND
};
