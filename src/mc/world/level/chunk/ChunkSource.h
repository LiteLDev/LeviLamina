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

class ChunkSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource inner types define
    enum class LoadMode {};

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

    MCAPI static bool gPerfIsClientSide;

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
};
