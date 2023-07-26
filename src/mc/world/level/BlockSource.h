#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class BlockSource {

public:
    // prevent constructor by default
    BlockSource& operator=(BlockSource const&) = delete;
    BlockSource(BlockSource const&)            = delete;
    BlockSource()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@HHH\@Z
     */
    virtual class Block const& getBlock(int, int, int) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@I\@Z
     */
    virtual class Block const& getBlock(class BlockPos const&, unsigned int) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getBlockEntity\@BlockSource\@\@UEBAPEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor const* getBlockEntity(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getExtraBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getExtraBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getLiquidBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getLiquidBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?hasBlock\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?containsAnyLiquid\@BlockSource\@\@UEBA_NAEBVAABB\@\@\@Z
     */
    virtual bool containsAnyLiquid(class AABB const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?containsMaterial\@BlockSource\@\@UEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual bool containsMaterial(class AABB const&, enum class MaterialType) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getMaterial\@BlockSource\@\@UEBAAEBVMaterial\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Material const& getMaterial(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getMaterial\@BlockSource\@\@UEBAAEBVMaterial\@\@HHH\@Z
     */
    virtual class Material const& getMaterial(int, int, int) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?hasChunksAt\@BlockSource\@\@UEBA_NAEBUBounds\@\@_N\@Z
     */
    virtual bool hasChunksAt(struct Bounds const&, bool) const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?hasChunksAt\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@H_N\@Z
     */
    virtual bool hasChunksAt(class BlockPos const&, int, bool) const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?hasChunksAt\@BlockSource\@\@UEBA_NAEBVAABB\@\@_N\@Z
     */
    virtual bool hasChunksAt(class AABB const&, bool) const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?getDimensionId\@BlockSource\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?fetchAABBs\@BlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual void fetchAABBs(std::vector<class AABB>&, class AABB const&, bool) const; // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?fetchCollisionShapes\@BlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual void
    fetchCollisionShapes(std::vector<class AABB>&, class AABB const&, float*, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const; // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?getTallestCollisionShape\@BlockSource\@\@UEBA?AVAABB\@\@AEBV2\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual class AABB
    getTallestCollisionShape(class AABB const&, float*, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getBrightness\@BlockSource\@\@UEBAMAEBVBlockPos\@\@\@Z
     */
    virtual float getBrightness(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 20
     * @symbol
     * ?fetchAABBs\@BlockSource\@\@UEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual std::vector<class AABB>& fetchAABBs(class AABB const&, bool); // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?fetchCollisionShapes\@BlockSource\@\@UEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NPEAUIActorMovementProxy\@\@\@Z
     */
    virtual std::vector<class AABB>&
    fetchCollisionShapes(class AABB const&, float*, bool, struct IActorMovementProxy*); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?getWeakRef\@BlockSource\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    virtual class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getWeakRef(); // NOLINT
    /**
     * @vftbl 23
     * @symbol ?addListener\@BlockSource\@\@UEAAXAEAVBlockSourceListener\@\@\@Z
     */
    virtual void addListener(class BlockSourceListener&); // NOLINT
    /**
     * @vftbl 24
     * @symbol ?removeListener\@BlockSource\@\@UEAAXAEAVBlockSourceListener\@\@\@Z
     */
    virtual void removeListener(class BlockSourceListener&); // NOLINT
    /**
     * @vftbl 25
     * @symbol
     * ?fetchEntities\@BlockSource\@\@UEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@PEBVActor\@\@AEBVAABB\@\@_N2\@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor*>, -1>
    fetchEntities(class Actor const*, class AABB const&, bool, bool); // NOLINT
    /**
     * @vftbl 26
     * @symbol
     * ?fetchEntities\@BlockSource\@\@UEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@W4ActorType\@\@AEBVAABB\@\@PEBVActor\@\@V?$function\@$$A6A_NPEAVActor\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor*>, -1>
    fetchEntities(enum class ActorType, class AABB const&, class Actor const*, class std::function<bool(class Actor*)>); // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?setBlock\@BlockSource\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@HPEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    virtual bool
    setBlock(class BlockPos const&, class Block const&, int, struct ActorBlockSyncMessage const*, class Actor*); // NOLINT
    /**
     * @vftbl 28
     * @symbol ?getMaxHeight\@BlockSource\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?getMinHeight\@BlockSource\@\@UEBAFXZ
     */
    virtual short getMinHeight() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol ?getChunkAt\@BlockSource\@\@UEBAPEAVLevelChunk\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class LevelChunk* getChunkAt(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 34
     * @symbol ?getILevel\@BlockSource\@\@UEBAAEAVILevel\@\@XZ
     */
    virtual class ILevel& getILevel() const; // NOLINT
    /**
     * @vftbl 35
     * @symbol ?getChunkSource\@BlockSource\@\@UEAAAEAVChunkSource\@\@XZ
     */
    virtual class ChunkSource& getChunkSource(); // NOLINT
    /**
     * @vftbl 36
     * @symbol ?isSolidBlockingBlock\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isSolidBlockingBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 37
     * @symbol ?isSolidBlockingBlock\@BlockSource\@\@UEBA_NHHH\@Z
     */
    virtual bool isSolidBlockingBlock(int, int, int) const; // NOLINT
    /**
     * @vftbl 38
     * @symbol ?areChunksFullyLoaded\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@H\@Z
     */
    virtual bool areChunksFullyLoaded(class BlockPos const&, int) const; // NOLINT
    /**
     * @vftbl 39
     * @symbol ?canDoBlockDrops\@BlockSource\@\@UEBA_NXZ
     */
    virtual bool canDoBlockDrops() const; // NOLINT
    /**
     * @vftbl 40
     * @symbol ?canDoContainedItemDrops\@BlockSource\@\@UEBA_NXZ
     */
    virtual bool canDoContainedItemDrops() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCE
    /**
     * @symbol ?getDimension\@BlockSource\@\@UEAAAEAVDimension\@\@XZ
     */
    MCVAPI class Dimension& getDimension(); // NOLINT
    /**
     * @symbol ?getDimension\@BlockSource\@\@UEBAAEAVDimension\@\@XZ
     */
    MCVAPI class Dimension& getDimension() const; // NOLINT
    /**
     * @symbol ?getDimensionConst\@BlockSource\@\@UEBAAEBVDimension\@\@XZ
     */
    MCVAPI class Dimension const& getDimensionConst() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSource(); // NOLINT
#endif
    /**
     * @symbol ??0BlockSource\@\@QEAA\@AEAVLevel\@\@AEAVDimension\@\@AEAVChunkSource\@\@_N33\@Z
     */
    MCAPI BlockSource(class Level&, class Dimension&, class ChunkSource&, bool, bool, bool); // NOLINT
    /**
     * @symbol ??0BlockSource\@\@QEAA\@AEAVChunkSource\@\@_N1\@Z
     */
    MCAPI BlockSource(class ChunkSource&, bool, bool); // NOLINT
    /**
     * @symbol
     * ?_fetchEntities\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@PEBUIActorMovementProxy\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor*>, -1>
    _fetchEntities(struct IActorMovementProxy const*, class AABB const&, bool); // NOLINT
    /**
     * @symbol ?addToRandomTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH_N\@Z
     */
    MCAPI void addToRandomTickingQueue(class BlockPos const&, class Block const&, int, int, bool); // NOLINT
    /**
     * @symbol ?addToRandomTickingQueuePercentChance\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@MH_N\@Z
     */
    MCAPI void
    addToRandomTickingQueuePercentChance(class BlockPos const&, class Block const&, float, int, bool); // NOLINT
    /**
     * @symbol ?addToTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH_N\@Z
     */
    MCAPI void addToTickingQueue(class BlockPos const&, class Block const&, int, int, bool); // NOLINT
    /**
     * @symbol ?allowsRunes\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool allowsRunes(class BlockPos const&); // NOLINT
    /**
     * @symbol ?areAllChunksLoaded\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI bool areAllChunksLoaded(class BlockPos const&, class BlockVolume&) const; // NOLINT
    /**
     * @symbol ?areChunksFullyLoaded\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0\@Z
     */
    MCAPI bool areChunksFullyLoaded(class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?blockEvent\@BlockSource\@\@QEAAXAEBVBlockPos\@\@HH\@Z
     */
    MCAPI void blockEvent(class BlockPos const&, int, int); // NOLINT
    /**
     * @symbol ?canProvideSupport\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@EW4BlockSupportType\@\@\@Z
     */
    MCAPI bool canProvideSupport(class BlockPos const&, unsigned char, enum class BlockSupportType) const; // NOLINT
    /**
     * @symbol ?canSeeSky\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSeeSky(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?canSeeSky\@BlockSource\@\@QEBA_NHHH\@Z
     */
    MCAPI bool canSeeSky(int, int, int) const; // NOLINT
    /**
     * @symbol ?canSeeSkyFromBelowWater\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?checkBlockDestroyPermissions\@BlockSource\@\@QEAA_NAEAVActor\@\@AEBVBlockPos\@\@AEBVItemStackBase\@\@_N\@Z
     */
    MCAPI bool
    checkBlockDestroyPermissions(class Actor&, class BlockPos const&, class ItemStackBase const&, bool); // NOLINT
    /**
     * @symbol ?checkBlockPermissions\@BlockSource\@\@QEAA_NAEAVActor\@\@AEBVBlockPos\@\@EAEBVItemStackBase\@\@_N\@Z
     */
    MCAPI bool checkBlockPermissions(
        class Actor&,
        class BlockPos const&,
        unsigned char,
        class ItemStackBase const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?checkValidity\@BlockSource\@\@QEBAXXZ
     */
    MCAPI void checkValidity() const; // NOLINT
    /**
     * @symbol ?clip\@BlockSource\@\@QEBA?AVHitResult\@\@AEBUClipParameters\@\@\@Z
     */
    MCAPI class HitResult clip(struct ClipParameters const&) const; // NOLINT
    /**
     * @symbol
     * ?clip\@BlockSource\@\@QEBA?AVHitResult\@\@AEBVVec3\@\@0_N1H11PEAVPlayer\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z\@std\@\@\@Z
     */
    MCAPI class HitResult
    clip(class Vec3 const&, class Vec3 const&, bool, bool, int, bool, bool, class Player*, class std::function<bool(class BlockSource const&, class Block const&, bool)> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?containsAnyBlockInBox\@BlockSource\@\@QEAA_NAEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool containsAnyBlockInBox(class BoundingBox const&, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @symbol ?containsAnyBlockOfType\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0AEBVBlock\@\@\@Z
     */
    MCAPI bool containsAnyBlockOfType(class BlockPos const&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?containsAnySolidBlocking\@BlockSource\@\@QEBA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool containsAnySolidBlocking(class AABB const&) const; // NOLINT
    /**
     * @symbol ?countBlocksOfType\@BlockSource\@\@QEBA_KAEBVBlockDescriptor\@\@AEBVBlockPos\@\@1_K\@Z
     */
    MCAPI unsigned __int64
    countBlocksOfType(class BlockDescriptor const&, class BlockPos const&, class BlockPos const&, unsigned __int64)
        const; // NOLINT
    /**
     * @symbol
     * ?fetchActorIds\@BlockSource\@\@QEBAX_KAEBVAABB\@\@AEAV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchActorIds(unsigned __int64, class AABB const&, std::vector<struct ActorUniqueID>&) const; // NOLINT
    /**
     * @symbol
     * ?fetchActorIds\@BlockSource\@\@QEBAXAEBVAABB\@\@AEAV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchActorIds(class AABB const&, std::vector<struct ActorUniqueID>&) const; // NOLINT
    /**
     * @symbol
     * ?fetchActors\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor*>, -1>
    fetchActors(struct ActorDefinitionIdentifier const&, class AABB const&); // NOLINT
    /**
     * @symbol
     * ?fetchBlockEntities\@BlockSource\@\@QEBA?AV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@W4BlockActorType\@\@AEBVAABB\@\@\@Z
     */
    MCAPI std::vector<class BlockActor*>
          fetchBlockEntities(enum class BlockActorType, class AABB const&) const; // NOLINT
    /**
     * @symbol
     * ?fetchBlockEntities\@BlockSource\@\@QEAAXAEBVAABB\@\@AEAV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void fetchBlockEntities(class AABB const&, std::vector<class BlockActor*>&, bool); // NOLINT
    /**
     * @symbol
     * ?fetchBlockEntities\@BlockSource\@\@QEAAAEBV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI std::vector<class BlockActor*> const& fetchBlockEntities(class AABB const&); // NOLINT
    /**
     * @symbol ?fetchBlocks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI bool fetchBlocks(class BlockPos const&, class BlockVolume&) const; // NOLINT
    /**
     * @symbol
     * ?fetchBlocksInBox\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1>
    fetchBlocksInBox(class BoundingBox const&, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @symbol
     * ?fetchBlocksInBoxSorted\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1>
    fetchBlocksInBoxSorted(class BoundingBox const&, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @symbol
     * ?fetchBlocksInCylinder\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBlockPos\@\@IIV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1>
    fetchBlocksInCylinder(class BlockPos const&, unsigned int, unsigned int, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @symbol
     * ?fetchBlocksInCylinderSorted\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBlockPos\@\@IIV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1>
    fetchBlocksInCylinderSorted(class BlockPos const&, unsigned int, unsigned int, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @symbol
     * ?fetchEntities\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@3\@AEBVAABB\@\@_N2\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor*>, -1> fetchEntities(
        class gsl::span<class gsl::not_null<class Actor const*>, -1>,
        class AABB const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?fetchEntities2\@BlockSource\@\@QEAAAEBV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@W4ActorType\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI std::vector<class Actor*> const& fetchEntities2(enum class ActorType, class AABB const&, bool); // NOLINT
    /**
     * @symbol ?fetchNearestEntityOfType\@BlockSource\@\@QEAAPEAVActor\@\@PEBV2\@AEBVAABB\@\@W4ActorType\@\@\@Z
     */
    MCAPI class Actor* fetchNearestEntityOfType(class Actor const*, class AABB const&, enum class ActorType); // NOLINT
    /**
     * @symbol ?findNextTopSolidBlockAbove\@BlockSource\@\@QEAA_NAEAVBlockPos\@\@\@Z
     */
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos&); // NOLINT
    /**
     * @symbol ?findNextTopSolidBlockUnder\@BlockSource\@\@QEAA_NAEAVBlockPos\@\@\@Z
     */
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos&); // NOLINT
    /**
     * @symbol ?fireAreaChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0\@Z
     */
    MCAPI void fireAreaChanged(class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?fireBlockChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1HW4BlockChangedEventTarget\@\@PEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI void
    fireBlockChanged(class BlockPos const&, unsigned int, class Block const&, class Block const&, int, enum class BlockChangedEventTarget, struct ActorBlockSyncMessage const*, class Actor*); // NOLINT
    /**
     * @symbol ?fireBlockEntityAboutToBeRemoved\@BlockSource\@\@QEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void fireBlockEntityAboutToBeRemoved(class std::shared_ptr<class BlockActor>); // NOLINT
    /**
     * @symbol ?fireBlockEntityChanged\@BlockSource\@\@QEAAXAEAVBlockActor\@\@\@Z
     */
    MCAPI void fireBlockEntityChanged(class BlockActor&); // NOLINT
    /**
     * @symbol ?fireBrightnessChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void fireBrightnessChanged(class BlockPos const&); // NOLINT
    /**
     * @symbol ?fireEntityChanged\@BlockSource\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void fireEntityChanged(class Actor&); // NOLINT
    /**
     * @symbol ?getAboveTopSolidBlock\@BlockSource\@\@QEAAFHH_N0\@Z
     */
    MCAPI short getAboveTopSolidBlock(int, int, bool, bool); // NOLINT
    /**
     * @symbol ?getAboveTopSolidBlock\@BlockSource\@\@QEAAFAEBVBlockPos\@\@_N1\@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const&, bool, bool); // NOLINT
    /**
     * @symbol ?getAllocatedHeightAt\@BlockSource\@\@QEAAFAEBVBlockPos\@\@\@Z
     */
    MCAPI short getAllocatedHeightAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getBiome\@BlockSource\@\@QEAAAEAVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome& getBiome(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getBlockEntity\@BlockSource\@\@QEAAPEAVBlockActor\@\@HHH\@Z
     */
    MCAPI class BlockActor* getBlockEntity(int, int, int); // NOLINT
    /**
     * @symbol ?getBlockEntity\@BlockSource\@\@QEAAPEAVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BlockActor* getBlockEntity(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getBrightnessPair\@BlockSource\@\@QEBA?AUBrightnessPair\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getChunk\@BlockSource\@\@QEBAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class LevelChunk* getChunk(class ChunkPos const&) const; // NOLINT
    /**
     * @symbol ?getChunk\@BlockSource\@\@QEBAPEAVLevelChunk\@\@HH\@Z
     */
    MCAPI class LevelChunk* getChunk(int, int) const; // NOLINT
    /**
     * @symbol ?getConstBiome\@BlockSource\@\@QEBAAEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome const& getConstBiome(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getDefaultBrightness\@BlockSource\@\@QEBA?AUBrightnessPair\@\@XZ
     */
    MCAPI struct BrightnessPair getDefaultBrightness() const; // NOLINT
    /**
     * @symbol ?getGrassColor\@BlockSource\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getGrassColor(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getHeightmap\@BlockSource\@\@QEAAFHH\@Z
     */
    MCAPI short getHeightmap(int, int); // NOLINT
    /**
     * @symbol ?getHeightmap\@BlockSource\@\@QEBAFAEBVBlockPos\@\@\@Z
     */
    MCAPI short getHeightmap(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getHeightmapPos\@BlockSource\@\@QEBA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCAPI class BlockPos getHeightmapPos(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getLevel\@BlockSource\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel() const; // NOLINT
    /**
     * @symbol ?getLevel\@BlockSource\@\@QEAAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel(); // NOLINT
    /**
     * @symbol ?getLevelConst\@BlockSource\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const& getLevelConst() const; // NOLINT
    /**
     * @symbol ?getNextTickUpdateForPos\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@AEAUTick\@\@\@Z
     */
    MCAPI bool
    getNextTickUpdateForPos(class BlockPos const&, enum class TickingQueueType, struct Tick&) const; // NOLINT
    /**
     * @symbol ?getPublicSource\@BlockSource\@\@QEBA_NXZ
     */
    MCAPI bool getPublicSource() const; // NOLINT
    /**
     * @symbol ?getRawBrightness\@BlockSource\@\@QEBA?AUBrightness\@\@AEBVBlockPos\@\@_N1\@Z
     */
    MCAPI struct Brightness getRawBrightness(class BlockPos const&, bool, bool) const; // NOLINT
    /**
     * @symbol ?getRawBrightnessWithManualDarken\@BlockSource\@\@QEBA?AUBrightness\@\@AEBVBlockPos\@\@U2\@_N2\@Z
     */
    MCAPI struct Brightness
    getRawBrightnessWithManualDarken(class BlockPos const&, struct Brightness, bool, bool) const; // NOLINT
    /**
     * @symbol ?getSeenPercent\@BlockSource\@\@QEAAMAEBVVec3\@\@AEBVAABB\@\@\@Z
     */
    MCAPI float getSeenPercent(class Vec3 const&, class AABB const&); // NOLINT
    /**
     * @symbol ?getTickingQueue\@BlockSource\@\@QEBAPEAVBlockTickingQueue\@\@AEBVBlockPos\@\@W4TickingQueueType\@\@_N\@Z
     */
    MCAPI class BlockTickingQueue*
    getTickingQueue(class BlockPos const&, enum class TickingQueueType, bool) const; // NOLINT
    /**
     * @symbol ?getVoidHeight\@BlockSource\@\@QEBAFXZ
     */
    MCAPI short getVoidHeight() const; // NOLINT
    /**
     * @symbol ?getWritableChunk\@BlockSource\@\@QEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class LevelChunk* getWritableChunk(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?hasBorderBlock\@BlockSource\@\@QEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool hasBorderBlock(class BlockPos) const; // NOLINT
    /**
     * @symbol
     * ?hasSubChunksAt\@BlockSource\@\@QEBA?AU?$pair\@_NV?$optional\@VSubChunkPos\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0\@Z
     */
    MCAPI struct std::pair<bool, class std::optional<class SubChunkPos>>
    hasSubChunksAt(class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?hasTickInCurrentTick\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?hasTickInCurrentTick\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const&, enum class TickingQueueType) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, enum class TickingQueueType) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const&, class BlockLegacy const&) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool
    hasTickInPendingTicks(class BlockPos const&, class Block const&, enum class TickingQueueType) const; // NOLINT
    /**
     * @symbol ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlockLegacy\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool
    hasTickInPendingTicks(class BlockPos const&, class BlockLegacy const&, enum class TickingQueueType) const; // NOLINT
    /**
     * @symbol ?hasUntickedNeighborChunk\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@H\@Z
     */
    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const&, int) const; // NOLINT
    /**
     * @symbol ?isChunkFullyLoaded\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@AEBVChunkSource\@\@\@Z
     */
    MCAPI bool isChunkFullyLoaded(class ChunkPos const&, class ChunkSource const&) const; // NOLINT
    /**
     * @symbol ?isConsideredSolidBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isConsideredSolidBlock(class BlockPos const&); // NOLINT
    /**
     * @symbol ?isEmptyBlock\@BlockSource\@\@QEAA_NHHH\@Z
     */
    MCAPI bool isEmptyBlock(int, int, int); // NOLINT
    /**
     * @symbol ?isEmptyBlock\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyBlock(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isEmptyWaterBlock\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyWaterBlock(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isInWall\@BlockSource\@\@QEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool isInWall(class Vec3 const&); // NOLINT
    /**
     * @symbol ?isInstaticking\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInstaticking(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isNearUnloadedChunks\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool isNearUnloadedChunks(class ChunkPos const&) const; // NOLINT
    /**
     * @symbol ?isTouchingMaterial\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isTouchingMaterial(class BlockPos const&, enum class MaterialType) const; // NOLINT
    /**
     * @symbol ?isUnderWater\@BlockSource\@\@QEBA_NAEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool isUnderWater(class Vec3 const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?isUnobstructedByEntities\@BlockSource\@\@QEAA_NAEBVAABB\@\@PEBVActor\@\@\@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const&, class Actor const*); // NOLINT
    /**
     * @symbol
     * ?isUnobstructedByEntities\@BlockSource\@\@QEAA_NAEBVAABB\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI bool
    isUnobstructedByEntities(class AABB const&, class gsl::span<class gsl::not_null<class Actor const*>, -1>); // NOLINT
    /**
     * @symbol ?isWithinHeightLimits\@BlockSource\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinHeightLimits(int) const; // NOLINT
    /**
     * @symbol ?mayPlace\@BlockSource\@\@QEAA_NAEBVBlock\@\@AEBVBlockPos\@\@EPEAVActor\@\@_NVVec3\@\@\@Z
     */
    MCAPI bool
    mayPlace(class Block const&, class BlockPos const&, unsigned char, class Actor*, bool, class Vec3); // NOLINT
    /**
     * @symbol ?neighborChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0\@Z
     */
    MCAPI void neighborChanged(class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?postGameEvent\@BlockSource\@\@QEAAXPEAVActor\@\@AEBVGameEvent\@\@AEBVBlockPos\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void postGameEvent(class Actor*, class GameEvent const&, class BlockPos const&, class Block const*); // NOLINT
    /**
     * @symbol ?postGameEvent\@BlockSource\@\@QEAAXPEAVActor\@\@AEBVGameEvent\@\@AEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void postGameEvent(class Actor*, class GameEvent const&, class Vec3 const&, class Block const*); // NOLINT
    /**
     * @symbol ?removeBlock\@BlockSource\@\@QEAA_NHHH\@Z
     */
    MCAPI bool removeBlock(int, int, int); // NOLINT
    /**
     * @symbol ?removeBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool removeBlock(class BlockPos const&); // NOLINT
    /**
     * @symbol ?removeBlockEntity\@BlockSource\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const&); // NOLINT
    /**
     * @symbol ?removeFromRandomTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void removeFromRandomTickingQueue(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol ?removeFromTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void removeFromTickingQueue(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol
     * ?setBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@HV?$shared_ptr\@VBlockActor\@\@\@std\@\@PEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool
    setBlock(class BlockPos const&, class Block const&, int, class std::shared_ptr<class BlockActor>, struct ActorBlockSyncMessage const*, class Actor*); // NOLINT
    /**
     * @symbol ?setBlock\@BlockSource\@\@QEAA_NHHHAEBVBlock\@\@HPEAVActor\@\@\@Z
     */
    MCAPI bool setBlock(int, int, int, class Block const&, int, class Actor*); // NOLINT
    /**
     * @symbol ?setBlockNoUpdate\@BlockSource\@\@QEAA_NHHHAEBVBlock\@\@\@Z
     */
    MCAPI bool setBlockNoUpdate(int, int, int, class Block const&); // NOLINT
    /**
     * @symbol ?setBlockSimple\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool setBlockSimple(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol ?setBorderBlock\@BlockSource\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void setBorderBlock(class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?setCurrentTickForValidityChecks\@BlockSource\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void setCurrentTickForValidityChecks(struct Tick const&); // NOLINT
    /**
     * @symbol ?setExtraBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI bool setExtraBlock(class BlockPos const&, class Block const&, int); // NOLINT
    /**
     * @symbol ?setExtraBlockSimple\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool setExtraBlockSimple(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol ?setIsPersistentBlockSource\@BlockSource\@\@QEAAXXZ
     */
    MCAPI void setIsPersistentBlockSource(); // NOLINT
    /**
     * @symbol ?setLiquidBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@_NH\@Z
     */
    MCAPI bool setLiquidBlock(class BlockPos const&, class Block const&, bool, int); // NOLINT
    /**
     * @symbol ?setRandomTickingQueue\@BlockSource\@\@QEAAXAEAVBlockTickingQueue\@\@\@Z
     */
    MCAPI void setRandomTickingQueue(class BlockTickingQueue&); // NOLINT
    /**
     * @symbol ?setTickingQueue\@BlockSource\@\@QEAAXAEAVBlockTickingQueue\@\@\@Z
     */
    MCAPI void setTickingQueue(class BlockTickingQueue&); // NOLINT
    /**
     * @symbol ?shouldFireEvents\@BlockSource\@\@QEBA_NAEAVLevelChunk\@\@\@Z
     */
    MCAPI bool shouldFireEvents(class LevelChunk&) const; // NOLINT
    /**
     * @symbol ?ticksFromNow\@BlockSource\@\@QEBAHAEBVBlockPos\@\@W4TickingQueueType\@\@H\@Z
     */
    MCAPI int ticksFromNow(class BlockPos const&, enum class TickingQueueType, int) const; // NOLINT
    /**
     * @symbol ?tryGetBiome\@BlockSource\@\@QEBAPEAVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome* tryGetBiome(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?updateCheckForValidityState\@BlockSource\@\@QEAAX_N\@Z
     */
    MCAPI void updateCheckForValidityState(bool); // NOLINT
    /**
     * @symbol ?updateNeighborsAt\@BlockSource\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void updateNeighborsAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?updateNeighborsAtExceptFromFacing\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0H\@Z
     */
    MCAPI void updateNeighborsAtExceptFromFacing(class BlockPos const&, class BlockPos const&, int); // NOLINT
    /**
     * @symbol ?containsMaterial\@BlockSource\@\@SA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool
    containsMaterial(class IConstBlockSource const&, class AABB const&, enum class MaterialType); // NOLINT
    /**
     * @symbol
     * ?doesIntersect\@BlockSource\@\@SA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@AEBVGetCollisionShapeInterface\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static bool doesIntersect(
        class IConstBlockSource const&,
        class AABB const&,
        class GetCollisionShapeInterface const&,
        std::vector<class AABB>&,
        bool
    ); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_blockChanged\@BlockSource\@\@IEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1HPEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI void
    _blockChanged(class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, class Actor*); // NOLINT
    /**
     * @symbol
     * ?_fetchBorderBlockCollisions\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@_N\@Z
     */
    MCAPI void _fetchBorderBlockCollisions(
        std::vector<class AABB>&,
        class AABB const&,
        class optional_ref<class GetCollisionShapeInterface const>,
        bool
    ) const; // NOLINT
    /**
     * @symbol
     * ?_fetchEntityHelper\@BlockSource\@\@IEAAXVWeakEntityRef\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI void _fetchEntityHelper(
        class WeakEntityRef,
        class gsl::span<class gsl::not_null<class Actor const*>, -1>,
        class AABB const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?_hasChunksAt\@BlockSource\@\@IEBA_NAEBUBounds\@\@_N\@Z
     */
    MCAPI bool _hasChunksAt(struct Bounds const&, bool) const; // NOLINT
    /**
     * @symbol
     * ?_updateTallestCollisionShapeWithBorderBlockCollisions\@BlockSource\@\@IEBAXAEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV2\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI void
    _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const&, class optional_ref<class GetCollisionShapeInterface const>, class AABB&, class Vec3 const&, float&)
        const; // NOLINT
    /**
     * @symbol
     * ?addUnloadedChunksAABBs\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB>&, class AABB const&) const; // NOLINT
    /**
     * @symbol
     * ?addVoidFloor\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI void addVoidFloor(std::vector<class AABB>&, class AABB const&) const; // NOLINT
    /**
     * @symbol
     * ?getTallestCollisionShapeFromUnloadedChunksAABBs\@BlockSource\@\@IEBAXAEBVAABB\@\@AEAV2\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI void
    getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const&, class AABB&, class Vec3 const&, float&)
        const; // NOLINT

    // private:
    /**
     * @symbol ?_addToTickingQueue\@BlockSource\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@HHW4TickingQueueType\@\@_N\@Z
     */
    MCAPI void _addToTickingQueue(
        class BlockPos const&,
        class Block const&,
        int,
        int,
        enum class TickingQueueType,
        bool
    ); // NOLINT
    /**
     * @symbol ?_getBlockPermissions\@BlockSource\@\@AEAA_NAEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _getBlockPermissions(class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?_getRawBrightness\@BlockSource\@\@AEBA?AUBrightness\@\@AEBVBlockPos\@\@U2\@_N2\@Z
     */
    MCAPI struct Brightness _getRawBrightness(class BlockPos const&, struct Brightness, bool, bool) const; // NOLINT
    /**
     * @symbol ?_removeFromTickingQueue\@BlockSource\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI void
    _removeFromTickingQueue(class BlockPos const&, class Block const&, enum class TickingQueueType); // NOLINT

protected:
private:
};
