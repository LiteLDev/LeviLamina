#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class ChunkKey;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class Level;
class LevelChunk;
class LevelStorage;
class Random;
class TaskResult;
struct ActorUnloadedChunkTransferEntry;
struct BlendingDataProvider;
struct ILevelStorageManagerConnector;
struct LevelChunkBuilderData;
struct LevelChunkFinalDeleter;
struct LevelChunkMetaDataDictionary;
// clang-format on

class ChunkSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource inner types define
    enum class LoadMode : uint {};

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
    // prevent constructor by default
    ChunkSource();

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
    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    // vIndex: 10
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    // vIndex: 11
    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    // vIndex: 12
    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    // vIndex: 13
    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

    // vIndex: 14
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 16
    virtual void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    // vIndex: 15
    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    // vIndex: 17
    virtual bool saveLiveChunk(::LevelChunk& lc);

    // vIndex: 18
    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk);

    // vIndex: 19
    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    // vIndex: 20
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    // vIndex: 21
    virtual void hintDiscardBatchBegin();

    // vIndex: 22
    virtual void hintDiscardBatchEnd();

    // vIndex: 23
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    // vIndex: 24
    virtual void compact();

    // vIndex: 25
    virtual void flushPendingDiscardedChunkWrites();

    // vIndex: 26
    virtual void flushThreadBatch();

    // vIndex: 27
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const;

    // vIndex: 28
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap();

    // vIndex: 29
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const;

    // vIndex: 30
    virtual void clearDeletedEntities();

    // vIndex: 31
    virtual bool canCreateViews() const;

    // vIndex: 32
    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider();

    // vIndex: 33
    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    // vIndex: 34
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk>);

    // vIndex: 35
    virtual bool canLaunchTasks() const;

    // vIndex: 36
    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChunkSource(::std::unique_ptr<::ChunkSource> parent);

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

    MCAPI void _checkSpecificLevelChunkForUnblocking(
        ::LevelChunk const&                                         lc,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& grid
    );

    MCAPI bool _chunkAtStage(::std::weak_ptr<::LevelChunk> lcwp, ::ChunkState stateToCheck);

    MCAPI void _createOrReplaceGridAreaMap(::std::shared_ptr<::LevelChunk> lc, bool createNeighbourGridsIfMissing);

    MCAPI void _decorationPostProcessingTask(::LevelChunk& lc, ::ChunkViewSource& chunks);

    MCAPI void _dispatchTaskForLevelChunk(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _freeChunkGenerationGridMap(::ChunkPos const& cp, bool isLevelChunkDeletion);

    MCAPI void _handleTaskFailure(::LevelChunk& levelChunk, ::ChunkState currentState, ::ChunkState previousState);

    MCAPI void _launchChunkTask(
        ::std::string_view                          taskName,
        ::ChunkPos const&                           chunkPos,
        bool                                        areInTask,
        ::brstd::move_only_function<::TaskResult()> taskFunc
    );

    MCAPI void _launchDecorationPostProcessingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _launchLightingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _launchNeighborAwareUpgradeTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _launchReplacementDataTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _launchStructurePostProcessingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );

    MCAPI void _lightingTask(::std::shared_ptr<::LevelChunk> const& lc, ::ChunkViewSource& chunks);

    MCAPI void _loadChunkTask(::LevelChunk& lc);

    MCAPI void _neighborAwareUpgradeTask(::LevelChunk& lc, ::ChunkViewSource& chunks);

    MCAPI void _saveDirtyChunks(::LevelStorage&);

    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);

    MCAPI void addEmptyChunkPosForProcessingNeighbours(::std::shared_ptr<::LevelChunk> lc);

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

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

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

    MCFOLD ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const&);

    MCFOLD ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCAPI bool $isChunkSaved(::ChunkPos const& chunkPos);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCFOLD bool $structurePostProcessChunk(::ChunkViewSource&);

    MCFOLD bool $decorationPostProcessChunk(::ChunkViewSource&);

    MCFOLD void $checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    MCFOLD bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    MCFOLD void $neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

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

    MCFOLD bool $isWithinWorldLimit(::ChunkPos const& cp) const;

    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCFOLD void $clearDeletedEntities();

    MCFOLD bool $canCreateViews() const;

    MCAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();

    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCFOLD void $setLevelChunk(::std::shared_ptr<::LevelChunk>);

    MCAPI bool $canLaunchTasks() const;

    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
