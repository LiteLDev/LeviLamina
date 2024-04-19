#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/level/IBlockSource.h"

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

class Actor;
class Container;
class BlockPos;
class Vec3;
class ItemStack;
class Mob;
class CompoundTag;

class BlockSource : public IBlockSource, public std::enable_shared_from_this<BlockSource> {
public:
    LLNDAPI std::vector<class Actor*> getEntities(
        class AABB const& range,
        float             extendDistance = 2.0f,
        ActorType         actorType      = ActorType::TypeMask,
        bool              ignoreType     = false
    ) const;

    LLNDAPI optional_ref<Container> tryGetContainer(BlockPos const& pos);

    LLAPI optional_ref<Actor> spawnActor(CompoundTag const&);

    LLAPI bool destroyBlock(
        BlockPos const&         pos,
        optional_ref<ItemStack> tool      = std::nullopt,
        optional_ref<Mob>       toolOwner = std::nullopt
    );

    char filler[248];

public:
    // prevent constructor by default
    BlockSource& operator=(BlockSource const&);
    BlockSource(BlockSource const&);
    BlockSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockSource@@UEAA@XZ
    virtual ~BlockSource();

    // vIndex: 1, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@HHH@Z
    virtual class Block const& getBlock(int x, int y, int z) const;

    // vIndex: 2, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const& pos) const;

    // vIndex: 3, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@I@Z
    virtual class Block const& getBlock(class BlockPos const& pos, uint layer) const;

    // vIndex: 4, symbol: ?getBlockEntity@BlockSource@@UEBAPEBVBlockActor@@AEBVBlockPos@@@Z
    virtual class BlockActor const* getBlockEntity(class BlockPos const& pos) const;

    // vIndex: 5, symbol: ?getExtraBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const& p) const;

    // vIndex: 6, symbol: ?getLiquidBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getLiquidBlock(class BlockPos const& p) const;

    // vIndex: 7, symbol: ?hasBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool hasBlock(class BlockPos const& pos) const;

    // vIndex: 8, symbol: ?containsAnyLiquid@BlockSource@@UEBA_NAEBVAABB@@@Z
    virtual bool containsAnyLiquid(class AABB const& box) const;

    // vIndex: 9, symbol: ?containsMaterial@BlockSource@@UEBA_NAEBVAABB@@W4MaterialType@@@Z
    virtual bool containsMaterial(class AABB const& box, ::MaterialType material) const;

    // vIndex: 10, symbol: ?isUnderWater@BlockSource@@UEBA_NAEBVVec3@@AEBVBlock@@@Z
    virtual bool isUnderWater(class Vec3 const& pos, class Block const& block) const;

    // vIndex: 11, symbol: ?getMaterial@BlockSource@@UEBAAEBVMaterial@@AEBVBlockPos@@@Z
    virtual class Material const& getMaterial(class BlockPos const& pos) const;

    // vIndex: 12, symbol: ?getMaterial@BlockSource@@UEBAAEBVMaterial@@HHH@Z
    virtual class Material const& getMaterial(int x, int y, int z) const;

    // vIndex: 13, symbol: ?hasBorderBlock@BlockSource@@UEBA_NVBlockPos@@@Z
    virtual bool hasBorderBlock(class BlockPos pos) const;

    // vIndex: 14, symbol: ?getChunkAt@BlockSource@@UEBAPEAVLevelChunk@@AEBVBlockPos@@@Z
    virtual class LevelChunk* getChunkAt(class BlockPos const& pos) const;

    // vIndex: 15, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBUBounds@@_N@Z
    virtual bool hasChunksAt(struct Bounds const& bounds, bool) const;

    // vIndex: 16, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBVBlockPos@@H_N@Z
    virtual bool hasChunksAt(class BlockPos const& pos, int r, bool) const;

    // vIndex: 17, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBVAABB@@_N@Z
    virtual bool hasChunksAt(class AABB const& bb, bool) const;

    // vIndex: 18, symbol: ?getDimensionId@BlockSource@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const;

    // vIndex: 19, symbol:
    // ?fetchAABBs@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
    virtual void
    fetchAABBs(std::vector<class AABB>&, class AABB const& intersectTestBox, bool withUnloadedChunks) const;

    // vIndex: 20, symbol:
    // ?fetchCollisionShapes@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual void
    fetchCollisionShapes(std::vector<class AABB>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 21, symbol:
    // ?fetchCollisionShapesAndBlocks@BlockSource@@UEBAXAEAV?$vector@UCollisionShape@BlockSourceVisitor@@V?$allocator@UCollisionShape@BlockSourceVisitor@@@std@@@std@@AEBVAABB@@_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@PEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@3@@Z
    virtual void
    fetchCollisionShapesAndBlocks(std::vector<struct BlockSourceVisitor::CollisionShape>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>, std::vector<class AABB>*)
        const;

    // vIndex: 22, symbol:
    // ?getTallestCollisionShape@BlockSource@@UEBA?AVAABB@@AEBV2@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB getTallestCollisionShape(
        class AABB const&                                          intersectTestBox,
        float*                                                     actualSurfaceOffset,
        bool                                                       withUnloadedChunks,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 23, symbol: ?getBrightness@BlockSource@@UEBAMAEBVBlockPos@@@Z
    virtual float getBrightness(class BlockPos const& pos) const;

    // vIndex: 24, symbol:
    // ?fetchAABBs@BlockSource@@UEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
    virtual std::vector<class AABB>& fetchAABBs(class AABB const& intersectTestBox, bool withUnloadedChunks);

    // vIndex: 25, symbol:
    // ?fetchCollisionShapes@BlockSource@@UEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_NV?$optional@$$CBVEntityContext@@@3@PEAV23@@Z
    virtual std::vector<class AABB>&
    fetchCollisionShapes(class AABB const&, bool, std::optional<class EntityContext const>, std::vector<class AABB>*);

    // vIndex: 26, symbol: ?getWeakRef@BlockSource@@UEAA?AV?$WeakRef@VBlockSource@@@@XZ
    virtual class WeakRef<class BlockSource> getWeakRef();

    // vIndex: 27, symbol: ?addListener@BlockSource@@UEAAXAEAVBlockSourceListener@@@Z
    virtual void addListener(class BlockSourceListener& l);

    // vIndex: 28, symbol: ?removeListener@BlockSource@@UEAAXAEAVBlockSourceListener@@@Z
    virtual void removeListener(class BlockSourceListener& l);

    // vIndex: 29, symbol:
    // ?fetchEntities@BlockSource@@UEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@PEBVActor@@AEBVAABB@@_N2@Z
    virtual gsl::span<gsl::not_null<class Actor*>>
    fetchEntities(class Actor const* except, class AABB const& bb, bool useHitbox, bool);

    // vIndex: 30, symbol:
    // ?fetchEntities@BlockSource@@UEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@W4ActorType@@AEBVAABB@@PEBVActor@@V?$function@$$A6A_NPEAVActor@@@Z@std@@@Z
    virtual gsl::span<gsl::not_null<class Actor*>>
    fetchEntities(::ActorType, class AABB const&, class Actor const*, std::function<bool(class Actor*)>);

    // vIndex: 31, symbol:
    // ?setBlock@BlockSource@@UEAA_NAEBVBlockPos@@AEBVBlock@@HPEBUActorBlockSyncMessage@@PEAVActor@@@Z
    virtual bool
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags, struct ActorBlockSyncMessage const* syncMsg, class Actor*);

    // vIndex: 32, symbol: ?getMinHeight@BlockSource@@UEBAFXZ
    virtual short getMinHeight() const;

    // vIndex: 33, symbol: ?getMaxHeight@BlockSource@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 34, symbol: ?getDimension@BlockSource@@UEBAAEAVDimension@@XZ
    virtual class Dimension& getDimension() const;

    // vIndex: 35, symbol: ?getDimension@BlockSource@@UEAAAEAVDimension@@XZ
    virtual class Dimension& getDimension();

    // vIndex: 36, symbol: ?getDimensionConst@BlockSource@@UEBAAEBVDimension@@XZ
    virtual class Dimension const& getDimensionConst() const;

    // vIndex: 37, symbol: ?getChunk@BlockSource@@UEBAPEAVLevelChunk@@HH@Z
    virtual class LevelChunk* getChunk(int x, int z) const;

    // vIndex: 38, symbol: ?getChunk@BlockSource@@UEBAPEAVLevelChunk@@AEBVChunkPos@@@Z
    virtual class LevelChunk* getChunk(class ChunkPos const& pos) const;

    // vIndex: 39, symbol: ?getLevel@BlockSource@@UEAAAEAVLevel@@XZ
    virtual class Level& getLevel();

    // vIndex: 40, symbol: ?getILevel@BlockSource@@UEBAAEAVILevel@@XZ
    virtual class ILevel& getILevel() const;

    // vIndex: 41, symbol:
    // ?clip@BlockSource@@UEBA?AVHitResult@@AEBVVec3@@0_NW4ShapeType@@H11PEAVActor@@AEBV?$function@$$A6A_NAEBVBlockSource@@AEBVBlock@@_N@Z@std@@@Z
    virtual class HitResult clip(
        class Vec3 const&                                                              startPos,
        class Vec3 const&                                                              endPos,
        bool                                                                           checkAgainstLiquid,
        ::ShapeType                                                                    shapeType,
        int                                                                            maxManhattanDis,
        bool                                                                           ignoreBorderBlocks,
        bool                                                                           fullOnly,
        class Actor*                                                                   player,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& shouldCheckBlock
    ) const;

    // vIndex: 42, symbol: ?getChunkSource@BlockSource@@UEAAAEAVChunkSource@@XZ
    virtual class ChunkSource& getChunkSource();

    // vIndex: 43, symbol: ?isSolidBlockingBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isSolidBlockingBlock(class BlockPos const& p) const;

    // vIndex: 44, symbol: ?isSolidBlockingBlock@BlockSource@@UEBA_NHHH@Z
    virtual bool isSolidBlockingBlock(int x, int y, int z) const;

    // vIndex: 45, symbol: ?areChunksFullyLoaded@BlockSource@@UEBA_NAEBVBlockPos@@H@Z
    virtual bool areChunksFullyLoaded(class BlockPos const& pos, int r) const;

    // vIndex: 46, symbol: ?canDoBlockDrops@BlockSource@@UEBA_NXZ
    virtual bool canDoBlockDrops() const;

    // vIndex: 47, symbol: ?canDoContainedItemDrops@BlockSource@@UEBA_NXZ
    virtual bool canDoContainedItemDrops() const;

    // vIndex: 48, symbol: ?isInstaticking@BlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isInstaticking(class BlockPos const& pos) const;

    // symbol: ??0BlockSource@@QEAA@AEAVChunkSource@@_N1@Z
    MCAPI BlockSource(class ChunkSource& source, bool publicSource, bool allowUnpopulatedChunks);

    // symbol: ??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N33@Z
    MCAPI BlockSource(
        class Level&       level,
        class Dimension&   dimension,
        class ChunkSource& source,
        bool               publicSource,
        bool               allowUnpopulatedChunks,
        bool
    );

    // symbol: ?addToRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH_N@Z
    MCAPI void addToRandomTickingQueue(
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset,
        bool
    );

    // symbol: ?addToRandomTickingQueuePercentChance@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@MH_N@Z
    MCAPI void addToRandomTickingQueuePercentChance(
        class BlockPos const& pos,
        class Block const&    block,
        float                 percentChance,
        int                   priorityOffset,
        bool
    );

    // symbol: ?addToTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH_N@Z
    MCAPI void
    addToTickingQueue(class BlockPos const& pos, class Block const& block, int tickDelay, int priorityOffset, bool);

    // symbol: ?allowsRunes@BlockSource@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool allowsRunes(class BlockPos const& pos);

    // symbol: ?areAllChunksLoaded@BlockSource@@QEBA_NAEBVBlockPos@@AEAVBlockVolume@@@Z
    MCAPI bool areAllChunksLoaded(class BlockPos const& origin, class BlockVolume& volume) const;

    // symbol: ?areChunksFullyLoaded@BlockSource@@QEBA_NAEBVBlockPos@@0@Z
    MCAPI bool areChunksFullyLoaded(class BlockPos const& min, class BlockPos const& max) const;

    // symbol: ?blockEvent@BlockSource@@QEAAXAEBVBlockPos@@HH@Z
    MCAPI void blockEvent(class BlockPos const& pos, int b0, int b1);

    // symbol: ?canProvideSupport@BlockSource@@QEBA_NAEBVBlockPos@@EW4BlockSupportType@@@Z
    MCAPI bool canProvideSupport(class BlockPos const& pos, uchar face, ::BlockSupportType type) const;

    // symbol: ?canSeeSky@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool canSeeSky(class BlockPos const& pos) const;

    // symbol: ?canSeeSky@BlockSource@@QEBA_NHHH@Z
    MCAPI bool canSeeSky(int x, int y, int z) const;

    // symbol: ?canSeeSkyFromBelowWater@BlockSource@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const& pos);

    // symbol: ?checkBlockDestroyPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@AEBVItemStackBase@@_N@Z
    MCAPI bool checkBlockDestroyPermissions(
        class Actor&               entity,
        class BlockPos const&      pos,
        class ItemStackBase const& item,
        bool                       generateParticle
    );

    // symbol: ?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStackBase@@_N@Z
    MCAPI bool checkBlockPermissions(
        class Actor&               entity,
        class BlockPos const&      blockPos,
        uchar                      face,
        class ItemStackBase const& item,
        bool                       generateParticle
    );

    // symbol: ?checkValidity@BlockSource@@QEBAXXZ
    MCAPI void checkValidity() const;

    // symbol: ?clip@BlockSource@@QEBA?AVHitResult@@AEBUClipParameters@@@Z
    MCAPI class HitResult clip(struct ClipParameters const& parameters) const;

    // symbol: ?containsAnyBlockInBox@BlockSource@@QEAA_NAEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI bool containsAnyBlockInBox(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    // symbol: ?containsAnyBlockOfType@BlockSource@@QEBA_NAEBVBlockPos@@0AEBVBlock@@@Z
    MCAPI bool
    containsAnyBlockOfType(class BlockPos const& min, class BlockPos const& max, class Block const& type) const;

    // symbol: ?containsAnySolidBlocking@BlockSource@@QEBA_NAEBVAABB@@@Z
    MCAPI bool containsAnySolidBlocking(class AABB const& box) const;

    // symbol: ?countBlocksOfType@BlockSource@@QEBA_KAEBVBlockDescriptor@@AEBVBlockPos@@1_K@Z
    MCAPI uint64 countBlocksOfType(
        class BlockDescriptor const& blockDescriptor,
        class BlockPos const&        min,
        class BlockPos const&        max,
        uint64                       maxCount
    ) const;

    // symbol:
    // ?fetchActors@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@AEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
    MCAPI gsl::span<gsl::not_null<class Actor*>>
          fetchActors(struct ActorDefinitionIdentifier const& actorId, class AABB const& bb);

    // symbol:
    // ?fetchBlockEntities@BlockSource@@QEBA?AV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@W4BlockActorType@@AEBVAABB@@@Z
    MCAPI std::vector<class BlockActor*> fetchBlockEntities(::BlockActorType, class AABB const& bb) const;

    // symbol:
    // ?fetchBlockEntities@BlockSource@@QEAAAEBV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@AEBVAABB@@@Z
    MCAPI std::vector<class BlockActor*> const& fetchBlockEntities(class AABB const& bb);

    // symbol:
    // ?fetchBlockEntities@BlockSource@@QEAAXAEBVAABB@@AEAV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@_N@Z
    MCAPI void fetchBlockEntities(class AABB const& bb, std::vector<class BlockActor*>& blockEntityList, bool);

    // symbol: ?fetchBlocks@BlockSource@@QEBA_NAEBVBlockPos@@AEAVBlockVolume@@@Z
    MCAPI bool fetchBlocks(class BlockPos const& origin, class BlockVolume& volume) const;

    // symbol:
    // ?fetchBlocksInBox@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBox(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    // symbol:
    // ?fetchBlocksInBoxSorted@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBoxSorted(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    // symbol:
    // ?fetchBlocksInCylinder@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const> fetchBlocksInCylinder(
        class BlockPos const&                   centerPos,
        uint                                    radius,
        uint                                    height,
        std::function<bool(class Block const&)> predicate
    );

    // symbol:
    // ?fetchBlocksInCylinderSorted@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const> fetchBlocksInCylinderSorted(
        class BlockPos const&                   centerPos,
        uint                                    radius,
        uint                                    height,
        std::function<bool(class Block const&)> predicate
    );

    // symbol:
    // ?fetchEntities@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@3@AEBVAABB@@_N2@Z
    MCAPI gsl::span<gsl::not_null<class Actor*>> fetchEntities(
        gsl::span<gsl::not_null<class Actor const*>> ignoredEntities,
        class AABB const&                            bb,
        bool                                         useHitbox,
        bool
    );

    // symbol:
    // ?fetchEntities2@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@W4ActorType@@AEBVAABB@@_N@Z
    MCAPI std::vector<class Actor*> const&
          fetchEntities2(::ActorType type, class AABB const& aabb, bool ignoreTargetType);

    // symbol: ?fetchNearestEntityOfType@BlockSource@@QEAAPEAVActor@@PEBV2@AEBVAABB@@W4ActorType@@@Z
    MCAPI class Actor*
    fetchNearestEntityOfType(class Actor const* except, class AABB const& bb, ::ActorType entityTypeId);

    // symbol: ?findNextTopSolidBlockAbove@BlockSource@@QEAA_NAEAVBlockPos@@@Z
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos& pos);

    // symbol: ?findNextTopSolidBlockUnder@BlockSource@@QEAA_NAEAVBlockPos@@@Z
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos& pos);

    // symbol: ?fireAreaChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z
    MCAPI void fireAreaChanged(class BlockPos const& min, class BlockPos const& max);

    // symbol:
    // ?fireBlockChanged@BlockSource@@QEAAXAEBVBlockPos@@IAEBVBlock@@1HW4BlockChangedEventTarget@@PEBUActorBlockSyncMessage@@PEAVActor@@@Z
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

    // symbol: ?fireBlockEntityAboutToBeRemoved@BlockSource@@QEAAXV?$shared_ptr@VBlockActor@@@std@@@Z
    MCAPI void fireBlockEntityAboutToBeRemoved(std::shared_ptr<class BlockActor> te);

    // symbol: ?fireBlockEntityChanged@BlockSource@@QEAAXAEAVBlockActor@@@Z
    MCAPI void fireBlockEntityChanged(class BlockActor& te);

    // symbol: ?fireBrightnessChanged@BlockSource@@QEAAXAEBVBlockPos@@@Z
    MCAPI void fireBrightnessChanged(class BlockPos const& pos);

    // symbol: ?fireEntityChanged@BlockSource@@QEAAXAEAVActor@@@Z
    MCAPI void fireEntityChanged(class Actor& entity);

    // symbol: ?getAABBFetchResultCache@BlockSource@@QEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@XZ
    MCAPI std::vector<class AABB>& getAABBFetchResultCache();

    // symbol: ?getAboveTopSolidBlock@BlockSource@@QEAAFAEBVBlockPos@@_N1@Z
    MCAPI short getAboveTopSolidBlock(class BlockPos const& pos, bool includeWater, bool includeLeaves);

    // symbol: ?getAboveTopSolidBlock@BlockSource@@QEAAFHH_N0@Z
    MCAPI short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves);

    // symbol: ?getAllocatedHeightAt@BlockSource@@QEAAFAEBVBlockPos@@@Z
    MCAPI short getAllocatedHeightAt(class BlockPos const& xzPos);

    // symbol: ?getBiome@BlockSource@@QEAAAEAVBiome@@AEBVBlockPos@@@Z
    MCAPI class Biome& getBiome(class BlockPos const& pos);

    // symbol: ?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@AEBVBlockPos@@@Z
    MCAPI class BlockActor* getBlockEntity(class BlockPos const& pos);

    // symbol: ?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@HHH@Z
    MCAPI class BlockActor* getBlockEntity(int x, int y, int z);

    // symbol: ?getBrightnessPair@BlockSource@@QEBA?AUBrightnessPair@@AEBVBlockPos@@@Z
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const& pos) const;

    // symbol: ?getConstBiome@BlockSource@@QEBAAEBVBiome@@AEBVBlockPos@@@Z
    MCAPI class Biome const& getConstBiome(class BlockPos const& pos) const;

    // symbol: ?getDefaultBrightness@BlockSource@@QEBA?AUBrightnessPair@@XZ
    MCAPI struct BrightnessPair getDefaultBrightness() const;

    // symbol: ?getGrassColor@BlockSource@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getGrassColor(class BlockPos const& pos) const;

    // symbol: ?getHeightmap@BlockSource@@QEBAFAEBVBlockPos@@@Z
    MCAPI short getHeightmap(class BlockPos const& pos) const;

    // symbol: ?getHeightmap@BlockSource@@QEAAFHH@Z
    MCAPI short getHeightmap(int x, int z);

    // symbol: ?getHeightmapPos@BlockSource@@QEBA?AVBlockPos@@AEBV2@@Z
    MCAPI class BlockPos getHeightmapPos(class BlockPos const& xzPos) const;

    // symbol: ?getLevel@BlockSource@@QEBAAEAVLevel@@XZ
    MCAPI class Level& getLevel() const;

    // symbol: ?getLevelConst@BlockSource@@QEBAAEBVLevel@@XZ
    MCAPI class Level const& getLevelConst() const;

    // symbol: ?getNextTickUpdateForPos@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@AEAUTick@@@Z
    MCAPI bool
    getNextTickUpdateForPos(class BlockPos const& pos, ::TickingQueueType queueType, struct Tick& tick) const;

    // symbol: ?getPublicSource@BlockSource@@QEBA_NXZ
    MCAPI bool getPublicSource() const;

    // symbol: ?getRawBrightness@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@_N1@Z
    MCAPI struct Brightness getRawBrightness(class BlockPos const& pos, bool propagate, bool accountForNight) const;

    // symbol: ?getRawBrightnessWithManualDarken@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@U2@_N2@Z
    MCAPI struct Brightness
    getRawBrightnessWithManualDarken(class BlockPos const& pos, struct Brightness, bool propagate, bool accountForNight)
        const;

    // symbol: ?getSeenPercent@BlockSource@@QEAAMAEBVVec3@@AEBVAABB@@@Z
    MCAPI float getSeenPercent(class Vec3 const& center, class AABB const& bb);

    // symbol: ?getTickingQueue@BlockSource@@QEBAPEAVBlockTickingQueue@@AEBVBlockPos@@W4TickingQueueType@@_N@Z
    MCAPI class BlockTickingQueue* getTickingQueue(class BlockPos const& pos, ::TickingQueueType queueType, bool) const;

    // symbol: ?getVoidHeight@BlockSource@@QEBAFXZ
    MCAPI short getVoidHeight() const;

    // symbol: ?getWritableChunk@BlockSource@@QEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    MCAPI class LevelChunk* getWritableChunk(class ChunkPos const& pos);

    // symbol: ?hasChunksAt@BlockSource@@QEBA_NAEBVBlockPos@@0_N@Z
    MCAPI bool hasChunksAt(class BlockPos const& min, class BlockPos const& max, bool) const;

    // symbol: ?hasSubChunksAt@BlockSource@@QEBA?AU?$pair@_NV?$optional@VSubChunkPos@@@std@@@std@@AEBVBlockPos@@0@Z
    MCAPI std::pair<bool, std::optional<class SubChunkPos>>
          hasSubChunksAt(class BlockPos const& min, class BlockPos const& max) const;

    // symbol: ?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool hasTickInCurrentTick(class BlockPos const& pos) const;

    // symbol: ?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z
    MCAPI bool hasTickInCurrentTick(class BlockPos const& pos, ::TickingQueueType queueType) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos, class Block const& block) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos, class BlockLegacy const& block) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const& pos, ::TickingQueueType queueType) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlock@@W4TickingQueueType@@@Z
    MCAPI bool
    hasTickInPendingTicks(class BlockPos const& pos, class Block const& block, ::TickingQueueType queueType) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@W4TickingQueueType@@@Z
    MCAPI bool
    hasTickInPendingTicks(class BlockPos const& pos, class BlockLegacy const& block, ::TickingQueueType queueType)
        const;

    // symbol: ?hasUntickedNeighborChunk@BlockSource@@QEBA_NAEBVChunkPos@@H@Z
    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const& pos, int chunkRadius) const;

    // symbol: ?isChunkFullyLoaded@BlockSource@@QEBA_NAEBVChunkPos@@AEBVChunkSource@@@Z
    MCAPI bool isChunkFullyLoaded(class ChunkPos const& chunkPos, class ChunkSource const&) const;

    // symbol: ?isConsideredSolidBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isConsideredSolidBlock(class BlockPos const& pos) const;

    // symbol: ?isEmptyBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isEmptyBlock(class BlockPos const& pos) const;

    // symbol: ?isEmptyBlock@BlockSource@@QEAA_NHHH@Z
    MCAPI bool isEmptyBlock(int x, int y, int z);

    // symbol: ?isEmptyWaterBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isEmptyWaterBlock(class BlockPos const& pos) const;

    // symbol: ?isInWall@BlockSource@@QEBA_NAEBVVec3@@@Z
    MCAPI bool isInWall(class Vec3 const& pos) const;

    // symbol: ?isNearUnloadedChunks@BlockSource@@QEBA_NAEBVChunkPos@@@Z
    MCAPI bool isNearUnloadedChunks(class ChunkPos const& pos) const;

    // symbol: ?isTouchingMaterial@BlockSource@@QEBA_NAEBVBlockPos@@W4MaterialType@@@Z
    MCAPI bool isTouchingMaterial(class BlockPos const& pos, ::MaterialType type) const;

    // symbol: ?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@PEBVActor@@@Z
    MCAPI bool isUnobstructedByEntities(class AABB const& aabb, class Actor const* ignoreEntity);

    // symbol: ?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI bool
    isUnobstructedByEntities(class AABB const& aabb, gsl::span<gsl::not_null<class Actor const*>> ignoreEntities);

    // symbol: ?isWithinHeightLimits@BlockSource@@QEBA_NH@Z
    MCAPI bool isWithinHeightLimits(int y) const;

    // symbol: ?mayPlace@BlockSource@@QEAA_NAEBVBlock@@AEBVBlockPos@@EPEAVActor@@_NVVec3@@@Z
    MCAPI bool mayPlace(
        class Block const&    block,
        class BlockPos const& pos,
        uchar                 face,
        class Actor*          placer,
        bool                  ignoreEntities,
        class Vec3            clickPos
    );

    // symbol: ?neighborChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z
    MCAPI void neighborChanged(class BlockPos const& neighPos, class BlockPos const& myPos);

    // symbol: ?postGameEvent@BlockSource@@QEAAXPEAVActor@@AEBVGameEvent@@AEBVBlockPos@@PEBVBlock@@@Z
    MCAPI void postGameEvent(
        class Actor* source,
        class GameEvent const&,
        class BlockPos const& origin,
        class Block const*    affectedBlock
    );

    // symbol: ?postGameEvent@BlockSource@@QEAAXPEAVActor@@AEBVGameEvent@@AEBVVec3@@PEBVBlock@@@Z
    MCAPI void postGameEvent(
        class Actor* source,
        class GameEvent const&,
        class Vec3 const&  origin,
        class Block const* affectedBlock
    );

    // symbol: ?removeBlock@BlockSource@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool removeBlock(class BlockPos const& pos);

    // symbol: ?removeBlock@BlockSource@@QEAA_NHHH@Z
    MCAPI bool removeBlock(int x, int y, int z);

    // symbol: ?removeBlockEntity@BlockSource@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z
    MCAPI std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const& blockPos);

    // symbol: ?removeFromRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI void removeFromRandomTickingQueue(class BlockPos const& pos, class Block const& block);

    // symbol: ?removeFromTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI void removeFromTickingQueue(class BlockPos const& pos, class Block const& block);

    // symbol:
    // ?setBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@HV?$shared_ptr@VBlockActor@@@std@@PEBUActorBlockSyncMessage@@PEAVActor@@@Z
    MCAPI bool
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags, std::shared_ptr<class BlockActor> blockEntity, struct ActorBlockSyncMessage const* syncMsg, class Actor*);

    // symbol: ?setBlock@BlockSource@@QEAA_NHHHAEBVBlock@@HPEAVActor@@@Z
    MCAPI bool setBlock(int x, int y, int z, class Block const& block, int updateFlags, class Actor*);

    // symbol: ?setBlockNoUpdate@BlockSource@@QEAA_NHHHAEBVBlock@@@Z
    MCAPI bool setBlockNoUpdate(int x, int y, int z, class Block const& block);

    // symbol: ?setBlockSimple@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool setBlockSimple(class BlockPos const& pos, class Block const& block);

    // symbol: ?setBorderBlock@BlockSource@@QEAAXAEBVBlockPos@@_N@Z
    MCAPI void setBorderBlock(class BlockPos const& pos, bool val);

    // symbol: ?setCurrentTickForValidityChecks@BlockSource@@QEAAXAEBUTick@@@Z
    MCAPI void setCurrentTickForValidityChecks(struct Tick const& tick);

    // symbol: ?setExtraBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    MCAPI bool setExtraBlock(class BlockPos const& p, class Block const& block, int updateFlags);

    // symbol: ?setExtraBlockSimple@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool setExtraBlockSimple(class BlockPos const& pos, class Block const& block);

    // symbol: ?setIsPersistentBlockSource@BlockSource@@QEAAXXZ
    MCAPI void setIsPersistentBlockSource();

    // symbol: ?setLiquidBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@_NH@Z
    MCAPI bool setLiquidBlock(class BlockPos const& pos, class Block const& block, bool useExtraData, int updateFlags);

    // symbol: ?setRandomTickingQueue@BlockSource@@QEAAXAEAVBlockTickingQueue@@@Z
    MCAPI void setRandomTickingQueue(class BlockTickingQueue& queue);

    // symbol: ?setTickingQueue@BlockSource@@QEAAXAEAVBlockTickingQueue@@@Z
    MCAPI void setTickingQueue(class BlockTickingQueue& queue);

    // symbol: ?shouldFireEvents@BlockSource@@QEBA_NAEAVLevelChunk@@@Z
    MCAPI bool shouldFireEvents(class LevelChunk& c) const;

    // symbol: ?ticksFromNow@BlockSource@@QEBAHAEBVBlockPos@@W4TickingQueueType@@H@Z
    MCAPI int ticksFromNow(class BlockPos const& pos, ::TickingQueueType queueType, int offset) const;

    // symbol: ?tryGetBiome@BlockSource@@QEBAPEAVBiome@@AEBVBlockPos@@@Z
    MCAPI class Biome* tryGetBiome(class BlockPos const& pos) const;

    // symbol: ?updateCheckForValidityState@BlockSource@@QEAAX_N@Z
    MCAPI void updateCheckForValidityState(bool);

    // symbol: ?updateNeighborsAt@BlockSource@@QEAAXAEBVBlockPos@@@Z
    MCAPI void updateNeighborsAt(class BlockPos const& pos);

    // symbol: ?updateNeighborsAtExceptFromFacing@BlockSource@@QEAAXAEBVBlockPos@@0H@Z
    MCAPI void
    updateNeighborsAtExceptFromFacing(class BlockPos const& pos, class BlockPos const& neighborPos, int skipFacing);

    // symbol: ?containsMaterial@BlockSource@@SA_NAEBVIConstBlockSource@@AEBVAABB@@W4MaterialType@@@Z
    MCAPI static bool
    containsMaterial(class IConstBlockSource const& region, class AABB const& box, ::MaterialType material);

    // symbol:
    // ?doesIntersect@BlockSource@@SA_NAEBVIConstBlockSource@@AEBVAABB@@AEBVGetCollisionShapeInterface@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@_N@Z
    MCAPI static bool doesIntersect(
        class IConstBlockSource const&,
        class AABB const&,
        class GetCollisionShapeInterface const&,
        std::vector<class AABB>&,
        bool
    );

    // symbol: ?getEmptyBlock@BlockSource@@SAAEBVBlock@@XZ
    MCAPI static class Block const& getEmptyBlock();

    // symbol: ?isEmptyBlock@BlockSource@@SA_NAEBVBlock@@@Z
    MCAPI static bool isEmptyBlock(class Block const&);

    // symbol: ?isEmptyWaterBlock@BlockSource@@SA_NAEBVBlock@@@Z
    MCAPI static bool isEmptyWaterBlock(class Block const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@PEAVActor@@@Z
    MCAPI void
    _blockChanged(class BlockPos const& pos, uint layer, class Block const& block, class Block const& previousBlock, int updateFlags, struct ActorBlockSyncMessage const* syncMsg, class Actor*);

    // symbol:
    // ?_fetchBorderBlockCollisions@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@_N@Z
    MCAPI void _fetchBorderBlockCollisions(
        std::vector<class AABB>&,
        class AABB const&                                          intersectTestBox,
        class optional_ref<class GetCollisionShapeInterface const> entity,
        bool
    ) const;

    // symbol:
    // ?_fetchEntityHelper@BlockSource@@IEAAXVWeakEntityRef@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@AEBVAABB@@_N@Z
    MCAPI void _fetchEntityHelper(
        class WeakEntityRef                          entityRef,
        gsl::span<gsl::not_null<class Actor const*>> ignoredEntities,
        class AABB const&                            bb,
        bool                                         useHitbox
    );

    // symbol: ?_hasChunksAt@BlockSource@@IEBA_NAEBUBounds@@_N@Z
    MCAPI bool _hasChunksAt(struct Bounds const& bounds, bool) const;

    // symbol:
    // ?_updateTallestCollisionShapeWithBorderBlockCollisions@BlockSource@@IEBAXAEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV2@AEBVVec3@@AEAM@Z
    MCAPI void
    _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const& intersectTestBox, class optional_ref<class GetCollisionShapeInterface const> entity, class AABB& result, class Vec3 const&, float&)
        const;

    // symbol:
    // ?addUnloadedChunksAABBs@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@@Z
    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB>&, class AABB const& box) const;

    // symbol: ?getTallestCollisionShapeFromUnloadedChunksAABBs@BlockSource@@IEBAXAEBVAABB@@AEAV2@AEBVVec3@@AEAM@Z
    MCAPI void
    getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const& intersectTestBox, class AABB&, class Vec3 const&, float&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addToTickingQueue@BlockSource@@AEAAXAEBVBlockPos@@AEBVBlock@@HHW4TickingQueueType@@_N@Z
    MCAPI void _addToTickingQueue(
        class BlockPos const& pos,
        class Block const&    block,
        int                   tickDelay,
        int                   priorityOffset,
        ::TickingQueueType    queueType,
        bool
    );

    // symbol: ?_getBlockPermissions@BlockSource@@AEAA_NAEBVBlockPos@@_N@Z
    MCAPI bool _getBlockPermissions(class BlockPos const& pos, bool currentState);

    // symbol: ?_getRawBrightness@BlockSource@@AEBA?AUBrightness@@AEBVBlockPos@@U2@_N2@Z
    MCAPI struct Brightness
    _getRawBrightness(class BlockPos const& pos, struct Brightness skyDarken, bool propagate, bool accountForNight)
        const;

    // symbol: ?_removeFromTickingQueue@BlockSource@@AEAAXAEBVBlockPos@@AEBVBlock@@W4TickingQueueType@@@Z
    MCAPI void
    _removeFromTickingQueue(class BlockPos const& pos, class Block const& block, ::TickingQueueType queueType);

    // NOLINTEND
};
