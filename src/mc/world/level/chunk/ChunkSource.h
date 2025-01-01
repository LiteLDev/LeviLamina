#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlendingDataProvider;
class BlockPos;
class BlockSource;
class BoundingBox;
class ChunkKey;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class ILevelStorageManagerConnector;
class Level;
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkMetaDataDictionary;
class LevelStorage;
class Random;
struct ActorUnloadedChunkTransferEntry;
struct LevelChunkFinalDeleter;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ChunkSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource inner types define
    enum class LoadMode : int {
        None     = 0,
        Deferred = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mChunkSide;
    ::ll::TypedStorage<8, 8, ::Level*>                         mLevel;
    ::ll::TypedStorage<8, 8, ::Dimension*>                     mDimension;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                   mParent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>> mOwnedParent;
    ::ll::TypedStorage<8, 8, ::LevelChunkBuilderData*>         mLevelChunkBuilderData;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mShuttingDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageAppSuspendSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkSource() /*override*/;

    // vIndex: 1
    virtual void shutdown();

    // vIndex: 2
    virtual bool isShutdownDone();

    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const&);

    // vIndex: 4
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random);

    // vIndex: 5
    virtual bool isChunkKnown(::ChunkPos const& chunkPos);

    // vIndex: 6
    virtual bool isChunkSaved(::ChunkPos const& chunkPos);

    // vIndex: 7
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 8
    virtual ::std::shared_ptr<::LevelChunk>
    getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 9
    virtual bool postProcess(::ChunkViewSource& neighborhood);

    // vIndex: 10
    virtual void checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    // vIndex: 11
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 13
    virtual void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    // vIndex: 12
    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    // vIndex: 14
    virtual bool saveLiveChunk(::LevelChunk& lc);

    // vIndex: 15
    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk);

    // vIndex: 16
    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    // vIndex: 17
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    // vIndex: 18
    virtual void hintDiscardBatchBegin();

    // vIndex: 19
    virtual void hintDiscardBatchEnd();

    // vIndex: 20
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    // vIndex: 21
    virtual void compact();

    // vIndex: 22
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 23
    virtual void flushThreadBatch();

    // vIndex: 24
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const;

    // vIndex: 25
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap();

    // vIndex: 26
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const;

    // vIndex: 27
    virtual void clearDeletedEntities();

    // vIndex: 28
    virtual bool canCreateViews() const;

    // vIndex: 29
    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 30
    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 31
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk>);

    // vIndex: 32
    virtual bool canLaunchTasks() const;

    // vIndex: 33
    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChunkSource(::std::unique_ptr<::ChunkSource> parent);

    MCAPI ChunkSource(::Dimension* dimension, int side);

    MCAPI bool _checkAndDispatchTaskForLevelChunk(
        ::std::pair<::ChunkPos, ::ChunkState> const& chunkPosAndExpectedState,
        bool                                         areInTask
    );

    MCAPI void _checkForReplacementDataTask(::LevelChunk& lc, ::ChunkViewSource& chunks);

    MCAPI void _checkForUnblockingChunks(::LevelChunk const& lc);

    MCAPI void _checkLevelChunkForNextStage(
        ::LevelChunk const&                                         lc,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& grid,
        ::ChunkState                                                stateToCheck
    );

    MCAPI void _checkLevelChunkForPostProcessing(
        ::LevelChunk const&                                         lc,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& grid
    );

    MCAPI bool _chunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

    MCAPI void _createOrReplaceGridAreaMap(::std::shared_ptr<::LevelChunk> lc, bool createNeighbourGridsIfMissing);

    MCAPI void _freeChunkGenerationGridMap(::ChunkPos const& cp, bool isLevelChunkDeletion);

    MCAPI void _launchGenerationTask(::std::shared_ptr<::LevelChunk> const& lc, bool areInTask);

    MCAPI void _launchLightingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _launchPostProcessingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _launchReplacementDataTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _lightingTask(::std::shared_ptr<::LevelChunk> const& lc, ::ChunkViewSource& chunks);

    MCAPI void _loadChunkTask(::LevelChunk& lc);

    MCAPI void _postProcessingTask(::LevelChunk& lc, ::ChunkViewSource& chunks);

    MCAPI void _saveDirtyChunks(::LevelStorage&);

    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);

    MCAPI void checkAndLaunchChunkGenerationTasks(bool calledFromTask);

    MCAPI ::GridArea<::std::shared_ptr<::LevelChunk>> createEmptyView(
        ::ChunkSource::LoadMode                                                                        lm,
        bool                                                                                           circle,
        ::std::function<void(::buffer_span_mut<::std::shared_ptr<::LevelChunk>>, ::buffer_span<uint>)> add,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        float const*                  serverBuildRatio
    );

    MCAPI ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const& cp);

    MCAPI ::std::shared_ptr<::LevelChunk> getAvailableChunkAt(::BlockPos const& pos);

    MCAPI int getChunkSide() const;

    MCAPI ::Dimension& getDimension() const;

    MCAPI ::std::shared_ptr<::LevelChunk> getGeneratedChunk(::ChunkPos const& cp);

    MCAPI ::Level& getLevel() const;

    MCAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    );

    MCAPI void setShuttingDown(bool value);

    MCAPI bool shouldServerGeneratePos(::ChunkPos const& chunkPos, float serverBuildRatio, int viewRadius);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& gPerfIsClientSide();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ChunkSource> parent);

    MCAPI void* $ctor(::Dimension* dimension, int side);
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

    MCAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const&);

    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCAPI bool $isChunkSaved(::ChunkPos const& chunkPos);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI bool $postProcess(::ChunkViewSource& neighborhood);

    MCAPI void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);

    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    MCAPI bool $saveLiveChunk(::LevelChunk& lc);

    MCAPI void $writeEntityChunkTransfer(::LevelChunk& levelChunk);

    MCAPI void $writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    MCAPI void $deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    MCAPI void $hintDiscardBatchBegin();

    MCAPI void $hintDiscardBatchEnd();

    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCAPI void $compact();

    MCAPI void $flushPendingDiscardedChunkWrites();

    MCAPI void $flushThreadBatch();

    MCAPI bool $isWithinWorldLimit(::ChunkPos const& cp) const;

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCAPI void $clearDeletedEntities();

    MCAPI bool $canCreateViews() const;

    MCAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();

    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk>);

    MCAPI bool $canLaunchTasks() const;

    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
