#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/TickingQueueType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/utils/BlockActorType.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

class BlockSource {
public:
    // prevent constructor by default
    BlockSource& operator=(BlockSource const&);
    BlockSource(BlockSource const&);
    BlockSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSource();

    // vIndex: 1
    virtual class Block const& getBlock(int x, int y, int z) const;

    // vIndex: 2
    virtual class Block const& getBlock(class BlockPos const& pos) const;

    // vIndex: 3
    virtual class Block const& getBlock(class BlockPos const& pos, uint layer) const;

    // vIndex: 4
    virtual class BlockActor const* getBlockEntity(class BlockPos const& pos) const;

    // vIndex: 5
    virtual class Block const& getExtraBlock(class BlockPos const& p) const;

    // vIndex: 6
    virtual class Block const& getLiquidBlock(class BlockPos const& p) const;

    // vIndex: 7
    virtual bool hasBlock(class BlockPos const& pos) const;

    // vIndex: 8
    virtual bool removeBlock(class BlockPos const& pos);

    // vIndex: 9
    virtual bool containsAnyLiquid(class AABB const& box) const;

    // vIndex: 10
    virtual bool containsMaterial(class AABB const& box, ::MaterialType material) const;

    // vIndex: 11
    virtual bool isUnderWater(class Vec3 const& pos, class Block const& block) const;

    // vIndex: 12
    virtual class Material const& getMaterial(class BlockPos const& pos) const;

    // vIndex: 13
    virtual class Material const& getMaterial(int x, int y, int z) const;

    // vIndex: 14
    virtual bool hasBorderBlock(class BlockPos pos) const;

    // vIndex: 15
    virtual class LevelChunk* getChunkAt(class BlockPos const& pos) const;

    // vIndex: 16
    virtual bool hasChunksAt(struct Bounds const& bounds, bool) const;

    // vIndex: 17
    virtual bool hasChunksAt(class BlockPos const& pos, int r, bool) const;

    // vIndex: 18
    virtual bool hasChunksAt(class AABB const& bb, bool) const;

    // vIndex: 19
    virtual DimensionType getDimensionId() const;

    // vIndex: 20
    virtual void
    fetchAABBs(std::vector<class AABB>&, class AABB const& intersectTestBox, bool withUnloadedChunks) const;

    // vIndex: 21
    virtual void
    fetchCollisionShapes(std::vector<class AABB>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>, std::vector<class AABB>*)
        const;

    // vIndex: 22
    virtual void
    fetchCollisionShapesAndBlocks(std::vector<struct BlockSourceVisitor::CollisionShape>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>, std::vector<class AABB>*)
        const;

    // vIndex: 23
    virtual class AABB getTallestCollisionShape(
        class AABB const&                                          intersectTestBox,
        float*                                                     actualSurfaceOffset,
        bool                                                       withUnloadedChunks,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 24
    virtual float getBrightness(class BlockPos const& pos) const;

    // vIndex: 25
    virtual void postGameEvent(
        class Actor* source,
        class GameEvent const&,
        class BlockPos const& origin,
        class Block const*    affectedBlock
    );

    // vIndex: 26
    virtual std::vector<class AABB>& fetchAABBs(class AABB const& intersectTestBox, bool withUnloadedChunks);

    // vIndex: 27
    virtual std::vector<class AABB>&
    fetchCollisionShapes(class AABB const&, bool, std::optional<class EntityContext const>, std::vector<class AABB>*);

    // vIndex: 28
    virtual class WeakRef<class BlockSource> getWeakRef();

    // vIndex: 29
    virtual void addListener(class BlockSourceListener& l);

    // vIndex: 30
    virtual void removeListener(class BlockSourceListener& l);

    // vIndex: 31
    virtual gsl::span<gsl::not_null<class Actor*>>
    fetchEntities(class Actor const* except, class AABB const& bb, bool useHitbox, bool);

    // vIndex: 32
    virtual gsl::span<gsl::not_null<class Actor*>>
    fetchEntities(::ActorType, class AABB const&, class Actor const*, std::function<bool(class Actor*)>);

    // vIndex: 33
    virtual bool
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags, struct ActorBlockSyncMessage const* syncMsg, class Actor*);

    // vIndex: 34
    virtual short getMinHeight() const;

    // vIndex: 35
    virtual short getMaxHeight() const;

    // vIndex: 36
    virtual class Dimension& getDimension() const;

    // vIndex: 37
    virtual class Dimension& getDimension();

    // vIndex: 38
    virtual class Dimension const& getDimensionConst() const;

    // vIndex: 39
    virtual class LevelChunk* getChunk(int x, int z) const;

    // vIndex: 40
    virtual class LevelChunk* getChunk(class ChunkPos const& pos) const;

    // vIndex: 41
    virtual class Level& getLevel();

    // vIndex: 42
    virtual class ILevel& getILevel() const;

    // vIndex: 43
    virtual class HitResult
    clip(class Vec3 const& A, class Vec3 const& B, bool, ::ShapeType solidOnly, int maxDistance, bool ignoreBorderBlocks, bool fullOnly, class Actor* player, std::function<bool(class BlockSource const&, class Block const&, bool)> const&)
        const;

    // vIndex: 44
    virtual class ChunkSource& getChunkSource();

    // vIndex: 45
    virtual bool isSolidBlockingBlock(class BlockPos const& p) const;

    // vIndex: 46
    virtual bool isSolidBlockingBlock(int x, int y, int z) const;

    // vIndex: 47
    virtual bool areChunksFullyLoaded(class BlockPos const& pos, int r) const;

    // vIndex: 48
    virtual bool canDoBlockDrops() const;

    // vIndex: 49
    virtual bool canDoContainedItemDrops() const;

    // vIndex: 50
    virtual bool isInstaticking(class BlockPos const& pos) const;

    // vIndex: 51
    virtual void updateCheckForValidityState(bool);

    // vIndex: 52
    virtual bool checkBlockPermissions(
        class Actor&               entity,
        class BlockPos const&      blockPos,
        uchar                      face,
        class ItemStackBase const& item,
        bool                       generateParticle
    );

    MCAPI BlockSource(class ChunkSource& source, bool publicSource, bool allowUnpopulatedChunks);

    MCAPI BlockSource(
        class Level&       level,
        class Dimension&   dimension,
        class ChunkSource& source,
        bool               publicSource,
        bool               allowUnpopulatedChunks,
        bool
    );

    MCAPI void addToRandomTickingQueue(
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset,
        bool
    );

    MCAPI void addToRandomTickingQueuePercentChance(
        class BlockPos const& pos,
        class Block const&    block,
        float                 percentChance,
        int                   priorityOffset,
        bool
    );

    MCAPI void
    addToTickingQueue(class BlockPos const& pos, class Block const& block, int tickDelay, int priorityOffset, bool);

    MCAPI bool allowsRunes(class BlockPos const& pos);

    MCAPI bool areAllChunksLoaded(class BlockPos const& origin, class BlockVolume& volume) const;

    MCAPI bool areChunksFullyLoaded(class BlockPos const& min, class BlockPos const& max) const;

    MCAPI void blockEvent(class BlockPos const& pos, int b0, int b1);

    MCAPI bool canProvideSupport(class BlockPos const& pos, uchar face, ::BlockSupportType type) const;

    MCAPI bool canSeeSky(class BlockPos const& pos) const;

    MCAPI bool canSeeSky(int x, int y, int z) const;

    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const& pos);

    MCAPI bool checkBlockDestroyPermissions(
        class Actor&               entity,
        class BlockPos const&      pos,
        class ItemStackBase const& item,
        bool                       generateParticle
    );

    MCAPI void checkValidity() const;

    MCAPI class HitResult clip(struct ClipParameters const& parameters) const;

    MCAPI bool containsAnyBlockInBox(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    MCAPI bool
    containsAnyBlockOfType(class BlockPos const& min, class BlockPos const& max, class Block const& type) const;

    MCAPI bool containsAnySolidBlocking(class AABB const& box) const;

    MCAPI uint64 countBlocksOfType(
        class BlockDescriptor const& blockDescriptor,
        class BlockPos const&        min,
        class BlockPos const&        max,
        uint64                       maxCount
    ) const;

    MCAPI gsl::span<gsl::not_null<class Actor*>>
          fetchActors(struct ActorDefinitionIdentifier const& actorId, class AABB const& bb);

    MCAPI std::vector<class BlockActor*> fetchBlockEntities(::BlockActorType, class AABB const& bb) const;

    MCAPI std::vector<class BlockActor*> const& fetchBlockEntities(class AABB const& bb);

    MCAPI void fetchBlockEntities(class AABB const& bb, std::vector<class BlockActor*>& blockEntityList, bool);

    MCAPI bool fetchBlocks(class BlockPos const& origin, class BlockVolume& volume) const;

    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBox(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBoxSorted(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    MCAPI gsl::span<class BlockDataFetchResult<class Block> const> fetchBlocksInCylinder(
        class BlockPos const&                   centerPos,
        uint                                    radius,
        uint                                    height,
        std::function<bool(class Block const&)> predicate
    );

    MCAPI gsl::span<class BlockDataFetchResult<class Block> const> fetchBlocksInCylinderSorted(
        class BlockPos const&                   centerPos,
        uint                                    radius,
        uint                                    height,
        std::function<bool(class Block const&)> predicate
    );

    MCAPI gsl::span<gsl::not_null<class Actor*>> fetchEntities(
        gsl::span<gsl::not_null<class Actor const*>> ignoredEntities,
        class AABB const&                            bb,
        bool                                         useHitbox,
        bool
    );

    MCAPI std::vector<class Actor*> const&
          fetchEntities2(::ActorType type, class AABB const& aabb, bool ignoreTargetType);

    MCAPI class Actor*
    fetchNearestEntityOfType(class Actor const* except, class AABB const& bb, ::ActorType entityTypeId);

    MCAPI bool findNextTopSolidBlockAbove(class BlockPos& pos);

    MCAPI bool findNextTopSolidBlockUnder(class BlockPos& pos);

    MCAPI void fireAreaChanged(class BlockPos const& min, class BlockPos const& max);

    MCAPI void fireBlockChanged(
        class BlockPos const& pos,
        uint                  layer,
        class Block const&    block,
        class Block const&    oldBlock,
        int                   flags,
        ::BlockChangedEventTarget,
        struct ActorBlockSyncMessage const* syncMsg,
        class Actor*                        source
    );

    MCAPI void fireBlockEntityAboutToBeRemoved(std::shared_ptr<class BlockActor> te);

    MCAPI void fireBlockEntityChanged(class BlockActor& te);

    MCAPI void fireBrightnessChanged(class BlockPos const& pos);

    MCAPI void fireEntityChanged(class Actor& entity);

    MCAPI std::vector<class AABB>& getAABBFetchResultCache();

    MCAPI short getAboveTopSolidBlock(class BlockPos const& pos, bool includeWater, bool includeLeaves);

    MCAPI short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves);

    MCAPI short getAllocatedHeightAt(class BlockPos const& xzPos);

    MCAPI class Biome const& getBiome(class BlockPos const& pos) const;

    MCAPI class BlockActor* getBlockEntity(class BlockPos const& pos);

    MCAPI class BlockActor* getBlockEntity(int x, int y, int z);

    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const& pos) const;

    MCAPI struct BrightnessPair getDefaultBrightness() const;

    MCAPI int getGrassColor(class BlockPos const& pos) const;

    MCAPI short getHeightmap(class BlockPos const& pos) const;

    MCAPI short getHeightmap(int x, int z);

    MCAPI class BlockPos getHeightmapPos(class BlockPos const& xzPos) const;

    MCAPI class Level& getLevel() const;

    MCAPI class Level const& getLevelConst() const;

    MCAPI bool
    getNextTickUpdateForPos(class BlockPos const& pos, ::TickingQueueType queueType, struct Tick& tick) const;

    MCAPI bool getPublicSource() const;

    MCAPI struct Brightness getRawBrightness(class BlockPos const& pos, bool propagate, bool accountForNight) const;

    MCAPI struct Brightness
    getRawBrightnessWithManualDarken(class BlockPos const& pos, struct Brightness, bool propagate, bool accountForNight)
        const;

    MCAPI float getSeenPercent(class Vec3 const& center, class AABB const& bb);

    MCAPI class BlockTickingQueue* getTickingQueue(class BlockPos const& pos, ::TickingQueueType queueType, bool) const;

    MCAPI short getVoidHeight() const;

    MCAPI class LevelChunk* getWritableChunk(class ChunkPos const& pos);

    MCAPI bool hasChunksAt(class BlockPos const& min, class BlockPos const& max, bool) const;

    MCAPI std::pair<bool, std::optional<class SubChunkPos>>
          hasSubChunksAt(class BlockPos const& min, class BlockPos const& max) const;

    MCAPI bool hasTickInCurrentTick(class BlockPos const& pos) const;

    MCAPI bool hasTickInCurrentTick(class BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos) const;

    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos, class Block const& block) const;

    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos, class BlockLegacy const& block) const;

    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool
    hasTickInPendingTicks(class BlockPos const& pos, class Block const& block, ::TickingQueueType queueType) const;

    MCAPI bool
    hasTickInPendingTicks(class BlockPos const& pos, class BlockLegacy const& block, ::TickingQueueType queueType)
        const;

    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const& pos, int chunkRadius) const;

    MCAPI bool isChunkFullyLoaded(class ChunkPos const& chunkPos, class ChunkSource const&) const;

    MCAPI bool isConsideredSolidBlock(class BlockPos const& pos) const;

    MCAPI bool isEmptyBlock(class BlockPos const& pos) const;

    MCAPI bool isEmptyBlock(int x, int y, int z);

    MCAPI bool isEmptyWaterBlock(class BlockPos const& pos) const;

    MCAPI bool isInWall(class Vec3 const& pos) const;

    MCAPI bool isNearUnloadedChunks(class ChunkPos const& pos) const;

    MCAPI bool isTouchingMaterial(class BlockPos const& pos, ::MaterialType type) const;

    MCAPI bool isUnobstructedByEntities(class AABB const& aabb, class Actor const* ignoreEntity);

    MCAPI bool
    isUnobstructedByEntities(class AABB const& aabb, gsl::span<gsl::not_null<class Actor const*>> ignoreEntities);

    MCAPI bool isWithinHeightLimits(int y) const;

    MCAPI bool mayPlace(
        class Block const&    block,
        class BlockPos const& pos,
        uchar                 face,
        class Actor*          placer,
        bool                  ignoreEntities,
        class Vec3            clickPos
    );

    MCAPI void neighborChanged(class BlockPos const& neighPos, class BlockPos const& myPos);

    MCAPI void postGameEvent(
        class Actor* source,
        class GameEvent const&,
        class Vec3 const&  origin,
        class Block const* affectedBlock
    );

    MCAPI bool removeBlock(int x, int y, int z);

    MCAPI std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const& blockPos);

    MCAPI void removeFromRandomTickingQueue(class BlockPos const& pos, class Block const& block);

    MCAPI void removeFromTickingQueue(class BlockPos const& pos, class Block const& block);

    MCAPI bool
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags, std::shared_ptr<class BlockActor> blockEntity, struct ActorBlockSyncMessage const* syncMsg, class Actor*);

    MCAPI bool setBlock(int x, int y, int z, class Block const& block, int updateFlags, class Actor*);

    MCAPI bool setBlockNoUpdate(int x, int y, int z, class Block const& block);

    MCAPI bool setBlockSimple(class BlockPos const& pos, class Block const& block);

    MCAPI void setBorderBlock(class BlockPos const& pos, bool val);

    MCAPI void setCurrentTickForValidityChecks(struct Tick const& tick);

    MCAPI bool setExtraBlock(class BlockPos const& p, class Block const& block, int updateFlags);

    MCAPI bool setExtraBlockSimple(class BlockPos const& pos, class Block const& block);

    MCAPI void setIsPersistentBlockSource();

    MCAPI bool setLiquidBlock(class BlockPos const& pos, class Block const& block, bool useExtraData, int updateFlags);

    MCAPI void setRandomTickingQueue(class BlockTickingQueue& queue);

    MCAPI void setTickingQueue(class BlockTickingQueue& queue);

    MCAPI bool shouldFireEvents(class LevelChunk& c) const;

    MCAPI int ticksFromNow(class BlockPos const& pos, ::TickingQueueType queueType, int offset) const;

    MCAPI class Biome const* tryGetBiome(class BlockPos const& pos) const;

    MCAPI void updateNeighborsAt(class BlockPos const& pos);

    MCAPI void
    updateNeighborsAtExceptFromFacing(class BlockPos const& pos, class BlockPos const& neighborPos, int skipFacing);

    MCAPI static bool
    containsMaterial(class IConstBlockSource const& region, class AABB const& box, ::MaterialType material);

    MCAPI static bool doesIntersect(
        class IConstBlockSource const&,
        class AABB const&,
        class GetCollisionShapeInterface const&,
        std::vector<class AABB>&,
        bool
    );

    MCAPI static class Block const& getEmptyBlock();

    MCAPI static bool isEmptyBlock(class Block const&);

    MCAPI static bool isEmptyWaterBlock(class Block const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void
    _blockChanged(class BlockPos const& pos, uint layer, class Block const& block, class Block const& previousBlock, int updateFlags, struct ActorBlockSyncMessage const* syncMsg, class Actor*);

    MCAPI void _fetchBorderBlockCollisions(
        std::vector<class AABB>&,
        class AABB const&                                          intersectTestBox,
        class optional_ref<class GetCollisionShapeInterface const> entity,
        bool
    ) const;

    MCAPI void _fetchEntityHelper(
        class WeakEntityRef                          entityRef,
        gsl::span<gsl::not_null<class Actor const*>> ignoredEntities,
        class AABB const&                            bb,
        bool                                         useHitbox
    );

    MCAPI bool _hasChunksAt(struct Bounds const& bounds, bool) const;

    MCAPI void
    _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const& intersectTestBox, class optional_ref<class GetCollisionShapeInterface const> entity, class AABB& result, class Vec3 const&, float&)
        const;

    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB>&, class AABB const& box) const;

    MCAPI void
    getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const& intersectTestBox, class AABB&, class Vec3 const&, float&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addToTickingQueue(
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset,
        ::TickingQueueType    queueType,
        bool
    );

    MCAPI bool _getBlockPermissions(class BlockPos const& pos, bool currentState);

    MCAPI struct Brightness
    _getRawBrightness(class BlockPos const& pos, struct Brightness skyDarken, bool propagate, bool accountForNight)
        const;

    MCAPI void
    _removeFromTickingQueue(class BlockPos const& pos, class Block const& block, ::TickingQueueType queueType);

    // NOLINTEND
};
