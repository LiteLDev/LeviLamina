#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/IBlockSource.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/TickingQueueType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Biome;
class Block;
class BlockActor;
class BlockChangeContext;
class BlockDescriptor;
class BlockSourceListener;
class BlockTickingQueue;
class BlockType;
class BlockVolume;
class BoundingBox;
class ChunkSource;
class Dimension;
class EntityContext;
class GameEvent;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ILevel;
class ItemStackBase;
class Level;
class LevelChunk;
class LevelSeed64;
class Material;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
struct ActorBlockSyncMessage;
struct ActorDefinitionIdentifier;
struct BiomeIdLatticeBatch;
struct Bounds;
struct Brightness;
struct ClipParameters;
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

class Mob;
class Container;
class CompoundTag;

class BlockSource : public ::IBlockSource,
                    public ::EnableGetWeakRef<::BlockSource>,
                    public ::std::enable_shared_from_this<::BlockSource> {
public:
    LLNDAPI std::vector<Actor*> getEntities(
        AABB const& range,
        float       extendDistance = 2.0f,
        ActorType   actorType      = ActorType::TypeMask,
        bool        ignoreType     = false
    ) const;

    LLNDAPI optional_ref<Container> tryGetContainer(BlockPos const& pos);

    LLAPI optional_ref<Actor> spawnActor(CompoundTag const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::thread::id const>                         mOwnerThreadID;
    ::ll::TypedStorage<1, 1, bool const>                                      mAllowUnpopulatedChunks;
    ::ll::TypedStorage<1, 1, bool const>                                      mPublicSource;
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                                  mChunkSource;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                    mDimension;
    ::ll::TypedStorage<2, 2, short const>                                     mMaxHeight;
    ::ll::TypedStorage<2, 2, short const>                                     mMinHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDataFetchResult<::Block>>> mTempBlockFetchResult;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowTickingChanges;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mPlaceChunkPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceListener*>>          mListeners;
    ::ll::TypedStorage<1, 1, bool>                                            mIsPersistantBlockSource;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                      mLastChunkPos;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LevelChunk>>                  mLastChunkWeakPtr;
    ::ll::TypedStorage<8, 8, ::LevelChunk*>                                   mLastChunkDirectPtr;
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>                            mRandomTickQueue;
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>                            mTickQueue;
    ::ll::TypedStorage<1, 2, ::BrightnessPair const>                          mDefaultBrightness;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                        mTempEntityList;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockActor*>>                   mTempBlockEntityList;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                          mTempCubeList;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSource& operator=(BlockSource const&);
    BlockSource(BlockSource const&);
    BlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockSource() /*override*/;

    virtual ::WeakRef<::BlockSource> getWeakRef() /*override*/;

    virtual ::Level& getLevel() /*override*/;

    virtual ::Dimension& getDimension() const /*override*/;

    virtual ::Dimension& getDimension() /*override*/;

    virtual ::Dimension const& getDimensionConst() const /*override*/;

    virtual ::DimensionType getDimensionId() const /*override*/;

    virtual bool shouldFireEvents(::LevelChunk const& c) const /*override*/;

    virtual bool isInstaticking(::BlockPos const& pos) const /*override*/;

    virtual void addListener(::BlockSourceListener& l) /*override*/;

    virtual void removeListener(::BlockSourceListener& l) /*override*/;

    virtual ::LevelChunk* getChunk(int x, int z) const /*override*/;

    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) const /*override*/;

    virtual ::LevelChunk* getChunkAt(::BlockPos const& pos) const /*override*/;

    virtual short getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
    ) const /*override*/;

    virtual short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const /*override*/;

    virtual short getHeight(::std::function<bool(::Block const&)> const& type, ::BlockPos const& pos) const
        /*override*/;

    virtual short getHeight(::std::function<bool(::Block const&)> const& type, int x, int z) const /*override*/;

    virtual ::Material const& getMaterial(::BlockPos const& pos) const /*override*/;

    virtual ::Material const& getMaterial(int x, int y, int z) const /*override*/;

    virtual short getMaxHeight() const /*override*/;

    virtual short getMinHeight() const /*override*/;

    virtual bool hasBorderBlock(::BlockPos const pos) const /*override*/;

    virtual float getBrightness(::BlockPos const& pos) const /*override*/;

    virtual bool mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    ) /*override*/;

    virtual bool canDoBlockDrops() const /*override*/;

    virtual bool canDoContainedItemDrops() const /*override*/;

    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const /*override*/;

    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const /*override*/;

    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const /*override*/;

    virtual bool areChunksFullyLoaded(::BlockPos const& pos, int r) const /*override*/;

    virtual bool containsAnyLiquid(::AABB const& box) const /*override*/;

    virtual bool containsMaterial(::AABB const& box, ::MaterialType material) const /*override*/;

    virtual void blockEvent(::BlockPos const& pos, int b0, int b1) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    ) /*override*/;

    virtual void
    fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const
        /*override*/;

    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks) /*override*/;

    virtual ::std::vector<::AABB>& fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    ) /*override*/;

    virtual void fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const /*override*/;

    virtual void fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const /*override*/;

    virtual ::AABB getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::HitResult clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock,
        bool                                                                     stopOnFirstLiquidHit
    ) const /*override*/;

    virtual ::HitResult clip(::ClipParameters const& parameters) const /*override*/;

    virtual bool isInWall(::Vec3 const& pos) const /*override*/;

    virtual bool isUnderWater(::BlockPos const& pos, ::Block const& block) const /*override*/;

    virtual void fireBlockChanged(
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::BlockChangedEventTarget,
        ::ActorBlockSyncMessage const*,
        ::Actor*
    ) /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& pos, uint layer) const /*override*/;

    virtual ::BlockActor const* getBlockEntity(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getLiquidBlock(::BlockPos const& pos) const /*override*/;

    virtual bool hasBlock(::BlockPos const& pos) const /*override*/;

    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    ) /*override*/;

    virtual bool setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) /*override*/;

    virtual bool removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext) /*override*/;

    virtual bool isSolidBlockingBlock(int x, int y, int z) const /*override*/;

    virtual bool isSolidBlockingBlock(::BlockPos const& p) const /*override*/;

    virtual ::ILevel& getILevel() const /*override*/;

    virtual ::LevelSeed64 getLevelSeed64() const /*override*/;

    virtual ::ChunkSource& getChunkSource() /*override*/;

    virtual bool checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) /*override*/;

    virtual bool checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) /*override*/;

    virtual void postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSource(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& source,
        bool           publicSource,
        bool           allowUnpopulatedChunks,
        bool           allowClientTickingChanges
    );

    MCAPI void _addToTickingQueue(
        ::BlockPos const&  pos,
        ::Block const&     block,
        int                tickDelay,
        int                priorityOffset,
        ::TickingQueueType queueType,
        bool               skipOverrides
    );

    MCAPI void _blockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 previousBlock,
        int                            updateFlags,
        bool                           fireEvent,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
    );

    MCAPI void _fetchBorderBlockCollisions(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        bool
    ) const;

    MCAPI void _fetchEntityHelper(
        ::WeakEntityRef const&                              entityRef,
        ::gsl::span<::gsl::not_null<::Actor const*>> const& ignoredEntities,
        ::AABB const&                                       bb,
        bool                                                useHitbox
    );

    MCAPI void _fetchEntityHelper(
        ::WeakEntityRef const&          entityRef,
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    );

    MCAPI bool _getBlockPermissions(::BlockPos const& pos, bool currentState);

    MCAPI ::Brightness
    _getRawBrightness(::BlockPos const& pos, ::Brightness skyDarken, bool propagate, bool accountForNight) const;

    MCAPI void _removeFromTickingQueue(::BlockPos const& pos, ::Block const& block, ::TickingQueueType queueType);

    MCAPI void _updateTallestCollisionShapeWithBorderBlockCollisions(
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::AABB&                                            result,
        ::Vec3 const&                                      posToMinimizeDistanceToIfMatchingHeight,
        float&                                             currentDistanceSqr
    ) const;

    MCAPI void addToRandomTickingQueuePercentChance(
        ::BlockPos const& pos,
        ::Block const&    block,
        float             percentChance,
        int               priorityOffset,
        bool              skipOverrides
    );

    MCAPI void addToTickingQueue(
        ::BlockPos const& pos,
        ::Block const&    block,
        int               tickDelay,
        int               priorityOffset,
        bool              skipOverrides
    );

    MCAPI bool areChunksFullyLoaded(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI_C void blockEvent(int x, int y, int z, int b0, int b1);

    MCAPI bool canProvideSupport(::BlockPos const& pos, uchar face, ::BlockSupportType type) const;

    MCAPI bool canSeeSky(::BlockPos const& pos) const;

    MCAPI bool canSeeSkyFromBelowWater(::BlockPos const& pos);

    MCAPI bool containsAnyBlockInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI bool containsAnyBlockOfType(::BlockPos const& min, ::BlockPos const& max, ::Block const& type) const;

    MCAPI bool containsAnySolidBlocking(::AABB const& box) const;

    MCAPI uint64 countBlocksOfType(
        ::BlockDescriptor const& blockDescriptor,
        ::BlockPos const&        min,
        ::BlockPos const&        max,
        uint64                   maxCount
    ) const;

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    fetchActors(::ActorDefinitionIdentifier const& actorId, ::AABB const& bb);

    MCAPI ::std::vector<::BlockActor*> fetchBlockEntities(::BlockActorType blockActorTypeId, ::AABB const& bb) const;

    MCAPI_S ::std::vector<::BlockActor*> const& fetchBlockEntities(::AABB const& bb);

    MCAPI_C void
    fetchBlockEntities(::AABB const& bb, ::std::vector<::BlockActor*>& blockEntityList, bool withPreservedEntities);

    MCAPI bool fetchBlocks(::BlockPos const& origin, ::BlockVolume& volume) const;

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBoxSorted(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const> fetchBlocksInCylinder(
        ::BlockPos const&                     centerPos,
        uint                                  radius,
        uint                                  height,
        ::std::function<bool(::Block const&)> predicate
    );

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const> fetchBlocksInCylinderSorted(
        ::BlockPos const&                     centerPos,
        uint                                  radius,
        uint                                  height,
        ::std::function<bool(::Block const&)> predicate
    );

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        bool                                         useHitbox,
        bool                                         getDisplayEntities
    );

    MCAPI ::std::vector<::Actor*> const& fetchEntities2(::ActorType type, ::AABB const& aabb, bool ignoreTargetType);

    MCAPI ::Actor* fetchNearestEntityOfType(::Actor const* except, ::AABB const& bb, ::ActorType entityTypeId);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    fetchPlayers(::AABB const& bb, ::Actor const* except, ::std::function<bool(::Actor*)> selector);

    MCAPI bool findNextTopSolidBlockUnder(::BlockPos& pos);

    MCAPI void fireBlockEntityChanged(::BlockActor& te);

    MCAPI ::Biome const& getBiome(::BlockPos const& pos) const;

    MCAPI_C ::BiomeIdLatticeBatch getBiomeIdsInBatch(::BlockPos const& centerPos, int areaOffset, int gridOffset) const;

    MCAPI ::BlockActor* getBlockEntity(::BlockPos const&);

    MCAPI_C ::BrightnessPair getLightColor(::BlockPos const& pos, ::Brightness minBlockLight) const;

    MCAPI float getSeenPercent(::Vec3 const& center, ::AABB const& bb);

    MCAPI int getSkylightBrightness(::BlockPos const& pos) const;

    MCAPI_C ::Biome const& getSurfaceBiome(::BlockPos const& pos) const;

    MCAPI void getTallestCollisionShapeFromUnloadedChunksAABBs(
        ::AABB const& intersectTestBox,
        ::AABB&       tallestCollisionShape,
        ::Vec3 const& posToMinimizeDistanceToIfMatchingHeight,
        float&        currentDistanceSqr
    ) const;

    MCAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI bool hasTickInCurrentTick(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::Block const& block, ::TickingQueueType queueType) const;

    MCAPI bool
    hasTickInPendingTicks(::BlockPos const& pos, ::BlockType const& block, ::TickingQueueType queueType) const;

    MCAPI bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const;

    MCAPI_C bool isEmptyBlock(::BlockPos const& pos) const;

    MCAPI bool isNearUnloadedChunks(::ChunkPos const& pos) const;

    MCAPI_C bool isPositionUnderSnow(::Vec3 const& p);

    MCAPI bool isTouchingMaterial(::BlockPos const& pos, ::MaterialType type) const;

    MCAPI bool isWithinHeightLimits(int y) const;

    MCAPI void neighborChanged(::BlockPos const& neighPos, ::BlockPos const& myPos);

    MCAPI void
    postGameEvent(::Actor* source, ::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);

    MCAPI ::std::shared_ptr<::BlockActor> removeBlockEntity(::BlockPos const& blockPos);

    MCAPI bool setBlock(
        ::BlockPos const&               pos,
        ::Block const&                  block,
        int                             updateFlags,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::ActorBlockSyncMessage const*  syncMsg,
        ::BlockChangeContext const&     changeSourceContext
    );

    MCAPI bool setBlockAndRetainCompatibleBlockActor(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI void setBorderBlock(::BlockPos const& pos, bool val);

    MCAPI bool setExtraBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI bool setLiquidBlock(::BlockPos const& pos, ::Block const& block, bool useExtraData, int updateFlags);

    MCAPI_C ::Biome const* tryGetBiome(::BlockPos const& pos) const;

    MCAPI void updateConnectionsAt(::BlockPos const& pos);

    MCAPI void updateNeighborsAt(::BlockPos const& pos);

    MCAPI void updateNeighborsAtExceptFromFacing(::BlockPos const& pos, int skipFacing);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool containsAnyLiquid(::IConstBlockSource const& region, ::AABB const& box);

    MCAPI static bool containsMaterial(::IConstBlockSource const& region, ::AABB const& box, ::MaterialType material);

    MCFOLD static ::Block const& getEmptyBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& source,
        bool           publicSource,
        bool           allowUnpopulatedChunks,
        bool           allowClientTickingChanges
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::WeakRef<::BlockSource> $getWeakRef();

    MCFOLD ::Level& $getLevel();

    MCFOLD ::Dimension& $getDimension() const;

    MCFOLD ::Dimension const& $getDimensionConst() const;

    MCAPI ::DimensionType $getDimensionId() const;

    MCAPI bool $shouldFireEvents(::LevelChunk const& c) const;

    MCAPI bool $isInstaticking(::BlockPos const& pos) const;

    MCAPI void $addListener(::BlockSourceListener& l);

    MCAPI void $removeListener(::BlockSourceListener& l);

    MCAPI ::LevelChunk* $getChunk(int x, int z) const;

    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos) const;

    MCAPI ::LevelChunk* $getChunkAt(::BlockPos const& pos) const;

    MCAPI short $getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
    ) const;

    MCAPI short $getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const;

    MCAPI short $getHeight(::std::function<bool(::Block const&)> const& type, ::BlockPos const& pos) const;

    MCAPI short $getHeight(::std::function<bool(::Block const&)> const& type, int x, int z) const;

    MCAPI ::Material const& $getMaterial(::BlockPos const& pos) const;

    MCAPI ::Material const& $getMaterial(int x, int y, int z) const;

    MCAPI short $getMaxHeight() const;

    MCAPI short $getMinHeight() const;

    MCAPI bool $hasBorderBlock(::BlockPos const pos) const;

    MCAPI float $getBrightness(::BlockPos const& pos) const;

    MCAPI bool $mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    );

    MCAPI bool $canDoBlockDrops() const;

    MCAPI bool $canDoContainedItemDrops() const;

    MCAPI bool $hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const;

    MCAPI bool $areChunksFullyLoaded(::BlockPos const& pos, int r) const;

    MCAPI bool $containsAnyLiquid(::AABB const& box) const;

    MCAPI bool $containsMaterial(::AABB const& box, ::MaterialType material) const;

    MCAPI void $blockEvent(::BlockPos const& pos, int b0, int b1);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> $fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    );

    MCAPI void
    $fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const;

    MCAPI ::std::vector<::AABB>& $fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks);

    MCAPI ::std::vector<::AABB>& $fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    );

    MCAPI void $fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const;

    MCAPI void $fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const;

    MCAPI ::AABB $getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::HitResult $clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock,
        bool                                                                     stopOnFirstLiquidHit
    ) const;

    MCAPI ::HitResult $clip(::ClipParameters const& parameters) const;

    MCAPI bool $isInWall(::Vec3 const& pos) const;

    MCAPI bool $isUnderWater(::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos, uint layer) const;

    MCFOLD ::BlockActor const* $getBlockEntity(::BlockPos const& pos) const;

    MCAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getLiquidBlock(::BlockPos const& pos) const;

    MCAPI bool $hasBlock(::BlockPos const& pos) const;

    MCAPI bool $setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    );

    MCAPI bool $setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI bool $removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext);

    MCAPI bool $isSolidBlockingBlock(int x, int y, int z) const;

    MCAPI bool $isSolidBlockingBlock(::BlockPos const& p) const;

    MCFOLD ::ILevel& $getILevel() const;

    MCAPI ::LevelSeed64 $getLevelSeed64() const;

    MCFOLD ::ChunkSource& $getChunkSource();

    MCAPI bool $checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCAPI bool $checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCAPI void $postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
