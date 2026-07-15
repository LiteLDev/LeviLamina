#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"

// auto generated forward declare list
// clang-format off
class BlendingDataProvider;
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
class Random;
struct ActorUnloadedChunkTransferEntry;
struct ChunkDeletionMetadata;
struct LevelChunkFinalDeleter;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
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
    // prevent constructor by default
    ChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChunkSource() /*override*/;

    virtual void shutdown();

    virtual bool isShutdownDone();

    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos);

    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random);

    virtual bool isChunkKnown(::ChunkPos const& chunkPos);

    virtual bool isChunkSaved(::ChunkPos const& chunkPos);

    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    virtual ::std::shared_ptr<::LevelChunk>
    getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    virtual void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    virtual void deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );

    virtual void deleteStoredChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );

    virtual bool saveLiveChunk(::LevelChunk& lc);

    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk);

    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);

    virtual void hintDiscardBatchBegin();

    virtual void hintDiscardBatchEnd();

    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    virtual void compact();

    virtual void flushPendingDiscardedChunkWrites();

    virtual void flushThreadBatch();

    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const;

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap();

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const;

    virtual void clearDeletedEntities();

    virtual bool canCreateViews() const;

    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider();

    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc);

    virtual bool canLaunchTasks() const;

    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp);

    virtual void _clearBlendingCache();

    virtual ::std::shared_ptr<::br::worldgen::StructureInstance>
    _tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChunkSource(::std::unique_ptr<::ChunkSource> parent);

#ifdef LL_PLAT_C
    MCAPI void _checkForUnblockingChunks(::LevelChunk const& lc);

    MCAPI void _createOrReplaceGridAreaMap(::std::shared_ptr<::LevelChunk> lc, bool createNeighbourGridsIfMissing);
#endif

    MCAPI void _freeChunkGenerationGridMap(::ChunkPos const& cp, bool isLevelChunkDeletion);

    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);

#ifdef LL_PLAT_C
    MCAPI void addEmptyChunkPosForProcessingNeighbours(::std::shared_ptr<::LevelChunk> lc);
#endif

    MCAPI void checkAndLaunchChunkGenerationTasks(bool calledFromTask);

#ifdef LL_PLAT_C
    MCAPI ::GridArea<::std::shared_ptr<::LevelChunk>> createEmptyView(
        ::ChunkSource::LoadMode                                             lm,
        bool                                                                circle,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        float const*                                                        serverBuildRatio
    );
#endif

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
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

    MCFOLD ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& pos);

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

    MCAPI void $deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );

    MCAPI void $deleteStoredChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );

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

    MCAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);

    MCAPI bool $canLaunchTasks() const;

    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);

    MCAPI void $_clearBlendingCache();

    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    $_tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
