#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/level/IBlockSource.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
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

    LLAPI optional_ref<Actor> spawnActor(class CompoundTag const&);

    LLAPI optional_ref<Actor>
          cloneActor(Actor const& origin, Vec3 const& pos, std::optional<DimensionType> dimId = std::nullopt);

    LLAPI bool destroyBlock(
        BlockPos const&         pos,
        optional_ref<ItemStack> tool      = std::nullopt,
        optional_ref<Mob>       toolOwner = std::nullopt
    );

    char unk[248];

    // prevent constructor by default
    BlockSource& operator=(BlockSource const&);
    BlockSource(BlockSource const&);
    BlockSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockSource@@UEAA@XZ
    virtual ~BlockSource();

    // vIndex: 1, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@HHH@Z
    virtual class Block const& getBlock(int, int, int) const;

    // vIndex: 2, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const&) const;

    // vIndex: 3, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@I@Z
    virtual class Block const& getBlock(class BlockPos const&, uint) const;

    // vIndex: 4, symbol: ?getBlockEntity@BlockSource@@UEBAPEBVBlockActor@@AEBVBlockPos@@@Z
    virtual class BlockActor const* getBlockEntity(class BlockPos const&) const;

    // vIndex: 5, symbol: ?getExtraBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const&) const;

    // vIndex: 6, symbol: ?getLiquidBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getLiquidBlock(class BlockPos const&) const;

    // vIndex: 7, symbol: ?hasBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool hasBlock(class BlockPos const&) const;

    // vIndex: 8, symbol: ?containsAnyLiquid@BlockSource@@UEBA_NAEBVAABB@@@Z
    virtual bool containsAnyLiquid(class AABB const&) const;

    // vIndex: 9, symbol: ?containsMaterial@BlockSource@@UEBA_NAEBVAABB@@W4MaterialType@@@Z
    virtual bool containsMaterial(class AABB const&, ::MaterialType) const;

    // vIndex: 10, symbol: ?isUnderWater@BlockSource@@UEBA_NAEBVVec3@@AEBVBlock@@@Z
    virtual bool isUnderWater(class Vec3 const&, class Block const&) const;

    // vIndex: 11, symbol: ?getMaterial@BlockSource@@UEBAAEBVMaterial@@AEBVBlockPos@@@Z
    virtual class Material const& getMaterial(class BlockPos const&) const;

    // vIndex: 12, symbol: ?getMaterial@BlockSource@@UEBAAEBVMaterial@@HHH@Z
    virtual class Material const& getMaterial(int, int, int) const;

    // vIndex: 13, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBUBounds@@_N@Z
    virtual bool hasChunksAt(struct Bounds const&, bool) const;

    // vIndex: 14, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBVBlockPos@@H_N@Z
    virtual bool hasChunksAt(class BlockPos const&, int, bool) const;

    // vIndex: 15, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBVAABB@@_N@Z
    virtual bool hasChunksAt(class AABB const&, bool) const;

    // vIndex: 16, symbol: ?getDimensionId@BlockSource@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const;

    // vIndex: 17, symbol:
    // ?fetchAABBs@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
    virtual void fetchAABBs(std::vector<class AABB>&, class AABB const&, bool) const;

    // vIndex: 18, symbol:
    // ?fetchCollisionShapes@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual void
    fetchCollisionShapes(std::vector<class AABB>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 19, symbol:
    // ?getTallestCollisionShape@BlockSource@@UEBA?AVAABB@@AEBV2@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getTallestCollisionShape(class AABB const&, float*, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 20, symbol: ?getBrightness@BlockSource@@UEBAMAEBVBlockPos@@@Z
    virtual float getBrightness(class BlockPos const&) const;

    // vIndex: 21, symbol:
    // ?fetchAABBs@BlockSource@@UEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
    virtual std::vector<class AABB>& fetchAABBs(class AABB const&, bool);

    // vIndex: 22, symbol:
    // ?fetchCollisionShapes@BlockSource@@UEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_NV?$optional@$$CBVEntityContext@@@3@@Z
    virtual std::vector<class AABB>&
    fetchCollisionShapes(class AABB const&, bool, std::optional<class EntityContext const>);

    // vIndex: 23, symbol: ?getWeakRef@BlockSource@@UEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
    virtual class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getWeakRef();

    // vIndex: 24, symbol: ?addListener@BlockSource@@UEAAXAEAVBlockSourceListener@@@Z
    virtual void addListener(class BlockSourceListener&);

    // vIndex: 25, symbol: ?removeListener@BlockSource@@UEAAXAEAVBlockSourceListener@@@Z
    virtual void removeListener(class BlockSourceListener&);

    // vIndex: 26, symbol:
    // ?fetchEntities@BlockSource@@UEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@PEBVActor@@AEBVAABB@@_N2@Z
    virtual gsl::span<gsl::not_null<class Actor*>> fetchEntities(class Actor const*, class AABB const&, bool, bool);

    // vIndex: 27, symbol:
    // ?fetchEntities@BlockSource@@UEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@W4ActorType@@AEBVAABB@@PEBVActor@@V?$function@$$A6A_NPEAVActor@@@Z@std@@@Z
    virtual gsl::span<gsl::not_null<class Actor*>>
    fetchEntities(::ActorType, class AABB const&, class Actor const*, std::function<bool(class Actor*)>);

    // vIndex: 28, symbol:
    // ?setBlock@BlockSource@@UEAA_NAEBVBlockPos@@AEBVBlock@@HPEBUActorBlockSyncMessage@@PEAVActor@@@Z
    virtual bool
    setBlock(class BlockPos const&, class Block const&, int, struct ActorBlockSyncMessage const*, class Actor*);

    // vIndex: 29, symbol: ?getMaxHeight@BlockSource@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 30, symbol: ?getMinHeight@BlockSource@@UEBAFXZ
    virtual short getMinHeight() const;

    // vIndex: 31, symbol: ?getDimension@BlockSource@@UEAAAEAVDimension@@XZ
    virtual class Dimension& getDimension();

    // vIndex: 32, symbol: ?getDimension@BlockSource@@UEBAAEAVDimension@@XZ
    virtual class Dimension& getDimension() const;

    // vIndex: 33, symbol: ?getDimensionConst@BlockSource@@UEBAAEBVDimension@@XZ
    virtual class Dimension const& getDimensionConst() const;

    // vIndex: 34, symbol: ?getChunkAt@BlockSource@@UEBAPEAVLevelChunk@@AEBVBlockPos@@@Z
    virtual class LevelChunk* getChunkAt(class BlockPos const&) const;

    // vIndex: 35, symbol: ?getILevel@BlockSource@@UEBAAEAVILevel@@XZ
    virtual class ILevel& getILevel() const;

    // vIndex: 36, symbol:
    // ?clip@BlockSource@@UEBA?AVHitResult@@AEBVVec3@@0_NW4ShapeType@@H11PEAVActor@@AEBV?$function@$$A6A_NAEBVBlockSource@@AEBVBlock@@_N@Z@std@@@Z
    virtual class HitResult
    clip(class Vec3 const&, class Vec3 const&, bool, ::ShapeType, int, bool, bool, class Actor*, std::function<bool(class BlockSource const&, class Block const&, bool)> const&)
        const;

    // vIndex: 37, symbol: ?getChunkSource@BlockSource@@UEAAAEAVChunkSource@@XZ
    virtual class ChunkSource& getChunkSource();

    // vIndex: 38, symbol: ?isSolidBlockingBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isSolidBlockingBlock(class BlockPos const&) const;

    // vIndex: 39, symbol: ?isSolidBlockingBlock@BlockSource@@UEBA_NHHH@Z
    virtual bool isSolidBlockingBlock(int, int, int) const;

    // vIndex: 40, symbol: ?areChunksFullyLoaded@BlockSource@@UEBA_NAEBVBlockPos@@H@Z
    virtual bool areChunksFullyLoaded(class BlockPos const&, int) const;

    // vIndex: 41, symbol: ?canDoBlockDrops@BlockSource@@UEBA_NXZ
    virtual bool canDoBlockDrops() const;

    // vIndex: 42, symbol: ?canDoContainedItemDrops@BlockSource@@UEBA_NXZ
    virtual bool canDoContainedItemDrops() const;

    // symbol: ??0BlockSource@@QEAA@AEAVChunkSource@@_N1@Z
    MCAPI BlockSource(class ChunkSource&, bool, bool);

    // symbol: ??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N33@Z
    MCAPI BlockSource(class Level&, class Dimension&, class ChunkSource&, bool, bool, bool);

    // symbol: ?addToRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH_N@Z
    MCAPI void addToRandomTickingQueue(class BlockPos const&, class Block const&, int, int, bool);

    // symbol: ?addToRandomTickingQueuePercentChance@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@MH_N@Z
    MCAPI void addToRandomTickingQueuePercentChance(class BlockPos const&, class Block const&, float, int, bool);

    // symbol: ?addToTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH_N@Z
    MCAPI void addToTickingQueue(class BlockPos const&, class Block const&, int, int, bool);

    // symbol: ?allowsRunes@BlockSource@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool allowsRunes(class BlockPos const&);

    // symbol: ?areAllChunksLoaded@BlockSource@@QEBA_NAEBVBlockPos@@AEAVBlockVolume@@@Z
    MCAPI bool areAllChunksLoaded(class BlockPos const&, class BlockVolume&) const;

    // symbol: ?areChunksFullyLoaded@BlockSource@@QEBA_NAEBVBlockPos@@0@Z
    MCAPI bool areChunksFullyLoaded(class BlockPos const&, class BlockPos const&) const;

    // symbol: ?blockEvent@BlockSource@@QEAAXAEBVBlockPos@@HH@Z
    MCAPI void blockEvent(class BlockPos const&, int, int);

    // symbol: ?canProvideSupport@BlockSource@@QEBA_NAEBVBlockPos@@EW4BlockSupportType@@@Z
    MCAPI bool canProvideSupport(class BlockPos const&, uchar, ::BlockSupportType) const;

    // symbol: ?canSeeSky@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool canSeeSky(class BlockPos const&) const;

    // symbol: ?canSeeSky@BlockSource@@QEBA_NHHH@Z
    MCAPI bool canSeeSky(int, int, int) const;

    // symbol: ?canSeeSkyFromBelowWater@BlockSource@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const&);

    // symbol: ?checkBlockDestroyPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@AEBVItemStackBase@@_N@Z
    MCAPI bool checkBlockDestroyPermissions(class Actor&, class BlockPos const&, class ItemStackBase const&, bool);

    // symbol: ?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStackBase@@_N@Z
    MCAPI bool checkBlockPermissions(class Actor&, class BlockPos const&, uchar, class ItemStackBase const&, bool);

    // symbol: ?checkValidity@BlockSource@@QEBAXXZ
    MCAPI void checkValidity() const;

    // symbol: ?clip@BlockSource@@QEBA?AVHitResult@@AEBUClipParameters@@@Z
    MCAPI class HitResult clip(struct ClipParameters const&) const;

    // symbol: ?containsAnyBlockInBox@BlockSource@@QEAA_NAEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI bool containsAnyBlockInBox(class BoundingBox const&, std::function<bool(class Block const&)>);

    // symbol: ?containsAnyBlockOfType@BlockSource@@QEBA_NAEBVBlockPos@@0AEBVBlock@@@Z
    MCAPI bool containsAnyBlockOfType(class BlockPos const&, class BlockPos const&, class Block const&) const;

    // symbol: ?containsAnySolidBlocking@BlockSource@@QEBA_NAEBVAABB@@@Z
    MCAPI bool containsAnySolidBlocking(class AABB const&) const;

    // symbol: ?countBlocksOfType@BlockSource@@QEBA_KAEBVBlockDescriptor@@AEBVBlockPos@@1_K@Z
    MCAPI uint64
    countBlocksOfType(class BlockDescriptor const&, class BlockPos const&, class BlockPos const&, uint64) const;

    // symbol:
    // ?fetchActorIds@BlockSource@@QEBAXAEBVAABB@@AEAV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@@Z
    MCAPI void fetchActorIds(class AABB const&, std::vector<struct ActorUniqueID>&) const;

    // symbol:
    // ?fetchActorIds@BlockSource@@QEBAX_KAEBVAABB@@AEAV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@@Z
    MCAPI void fetchActorIds(uint64, class AABB const&, std::vector<struct ActorUniqueID>&) const;

    // symbol:
    // ?fetchActors@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@AEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
    MCAPI gsl::span<gsl::not_null<class Actor*>>
          fetchActors(struct ActorDefinitionIdentifier const&, class AABB const&);

    // symbol:
    // ?fetchBlockEntities@BlockSource@@QEBA?AV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@W4BlockActorType@@AEBVAABB@@@Z
    MCAPI std::vector<class BlockActor*> fetchBlockEntities(::BlockActorType, class AABB const&) const;

    // symbol:
    // ?fetchBlockEntities@BlockSource@@QEAAAEBV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@AEBVAABB@@@Z
    MCAPI std::vector<class BlockActor*> const& fetchBlockEntities(class AABB const&);

    // symbol:
    // ?fetchBlockEntities@BlockSource@@QEAAXAEBVAABB@@AEAV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@_N@Z
    MCAPI void fetchBlockEntities(class AABB const&, std::vector<class BlockActor*>&, bool);

    // symbol: ?fetchBlocks@BlockSource@@QEBA_NAEBVBlockPos@@AEAVBlockVolume@@@Z
    MCAPI bool fetchBlocks(class BlockPos const&, class BlockVolume&) const;

    // symbol:
    // ?fetchBlocksInBox@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBox(class BoundingBox const&, std::function<bool(class Block const&)>);

    // symbol:
    // ?fetchBlocksInBoxSorted@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBoxSorted(class BoundingBox const&, std::function<bool(class Block const&)>);

    // symbol:
    // ?fetchBlocksInCylinder@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInCylinder(class BlockPos const&, uint, uint, std::function<bool(class Block const&)>);

    // symbol:
    // ?fetchBlocksInCylinderSorted@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInCylinderSorted(class BlockPos const&, uint, uint, std::function<bool(class Block const&)>);

    // symbol:
    // ?fetchEntities@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@3@AEBVAABB@@_N2@Z
    MCAPI gsl::span<gsl::not_null<class Actor*>>
          fetchEntities(gsl::span<gsl::not_null<class Actor const*>>, class AABB const&, bool, bool);

    // symbol:
    // ?fetchEntities2@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@W4ActorType@@AEBVAABB@@_N@Z
    MCAPI std::vector<class Actor*> const& fetchEntities2(::ActorType, class AABB const&, bool);

    // symbol: ?fetchNearestEntityOfType@BlockSource@@QEAAPEAVActor@@PEBV2@AEBVAABB@@W4ActorType@@@Z
    MCAPI class Actor* fetchNearestEntityOfType(class Actor const*, class AABB const&, ::ActorType);

    // symbol: ?findNextTopSolidBlockAbove@BlockSource@@QEAA_NAEAVBlockPos@@@Z
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos&);

    // symbol: ?findNextTopSolidBlockUnder@BlockSource@@QEAA_NAEAVBlockPos@@@Z
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos&);

    // symbol: ?fireAreaChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z
    MCAPI void fireAreaChanged(class BlockPos const&, class BlockPos const&);

    // symbol:
    // ?fireBlockChanged@BlockSource@@QEAAXAEBVBlockPos@@IAEBVBlock@@1HW4BlockChangedEventTarget@@PEBUActorBlockSyncMessage@@PEAVActor@@@Z
    MCAPI void
    fireBlockChanged(class BlockPos const&, uint, class Block const&, class Block const&, int, ::BlockChangedEventTarget, struct ActorBlockSyncMessage const*, class Actor*);

    // symbol: ?fireBlockEntityAboutToBeRemoved@BlockSource@@QEAAXV?$shared_ptr@VBlockActor@@@std@@@Z
    MCAPI void fireBlockEntityAboutToBeRemoved(std::shared_ptr<class BlockActor>);

    // symbol: ?fireBlockEntityChanged@BlockSource@@QEAAXAEAVBlockActor@@@Z
    MCAPI void fireBlockEntityChanged(class BlockActor&);

    // symbol: ?fireBrightnessChanged@BlockSource@@QEAAXAEBVBlockPos@@@Z
    MCAPI void fireBrightnessChanged(class BlockPos const&);

    // symbol: ?fireEntityChanged@BlockSource@@QEAAXAEAVActor@@@Z
    MCAPI void fireEntityChanged(class Actor&);

    // symbol: ?getAABBFetchResultCache@BlockSource@@QEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@XZ
    MCAPI std::vector<class AABB>& getAABBFetchResultCache();

    // symbol: ?getAboveTopSolidBlock@BlockSource@@QEAAFAEBVBlockPos@@_N1@Z
    MCAPI short getAboveTopSolidBlock(class BlockPos const&, bool, bool);

    // symbol: ?getAboveTopSolidBlock@BlockSource@@QEAAFHH_N0@Z
    MCAPI short getAboveTopSolidBlock(int, int, bool, bool);

    // symbol: ?getAllocatedHeightAt@BlockSource@@QEAAFAEBVBlockPos@@@Z
    MCAPI short getAllocatedHeightAt(class BlockPos const&);

    // symbol: ?getBiome@BlockSource@@QEAAAEAVBiome@@AEBVBlockPos@@@Z
    MCAPI class Biome& getBiome(class BlockPos const&);

    // symbol: ?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@AEBVBlockPos@@@Z
    MCAPI class BlockActor* getBlockEntity(class BlockPos const&);

    // symbol: ?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@HHH@Z
    MCAPI class BlockActor* getBlockEntity(int, int, int);

    // symbol: ?getBrightnessPair@BlockSource@@QEBA?AUBrightnessPair@@AEBVBlockPos@@@Z
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const&) const;

    // symbol: ?getChunk@BlockSource@@QEBAPEAVLevelChunk@@AEBVChunkPos@@@Z
    MCAPI class LevelChunk* getChunk(class ChunkPos const&) const;

    // symbol: ?getChunk@BlockSource@@QEBAPEAVLevelChunk@@HH@Z
    MCAPI class LevelChunk* getChunk(int, int) const;

    // symbol: ?getConstBiome@BlockSource@@QEBAAEBVBiome@@AEBVBlockPos@@@Z
    MCAPI class Biome const& getConstBiome(class BlockPos const&) const;

    // symbol: ?getDefaultBrightness@BlockSource@@QEBA?AUBrightnessPair@@XZ
    MCAPI struct BrightnessPair getDefaultBrightness() const;

    // symbol: ?getGrassColor@BlockSource@@QEBAHAEBVBlockPos@@@Z
    MCAPI int getGrassColor(class BlockPos const&) const;

    // symbol: ?getHeightmap@BlockSource@@QEBAFAEBVBlockPos@@@Z
    MCAPI short getHeightmap(class BlockPos const&) const;

    // symbol: ?getHeightmap@BlockSource@@QEAAFHH@Z
    MCAPI short getHeightmap(int, int);

    // symbol: ?getHeightmapPos@BlockSource@@QEBA?AVBlockPos@@AEBV2@@Z
    MCAPI class BlockPos getHeightmapPos(class BlockPos const&) const;

    // symbol: ?getLevel@BlockSource@@QEAAAEAVLevel@@XZ
    MCAPI class Level& getLevel();

    // symbol: ?getLevel@BlockSource@@QEBAAEAVLevel@@XZ
    MCAPI class Level& getLevel() const;

    // symbol: ?getLevelConst@BlockSource@@QEBAAEBVLevel@@XZ
    MCAPI class Level const& getLevelConst() const;

    // symbol: ?getNextTickUpdateForPos@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@AEAUTick@@@Z
    MCAPI bool getNextTickUpdateForPos(class BlockPos const&, ::TickingQueueType, struct Tick&) const;

    // symbol: ?getPublicSource@BlockSource@@QEBA_NXZ
    MCAPI bool getPublicSource() const;

    // symbol: ?getRawBrightness@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@_N1@Z
    MCAPI struct Brightness getRawBrightness(class BlockPos const&, bool, bool) const;

    // symbol: ?getRawBrightnessWithManualDarken@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@U2@_N2@Z
    MCAPI struct Brightness
    getRawBrightnessWithManualDarken(class BlockPos const&, struct Brightness, bool, bool) const;

    // symbol: ?getSeenPercent@BlockSource@@QEAAMAEBVVec3@@AEBVAABB@@@Z
    MCAPI float getSeenPercent(class Vec3 const&, class AABB const&);

    // symbol: ?getTickingQueue@BlockSource@@QEBAPEAVBlockTickingQueue@@AEBVBlockPos@@W4TickingQueueType@@_N@Z
    MCAPI class BlockTickingQueue* getTickingQueue(class BlockPos const&, ::TickingQueueType, bool) const;

    // symbol: ?getVoidHeight@BlockSource@@QEBAFXZ
    MCAPI short getVoidHeight() const;

    // symbol: ?getWritableChunk@BlockSource@@QEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    MCAPI class LevelChunk* getWritableChunk(class ChunkPos const&);

    // symbol: ?hasBorderBlock@BlockSource@@QEBA_NVBlockPos@@@Z
    MCAPI bool hasBorderBlock(class BlockPos) const;

    // symbol: ?hasChunksAt@BlockSource@@QEBA_NAEBVBlockPos@@0_N@Z
    MCAPI bool hasChunksAt(class BlockPos const&, class BlockPos const&, bool) const;

    // symbol: ?hasSubChunksAt@BlockSource@@QEBA?AU?$pair@_NV?$optional@VSubChunkPos@@@std@@@std@@AEBVBlockPos@@0@Z
    MCAPI std::pair<bool, std::optional<class SubChunkPos>>
          hasSubChunksAt(class BlockPos const&, class BlockPos const&) const;

    // symbol: ?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool hasTickInCurrentTick(class BlockPos const&) const;

    // symbol: ?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z
    MCAPI bool hasTickInCurrentTick(class BlockPos const&, ::TickingQueueType) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const&) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, class Block const&) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, class BlockLegacy const&) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, ::TickingQueueType) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlock@@W4TickingQueueType@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, class Block const&, ::TickingQueueType) const;

    // symbol: ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@W4TickingQueueType@@@Z
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, class BlockLegacy const&, ::TickingQueueType) const;

    // symbol: ?hasUntickedNeighborChunk@BlockSource@@QEBA_NAEBVChunkPos@@H@Z
    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const&, int) const;

    // symbol: ?isChunkFullyLoaded@BlockSource@@QEBA_NAEBVChunkPos@@AEBVChunkSource@@@Z
    MCAPI bool isChunkFullyLoaded(class ChunkPos const&, class ChunkSource const&) const;

    // symbol: ?isConsideredSolidBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isConsideredSolidBlock(class BlockPos const&) const;

    // symbol: ?isEmptyBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isEmptyBlock(class BlockPos const&) const;

    // symbol: ?isEmptyBlock@BlockSource@@QEAA_NHHH@Z
    MCAPI bool isEmptyBlock(int, int, int);

    // symbol: ?isEmptyWaterBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isEmptyWaterBlock(class BlockPos const&) const;

    // symbol: ?isInWall@BlockSource@@QEBA_NAEBVVec3@@@Z
    MCAPI bool isInWall(class Vec3 const&) const;

    // symbol: ?isInstaticking@BlockSource@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isInstaticking(class BlockPos const&) const;

    // symbol: ?isNearUnloadedChunks@BlockSource@@QEBA_NAEBVChunkPos@@@Z
    MCAPI bool isNearUnloadedChunks(class ChunkPos const&) const;

    // symbol: ?isTouchingMaterial@BlockSource@@QEBA_NAEBVBlockPos@@W4MaterialType@@@Z
    MCAPI bool isTouchingMaterial(class BlockPos const&, ::MaterialType) const;

    // symbol: ?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@PEBVActor@@@Z
    MCAPI bool isUnobstructedByEntities(class AABB const&, class Actor const*);

    // symbol: ?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI bool isUnobstructedByEntities(class AABB const&, gsl::span<gsl::not_null<class Actor const*>>);

    // symbol: ?isWithinHeightLimits@BlockSource@@QEBA_NH@Z
    MCAPI bool isWithinHeightLimits(int) const;

    // symbol: ?mayPlace@BlockSource@@QEAA_NAEBVBlock@@AEBVBlockPos@@EPEAVActor@@_NVVec3@@@Z
    MCAPI bool mayPlace(class Block const&, class BlockPos const&, uchar, class Actor*, bool, class Vec3);

    // symbol: ?neighborChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z
    MCAPI void neighborChanged(class BlockPos const&, class BlockPos const&);

    // symbol: ?postGameEvent@BlockSource@@QEAAXPEAVActor@@AEBVGameEvent@@AEBVBlockPos@@PEBVBlock@@@Z
    MCAPI void postGameEvent(class Actor*, class GameEvent const&, class BlockPos const&, class Block const*);

    // symbol: ?postGameEvent@BlockSource@@QEAAXPEAVActor@@AEBVGameEvent@@AEBVVec3@@PEBVBlock@@@Z
    MCAPI void postGameEvent(class Actor*, class GameEvent const&, class Vec3 const&, class Block const*);

    // symbol: ?removeBlock@BlockSource@@QEAA_NAEBVBlockPos@@@Z
    MCAPI bool removeBlock(class BlockPos const&);

    // symbol: ?removeBlock@BlockSource@@QEAA_NHHH@Z
    MCAPI bool removeBlock(int, int, int);

    // symbol: ?removeBlockEntity@BlockSource@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z
    MCAPI std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const&);

    // symbol: ?removeFromRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI void removeFromRandomTickingQueue(class BlockPos const&, class Block const&);

    // symbol: ?removeFromTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI void removeFromTickingQueue(class BlockPos const&, class Block const&);

    // symbol:
    // ?setBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@HV?$shared_ptr@VBlockActor@@@std@@PEBUActorBlockSyncMessage@@PEAVActor@@@Z
    MCAPI bool
    setBlock(class BlockPos const&, class Block const&, int, std::shared_ptr<class BlockActor>, struct ActorBlockSyncMessage const*, class Actor*);

    // symbol: ?setBlock@BlockSource@@QEAA_NHHHAEBVBlock@@HPEAVActor@@@Z
    MCAPI bool setBlock(int, int, int, class Block const&, int, class Actor*);

    // symbol: ?setBlockNoUpdate@BlockSource@@QEAA_NHHHAEBVBlock@@@Z
    MCAPI bool setBlockNoUpdate(int, int, int, class Block const&);

    // symbol: ?setBlockSimple@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool setBlockSimple(class BlockPos const&, class Block const&);

    // symbol: ?setBorderBlock@BlockSource@@QEAAXAEBVBlockPos@@_N@Z
    MCAPI void setBorderBlock(class BlockPos const&, bool);

    // symbol: ?setCurrentTickForValidityChecks@BlockSource@@QEAAXAEBUTick@@@Z
    MCAPI void setCurrentTickForValidityChecks(struct Tick const&);

    // symbol: ?setExtraBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    MCAPI bool setExtraBlock(class BlockPos const&, class Block const&, int);

    // symbol: ?setExtraBlockSimple@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool setExtraBlockSimple(class BlockPos const&, class Block const&);

    // symbol: ?setIsPersistentBlockSource@BlockSource@@QEAAXXZ
    MCAPI void setIsPersistentBlockSource();

    // symbol: ?setLiquidBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@_NH@Z
    MCAPI bool setLiquidBlock(class BlockPos const&, class Block const&, bool, int);

    // symbol: ?setRandomTickingQueue@BlockSource@@QEAAXAEAVBlockTickingQueue@@@Z
    MCAPI void setRandomTickingQueue(class BlockTickingQueue&);

    // symbol: ?setTickingQueue@BlockSource@@QEAAXAEAVBlockTickingQueue@@@Z
    MCAPI void setTickingQueue(class BlockTickingQueue&);

    // symbol: ?shouldFireEvents@BlockSource@@QEBA_NAEAVLevelChunk@@@Z
    MCAPI bool shouldFireEvents(class LevelChunk&) const;

    // symbol: ?ticksFromNow@BlockSource@@QEBAHAEBVBlockPos@@W4TickingQueueType@@H@Z
    MCAPI int ticksFromNow(class BlockPos const&, ::TickingQueueType, int) const;

    // symbol: ?tryGetBiome@BlockSource@@QEBAPEAVBiome@@AEBVBlockPos@@@Z
    MCAPI class Biome* tryGetBiome(class BlockPos const&) const;

    // symbol: ?updateCheckForValidityState@BlockSource@@QEAAX_N@Z
    MCAPI void updateCheckForValidityState(bool);

    // symbol: ?updateNeighborsAt@BlockSource@@QEAAXAEBVBlockPos@@@Z
    MCAPI void updateNeighborsAt(class BlockPos const&);

    // symbol: ?updateNeighborsAtExceptFromFacing@BlockSource@@QEAAXAEBVBlockPos@@0H@Z
    MCAPI void updateNeighborsAtExceptFromFacing(class BlockPos const&, class BlockPos const&, int);

    // symbol:
    // ?doesIntersect@BlockSource@@SA_NAEBVIConstBlockSource@@AEBVAABB@@AEBVGetCollisionShapeInterface@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@_N@Z
    MCAPI static bool doesIntersect(
        class IConstBlockSource const&,
        class AABB const&,
        class GetCollisionShapeInterface const&,
        std::vector<class AABB>&,
        bool
    );

    // symbol: ?generateUnloadedChunkAABB@BlockSource@@SA?AVAABB@@AEBVChunkPos@@@Z
    MCAPI static class AABB generateUnloadedChunkAABB(class ChunkPos const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@PEAVActor@@@Z
    MCAPI void
    _blockChanged(class BlockPos const&, uint, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, class Actor*);

    // symbol:
    // ?_fetchBorderBlockCollisions@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@_N@Z
    MCAPI void _fetchBorderBlockCollisions(
        std::vector<class AABB>&,
        class AABB const&,
        class optional_ref<class GetCollisionShapeInterface const>,
        bool
    ) const;

    // symbol:
    // ?_fetchEntityHelper@BlockSource@@IEAAXVWeakEntityRef@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@AEBVAABB@@_N@Z
    MCAPI void
    _fetchEntityHelper(class WeakEntityRef, gsl::span<gsl::not_null<class Actor const*>>, class AABB const&, bool);

    // symbol: ?_hasChunksAt@BlockSource@@IEBA_NAEBUBounds@@_N@Z
    MCAPI bool _hasChunksAt(struct Bounds const&, bool) const;

    // symbol:
    // ?_updateTallestCollisionShapeWithBorderBlockCollisions@BlockSource@@IEBAXAEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV2@AEBVVec3@@AEAM@Z
    MCAPI void
    _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const&, class optional_ref<class GetCollisionShapeInterface const>, class AABB&, class Vec3 const&, float&)
        const;

    // symbol:
    // ?addUnloadedChunksAABBs@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@@Z
    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB>&, class AABB const&) const;

    // symbol: ?addVoidFloor@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@@Z
    MCAPI void addVoidFloor(std::vector<class AABB>&, class AABB const&) const;

    // symbol: ?getTallestCollisionShapeFromUnloadedChunksAABBs@BlockSource@@IEBAXAEBVAABB@@AEAV2@AEBVVec3@@AEAM@Z
    MCAPI void
    getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const&, class AABB&, class Vec3 const&, float&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addToTickingQueue@BlockSource@@AEAAXAEBVBlockPos@@AEBVBlock@@HHW4TickingQueueType@@_N@Z
    MCAPI void _addToTickingQueue(class BlockPos const&, class Block const&, int, int, ::TickingQueueType, bool);

    // symbol: ?_getBlockPermissions@BlockSource@@AEAA_NAEBVBlockPos@@_N@Z
    MCAPI bool _getBlockPermissions(class BlockPos const&, bool);

    // symbol: ?_getRawBrightness@BlockSource@@AEBA?AUBrightness@@AEBVBlockPos@@U2@_N2@Z
    MCAPI struct Brightness _getRawBrightness(class BlockPos const&, struct Brightness, bool, bool) const;

    // symbol: ?_removeFromTickingQueue@BlockSource@@AEAAXAEBVBlockPos@@AEBVBlock@@W4TickingQueueType@@@Z
    MCAPI void _removeFromTickingQueue(class BlockPos const&, class Block const&, ::TickingQueueType);

    // NOLINTEND
};
