#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockDataFetchResult.h"
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
class BlockDescriptor;
class BlockLegacy;
class BlockPos;
class BlockSourceListener;
class BlockTickingQueue;
class BlockVolume;
class BoundingBox;
class ChunkPos;
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
struct Bounds;
struct Brightness;
struct BrightnessPair;
struct ClipParameters;
struct Tick;
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
    ::ll::TypedStorage<1, 1, bool>                                            mCheckValidity;
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                                  mChunkSource;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                    mDimension;
    ::ll::TypedStorage<2, 2, short const>                                     mMaxHeight;
    ::ll::TypedStorage<2, 2, short const>                                     mMinHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDataFetchResult<::Block>>> mTempBlockFetchResult;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowTickingChanges;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mPlaceChunkPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceListener*>>          mListeners;
    ::ll::TypedStorage<8, 8, ::Tick>                                          mCurrentTickForValidityChecks;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSource() /*override*/;

    // vIndex: 25
    virtual ::WeakRef<::BlockSource> getWeakRef() /*override*/;

    // vIndex: 39
    virtual ::Level& getLevel() /*override*/;

    // vIndex: 34
    virtual ::Dimension& getDimension() const /*override*/;

    // vIndex: 33
    virtual ::Dimension& getDimension() /*override*/;

    // vIndex: 35
    virtual ::Dimension const& getDimensionConst() const /*override*/;

    // vIndex: 17
    virtual ::DimensionType getDimensionId() const /*override*/;

    // vIndex: 53
    virtual bool isInstaticking(::BlockPos const& pos) const /*override*/;

    // vIndex: 26
    virtual void addListener(::BlockSourceListener& l) /*override*/;

    // vIndex: 27
    virtual void removeListener(::BlockSourceListener& l) /*override*/;

    // vIndex: 38
    virtual ::LevelChunk* getChunk(int x, int z) const /*override*/;

    // vIndex: 37
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) const /*override*/;

    // vIndex: 36
    virtual ::LevelChunk* getChunkAt(::BlockPos const& pos) const /*override*/;

    // vIndex: 42
    virtual short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const /*override*/;

    // vIndex: 44
    virtual short getHeight(::std::function<bool(::Block const&)> const& type, ::BlockPos const& pos) const
        /*override*/;

    // vIndex: 43
    virtual short getHeight(::std::function<bool(::Block const&)> const& type, int x, int z) const /*override*/;

    // vIndex: 12
    virtual ::Material const& getMaterial(::BlockPos const& pos) const /*override*/;

    // vIndex: 11
    virtual ::Material const& getMaterial(int x, int y, int z) const /*override*/;

    // vIndex: 32
    virtual short getMaxHeight() const /*override*/;

    // vIndex: 31
    virtual short getMinHeight() const /*override*/;

    // vIndex: 13
    virtual bool hasBorderBlock(::BlockPos const pos) const /*override*/;

    // vIndex: 22
    virtual float getBrightness(::BlockPos const& pos) const /*override*/;

    // vIndex: 6
    virtual ::Block const& getLiquidBlock(::BlockPos const& p) const /*override*/;

    // vIndex: 5
    virtual ::Block const& getExtraBlock(::BlockPos const& p) const /*override*/;

    // vIndex: 50
    virtual bool mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    ) /*override*/;

    // vIndex: 7
    virtual bool hasBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 51
    virtual bool canDoBlockDrops() const /*override*/;

    // vIndex: 52
    virtual bool canDoContainedItemDrops() const /*override*/;

    // vIndex: 16
    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const /*override*/;

    // vIndex: 15
    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const /*override*/;

    // vIndex: 14
    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const /*override*/;

    // vIndex: 49
    virtual bool areChunksFullyLoaded(::BlockPos const& pos, int r) const /*override*/;

    // vIndex: 8
    virtual bool containsAnyLiquid(::AABB const& box) const /*override*/;

    // vIndex: 9
    virtual bool containsMaterial(::AABB const& box, ::MaterialType material) const /*override*/;

    // vIndex: 4
    virtual ::BlockActor const* getBlockEntity(::BlockPos const& pos) const /*override*/;

    // vIndex: 29
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) /*override*/;

    // vIndex: 28
    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    ) /*override*/;

    // vIndex: 18
    virtual void
    fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const
        /*override*/;

    // vIndex: 23
    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks) /*override*/;

    // vIndex: 24
    virtual ::std::vector<::AABB>& fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    ) /*override*/;

    // vIndex: 19
    virtual void fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const /*override*/;

    // vIndex: 20
    virtual void fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const /*override*/;

    // vIndex: 21
    virtual ::AABB getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 45
    virtual ::HitResult clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock
    ) const /*override*/;

    // vIndex: 10
    virtual bool isUnderWater(::Vec3 const& pos, ::Block const& block) const /*override*/;

    // vIndex: 3
    virtual ::Block const& getBlock(int x, int y, int z) const /*override*/;

    // vIndex: 2
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 1
    virtual ::Block const& getBlock(::BlockPos const& pos, uint layer) const /*override*/;

    // vIndex: 30
    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    // vIndex: 47
    virtual bool isSolidBlockingBlock(int x, int y, int z) const /*override*/;

    // vIndex: 48
    virtual bool isSolidBlockingBlock(::BlockPos const& p) const /*override*/;

    // vIndex: 56
    virtual bool removeBlock(::BlockPos const& pos) /*override*/;

    // vIndex: 40
    virtual ::ILevel& getILevel() const /*override*/;

    // vIndex: 41
    virtual ::LevelSeed64 getLevelSeed64() const /*override*/;

    // vIndex: 46
    virtual ::ChunkSource& getChunkSource() /*override*/;

    // vIndex: 55
    virtual bool checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) /*override*/;

    // vIndex: 57
    virtual void postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    ) /*override*/;

    // vIndex: 54
    virtual void updateCheckForValidityState(bool checkForValidity) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSource(::ChunkSource& source, bool publicSource, bool allowUnpopulatedChunks);

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
        ::WeakEntityRef                              entityRef,
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        bool                                         useHitbox
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

    MCAPI void addToRandomTickingQueue(
        ::BlockPos const& pos,
        ::Block const&    block,
        int               tickDelay,
        int               priorityOffset,
        bool              skipOverrides
    );

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

    MCAPI bool allowsRunes(::BlockPos const& pos);

    MCAPI bool areAllChunksLoaded(::BlockPos const& origin, ::BlockVolume& volume) const;

    MCAPI bool areChunksFullyLoaded(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI void blockEvent(::BlockPos const& pos, int b0, int b1);

    MCAPI bool canProvideSupport(::BlockPos const& pos, uchar face, ::BlockSupportType type) const;

    MCAPI bool canSeeSky(::BlockPos const& pos) const;

    MCAPI bool canSeeSky(int x, int y, int z) const;

    MCAPI bool canSeeSkyFromBelowWater(::BlockPos const& pos);

    MCAPI bool checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCAPI void checkValidity() const;

    MCAPI ::HitResult clip(::ClipParameters const& parameters) const;

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

    MCAPI ::std::vector<::BlockActor*> const& fetchBlockEntities(::AABB const& bb);

    MCAPI void
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

    MCAPI bool findNextTopSolidBlockAbove(::BlockPos& pos);

    MCAPI bool findNextTopSolidBlockUnder(::BlockPos& pos);

    MCAPI void fireAreaChanged(::BlockPos const& min, ::BlockPos const& max);

    MCAPI void fireBlockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            flags,
        ::BlockChangedEventTarget      eventTarget,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       source
    );

    MCAPI void fireBlockEntityAboutToBeRemoved(::std::shared_ptr<::BlockActor> te);

    MCAPI void fireBlockEntityChanged(::BlockActor& te);

    MCAPI void fireBrightnessChanged(::BlockPos const& pos);

    MCAPI void fireEntityChanged(::Actor& entity);

    MCAPI ::std::vector<::AABB>& getAABBFetchResultCache();

    MCAPI short
    getAboveTopSolidBlock(::BlockPos const& pos, bool includeWater, bool includeLeaves, bool iteratePastInitialBlocking)
        const;

    MCAPI short getAllocatedHeightAt(::BlockPos const& xzPos);

    MCAPI ::Biome const& getBiome(::BlockPos const& pos) const;

    MCAPI ::BlockActor* getBlockEntity(::BlockPos const&);

    MCAPI ::BlockActor* getBlockEntity(int x, int y, int z);

    MCAPI ::BrightnessPair getBrightnessPair(::BlockPos const& pos) const;

    MCAPI ::BrightnessPair getDefaultBrightness() const;

    MCAPI short getHeightmap(::BlockPos const& pos) const;

    MCAPI short getHeightmap(int x, int z);

    MCAPI ::BlockPos getHeightmapPos(::BlockPos const& xzPos) const;

    MCAPI ::Level& getLevel() const;

    MCAPI ::Level const& getLevelConst() const;

    MCAPI bool getNextTickUpdateForPos(::BlockPos const& pos, ::TickingQueueType queueType, ::Tick& tick) const;

    MCAPI bool getPublicSource() const;

    MCAPI ::Brightness getRawBrightness(::BlockPos const& pos, bool propagate, bool accountForNight) const;

    MCAPI ::Brightness getRawBrightnessWithManualDarken(
        ::BlockPos const& pos,
        ::Brightness      manualSkyDarken,
        bool              propagate,
        bool              accountForNight
    ) const;

    MCAPI float getSeenPercent(::Vec3 const& center, ::AABB const& bb);

    MCAPI void getTallestCollisionShapeFromUnloadedChunksAABBs(
        ::AABB const& intersectTestBox,
        ::AABB&       tallestCollisionShape,
        ::Vec3 const& posToMinimizeDistanceToIfMatchingHeight,
        float&        currentDistanceSqr
    ) const;

    MCAPI ::BlockTickingQueue*
    getTickingQueue(::BlockPos const& pos, ::TickingQueueType queueType, bool skipOverrides) const;

    MCAPI short getVoidHeight() const;

    MCAPI ::LevelChunk* getWritableChunk(::ChunkPos const& pos);

    MCAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI bool hasTickInCurrentTick(::BlockPos const& pos) const;

    MCAPI bool hasTickInCurrentTick(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::BlockLegacy const& block) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::Block const& block, ::TickingQueueType queueType) const;

    MCAPI bool
    hasTickInPendingTicks(::BlockPos const& pos, ::BlockLegacy const& block, ::TickingQueueType queueType) const;

    MCAPI bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const;

    MCAPI bool isChunkFullyLoaded(::ChunkPos const& chunkPos, ::ChunkSource const& chunkSource) const;

    MCAPI bool isConsideredSolidBlock(::BlockPos const& pos) const;

    MCAPI bool isEmptyBlock(::BlockPos const& pos) const;

    MCAPI bool isEmptyBlock(int x, int y, int z);

    MCAPI bool isEmptyWaterBlock(::BlockPos const& pos) const;

    MCAPI bool isInWall(::Vec3 const& pos) const;

    MCAPI bool isNearUnloadedChunks(::ChunkPos const& pos) const;

    MCAPI bool isTouchingMaterial(::BlockPos const& pos, ::MaterialType type) const;

    MCAPI bool isUnobstructedByEntities(::AABB const& aabb, ::Actor const* ignoreEntity);

    MCAPI bool isWithinHeightLimits(int y) const;

    MCAPI void neighborChanged(::BlockPos const& neighPos, ::BlockPos const& myPos);

    MCAPI void
    postGameEvent(::Actor* source, ::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);

    MCAPI bool removeBlock(int x, int y, int z);

    MCAPI ::std::shared_ptr<::BlockActor> removeBlockEntity(::BlockPos const& blockPos);

    MCAPI void removeFromRandomTickingQueue(::BlockPos const& pos, ::Block const& block);

    MCAPI void removeFromTickingQueue(::BlockPos const& pos, ::Block const& block);

    MCAPI bool setBlock(
        ::BlockPos const&               pos,
        ::Block const&                  block,
        int                             updateFlags,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::ActorBlockSyncMessage const*  syncMsg,
        ::Actor*                        blockChangeSource
    );

    MCAPI bool setBlock(int x, int y, int z, ::Block const& block, int updateFlags, ::Actor* blockChangeSource);

    MCAPI bool setBlockNoUpdate(int x, int y, int z, ::Block const& block);

    MCAPI bool setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI void setBorderBlock(::BlockPos const& pos, bool val);

    MCAPI void setCurrentTickForValidityChecks(::Tick const& tick);

    MCAPI bool setExtraBlock(::BlockPos const& p, ::Block const& block, int updateFlags);

    MCAPI bool setExtraBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI void setIsPersistentBlockSource();

    MCAPI bool setLiquidBlock(::BlockPos const& pos, ::Block const& block, bool useExtraData, int updateFlags);

    MCAPI void setRandomTickingQueue(::BlockTickingQueue& queue);

    MCAPI void setTickingQueue(::BlockTickingQueue& queue);

    MCAPI bool shouldFireEvents(::LevelChunk& c) const;

    MCAPI int ticksFromNow(::BlockPos const& pos, ::TickingQueueType queueType, int offset) const;

    MCAPI ::Biome const* tryGetBiome(::BlockPos const& pos) const;

    MCAPI void updateNeighborsAt(::BlockPos const& pos);

    MCAPI void updateNeighborsAtExceptFromFacing(::BlockPos const& pos, ::BlockPos const& neighborPos, int skipFacing);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool doesIntersect(
        ::IConstBlockSource const&          region,
        ::AABB const&                       testAABB,
        ::GetCollisionShapeInterface const& entity,
        ::std::vector<::AABB>&              storage,
        bool                                withUnloadedChunks
    );

    MCAPI static ::Block const& getEmptyBlock();

    MCAPI static bool isEmptyBlock(::Block const& block);

    MCAPI static bool isEmptyWaterBlock(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkSource& source, bool publicSource, bool allowUnpopulatedChunks);

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

    MCAPI ::Level& $getLevel();

    MCAPI ::Dimension& $getDimension() const;

    MCAPI ::Dimension& $getDimension();

    MCAPI ::Dimension const& $getDimensionConst() const;

    MCAPI ::DimensionType $getDimensionId() const;

    MCAPI bool $isInstaticking(::BlockPos const& pos) const;

    MCAPI void $addListener(::BlockSourceListener& l);

    MCAPI void $removeListener(::BlockSourceListener& l);

    MCAPI ::LevelChunk* $getChunk(int x, int z) const;

    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos) const;

    MCAPI ::LevelChunk* $getChunkAt(::BlockPos const& pos) const;

    MCAPI short $getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const;

    MCAPI short $getHeight(::std::function<bool(::Block const&)> const& type, ::BlockPos const& pos) const;

    MCAPI short $getHeight(::std::function<bool(::Block const&)> const& type, int x, int z) const;

    MCAPI ::Material const& $getMaterial(::BlockPos const& pos) const;

    MCAPI ::Material const& $getMaterial(int x, int y, int z) const;

    MCAPI short $getMaxHeight() const;

    MCAPI short $getMinHeight() const;

    MCAPI bool $hasBorderBlock(::BlockPos const pos) const;

    MCAPI float $getBrightness(::BlockPos const& pos) const;

    MCAPI ::Block const& $getLiquidBlock(::BlockPos const& p) const;

    MCAPI ::Block const& $getExtraBlock(::BlockPos const& p) const;

    MCAPI bool $mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    );

    MCAPI bool $hasBlock(::BlockPos const& pos) const;

    MCAPI bool $canDoBlockDrops() const;

    MCAPI bool $canDoContainedItemDrops() const;

    MCAPI bool $hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const;

    MCAPI bool $areChunksFullyLoaded(::BlockPos const& pos, int r) const;

    MCAPI bool $containsAnyLiquid(::AABB const& box) const;

    MCAPI bool $containsMaterial(::AABB const& box, ::MaterialType material) const;

    MCAPI ::BlockActor const* $getBlockEntity(::BlockPos const& pos) const;

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
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock
    ) const;

    MCAPI bool $isUnderWater(::Vec3 const& pos, ::Block const& block) const;

    MCAPI ::Block const& $getBlock(int x, int y, int z) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos, uint layer) const;

    MCAPI bool $setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
    );

    MCAPI bool $isSolidBlockingBlock(int x, int y, int z) const;

    MCAPI bool $isSolidBlockingBlock(::BlockPos const& p) const;

    MCAPI bool $removeBlock(::BlockPos const& pos);

    MCAPI ::ILevel& $getILevel() const;

    MCAPI ::LevelSeed64 $getLevelSeed64() const;

    MCAPI ::ChunkSource& $getChunkSource();

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

    MCAPI void $updateCheckForValidityState(bool checkForValidity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
