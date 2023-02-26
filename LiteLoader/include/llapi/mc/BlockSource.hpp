/**
 * @file  BlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "BlockInstance.hpp"
#include "Actor.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSource.
 *
 */
class BlockSource {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCE
public:
struct ClipParameters
{
    MCAPI static const std::function<bool(class Block const&)> CHECK_ALL_BLOCKS;
};
    LIAPI BlockInstance getBlockInstance(BlockPos);

    /**
     * @par Example
     * @code
     * BlockSource* bs;
     * Actor* actor;
     * AABB aabb = actor->getAABB();
     * aabb.min -= 10;
     * aabb.max += 10;
     *
     * // By default, ignoreTargetType = false. The results of the query will all be the target actorType.
     * bs->queryEntities(ActorType::Creeper, aabb);
     *
     * // If ignoreTargetType = true, query results will contain actorTypes other than targets.
     * bs->queryEntities(ActorType::Creeper, aabb, true);
     *
     * @endcode
     */
    LIAPI vector<Actor*> queryEntities(ActorType actorType, const AABB& range, bool ignoreTargetType = false);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCE
public:
    class BlockSource& operator=(class BlockSource const &) = delete;
    BlockSource(class BlockSource const &) = delete;
    BlockSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockSource();
    /**
     * @vftbl  1
     * @symbol  ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@HHH\@Z
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @vftbl  2
     * @symbol  ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @vftbl  3
     * @symbol  ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@I\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @vftbl  4
     * @symbol  ?getBlockEntity\@BlockSource\@\@UEBAPEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getExtraBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol  ?getLiquidBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol  ?hasBlock\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @vftbl  8
     * @symbol  ?containsAnyLiquid\@BlockSource\@\@UEBA_NAEBVAABB\@\@\@Z
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @vftbl  9
     * @symbol  ?containsMaterial\@BlockSource\@\@UEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @vftbl  10
     * @symbol  ?getMaterial\@BlockSource\@\@UEBAAEBVMaterial\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @vftbl  11
     * @symbol  ?getMaterial\@BlockSource\@\@UEBAAEBVMaterial\@\@HHH\@Z
     */
    virtual class Material const & getMaterial(int, int, int) const;
    /**
     * @vftbl  12
     * @symbol  ?hasChunksAt\@BlockSource\@\@UEBA_NAEBUBounds\@\@_N\@Z
     */
    virtual bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @vftbl  13
     * @symbol  ?hasChunksAt\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@H_N\@Z
     */
    virtual bool hasChunksAt(class BlockPos const &, int, bool) const;
    /**
     * @vftbl  14
     * @symbol  ?hasChunksAt\@BlockSource\@\@UEBA_NAEBVAABB\@\@_N\@Z
     */
    virtual bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @vftbl  15
     * @symbol  ?getDimensionId\@BlockSource\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @vftbl  16
     * @symbol  ?fetchAABBs\@BlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @vftbl  17
     * @symbol  ?fetchCollisionShapes\@BlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  18
     * @symbol  ?getTallestCollisionShape\@BlockSource\@\@UEBA?AVAABB\@\@AEBV2\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual class AABB getTallestCollisionShape(class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol  ?getBrightness\@BlockSource\@\@UEBAMAEBVBlockPos\@\@\@Z
     */
    virtual float getBrightness(class BlockPos const &) const;
    /**
     * @vftbl  20
     * @symbol  ?fetchAABBs\@BlockSource\@\@UEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual std::vector<class AABB> & fetchAABBs(class AABB const &, bool);
    /**
     * @vftbl  21
     * @symbol  ?fetchCollisionShapes\@BlockSource\@\@UEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NPEAUIActorMovementProxy\@\@\@Z
     */
    virtual std::vector<class AABB> & fetchCollisionShapes(class AABB const &, float *, bool, struct IActorMovementProxy *);
    /**
     * @vftbl  22
     * @symbol  ?getWeakRef\@BlockSource\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    virtual class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getWeakRef();
    /**
     * @vftbl  23
     * @symbol  ?addListener\@BlockSource\@\@UEAAXAEAVBlockSourceListener\@\@\@Z
     */
    virtual void addListener(class BlockSourceListener &);
    /**
     * @vftbl  24
     * @symbol  ?removeListener\@BlockSource\@\@UEAAXAEAVBlockSourceListener\@\@\@Z
     */
    virtual void removeListener(class BlockSourceListener &);
    /**
     * @vftbl  25
     * @symbol  ?fetchEntities\@BlockSource\@\@UEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@PEBVActor\@\@AEBVAABB\@\@_N2\@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class Actor const *, class AABB const &, bool, bool);
    /**
     * @vftbl  26
     * @symbol  ?fetchEntities\@BlockSource\@\@UEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@W4ActorType\@\@AEBVAABB\@\@PEBVActor\@\@\@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(enum class ActorType, class AABB const &, class Actor const *);
    /**
     * @vftbl  27
     * @symbol  ?setBlock\@BlockSource\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@HPEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @vftbl  28
     * @symbol  ?getMaxHeight\@BlockSource\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  29
     * @symbol  ?getMinHeight\@BlockSource\@\@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  ?getChunkAt\@BlockSource\@\@UEBAPEAVLevelChunk\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class LevelChunk * getChunkAt(class BlockPos const &) const;
    /**
     * @vftbl  34
     * @symbol  ?getILevel\@BlockSource\@\@UEBAAEAVILevel\@\@XZ
     */
    virtual class ILevel & getILevel() const;
    /**
     * @vftbl  35
     * @symbol  ?getChunkSource\@BlockSource\@\@UEAAAEAVChunkSource\@\@XZ
     */
    virtual class ChunkSource & getChunkSource();
    /**
     * @vftbl  36
     * @symbol  ?isSolidBlockingBlock\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isSolidBlockingBlock(class BlockPos const &) const;
    /**
     * @vftbl  37
     * @symbol  ?isSolidBlockingBlock\@BlockSource\@\@UEBA_NHHH\@Z
     */
    virtual bool isSolidBlockingBlock(int, int, int) const;
    /**
     * @vftbl  38
     * @symbol  ?areChunksFullyLoaded\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@H\@Z
     */
    virtual bool areChunksFullyLoaded(class BlockPos const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCE
    /**
     * @symbol  ?getDimension\@BlockSource\@\@UEAAAEAVDimension\@\@XZ
     */
    MCVAPI class Dimension & getDimension();
    /**
     * @symbol  ?getDimension\@BlockSource\@\@UEBAAEAVDimension\@\@XZ
     */
    MCVAPI class Dimension & getDimension() const;
    /**
     * @symbol  ?getDimensionConst\@BlockSource\@\@UEBAAEBVDimension\@\@XZ
     */
    MCVAPI class Dimension const & getDimensionConst() const;
#endif
    /**
     * @symbol  ??0BlockSource\@\@QEAA\@AEAVLevel\@\@AEAVDimension\@\@AEAVChunkSource\@\@_N33\@Z
     */
    MCAPI BlockSource(class Level &, class Dimension &, class ChunkSource &, bool, bool, bool);
    /**
     * @symbol  ??0BlockSource\@\@QEAA\@AEAVChunkSource\@\@_N1\@Z
     */
    MCAPI BlockSource(class ChunkSource &, bool, bool);
    /**
     * @symbol  ?_fetchEntities\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@PEBUIActorMovementProxy\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> _fetchEntities(struct IActorMovementProxy const *, class AABB const &, bool);
    /**
     * @symbol  ?addToRandomTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH_N\@Z
     */
    MCAPI void addToRandomTickingQueue(class BlockPos const &, class Block const &, int, int, bool);
    /**
     * @symbol  ?addToRandomTickingQueuePercentChance\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@MH_N\@Z
     */
    MCAPI void addToRandomTickingQueuePercentChance(class BlockPos const &, class Block const &, float, int, bool);
    /**
     * @symbol  ?addToTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH_N\@Z
     */
    MCAPI void addToTickingQueue(class BlockPos const &, class Block const &, int, int, bool);
    /**
     * @symbol  ?allowsRunes\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool allowsRunes(class BlockPos const &);
    /**
     * @symbol  ?areAllChunksLoaded\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI bool areAllChunksLoaded(class BlockPos const &, class BlockVolume &) const;
    /**
     * @symbol  ?areChunksFullyLoaded\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0\@Z
     */
    MCAPI bool areChunksFullyLoaded(class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol  ?blockEvent\@BlockSource\@\@QEAAXAEBVBlockPos\@\@HH\@Z
     */
    MCAPI void blockEvent(class BlockPos const &, int, int);
    /**
     * @symbol  ?canProvideSupport\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@EW4BlockSupportType\@\@\@Z
     */
    MCAPI bool canProvideSupport(class BlockPos const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @symbol  ?canSeeSky\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSeeSky(class BlockPos const &) const;
    /**
     * @symbol  ?canSeeSky\@BlockSource\@\@QEBA_NHHH\@Z
     */
    MCAPI bool canSeeSky(int, int, int) const;
    /**
     * @symbol  ?canSeeSkyFromBelowWater\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const &);
    /**
     * @symbol  ?checkBlockDestroyPermissions\@BlockSource\@\@QEAA_NAEAVActor\@\@AEBVBlockPos\@\@AEBVItemStackBase\@\@_N\@Z
     */
    MCAPI bool checkBlockDestroyPermissions(class Actor &, class BlockPos const &, class ItemStackBase const &, bool);
    /**
     * @symbol  ?checkBlockPermissions\@BlockSource\@\@QEAA_NAEAVActor\@\@AEBVBlockPos\@\@EAEBVItemStackBase\@\@_N\@Z
     */
    MCAPI bool checkBlockPermissions(class Actor &, class BlockPos const &, unsigned char, class ItemStackBase const &, bool);
    /**
     * @symbol  ?checkValidity\@BlockSource\@\@QEBAXXZ
     */
    MCAPI void checkValidity() const;
    /**
     * @symbol  ?clip\@BlockSource\@\@QEBA?AVHitResult\@\@AEBUClipParameters\@\@\@Z
     */
    MCAPI class HitResult clip(struct ClipParameters const &) const;
    /**
     * @symbol  ?clip\@BlockSource\@\@QEBA?AVHitResult\@\@AEBVVec3\@\@0_N1H11PEAVPlayer\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z\@std\@\@\@Z
     */
    MCAPI class HitResult clip(class Vec3 const &, class Vec3 const &, bool, bool, int, bool, bool, class Player *, class std::function<bool (class BlockSource const &, class Block const &, bool)> const &) const;
    /**
     * @symbol  ?containsAnyBlockInBox\@BlockSource\@\@QEAA_NAEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool containsAnyBlockInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @symbol  ?containsAnyBlockOfType\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0AEBVBlock\@\@\@Z
     */
    MCAPI bool containsAnyBlockOfType(class BlockPos const &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?containsAnySolidBlocking\@BlockSource\@\@QEBA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool containsAnySolidBlocking(class AABB const &) const;
    /**
     * @symbol  ?countBlocksOfType\@BlockSource\@\@QEBA_KAEBVBlockDescriptor\@\@AEBVBlockPos\@\@1_K\@Z
     */
    MCAPI unsigned __int64 countBlocksOfType(class BlockDescriptor const &, class BlockPos const &, class BlockPos const &, unsigned __int64) const;
    /**
     * @symbol  ?fetchActorIds\@BlockSource\@\@QEBAXAEBVAABB\@\@AEAV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchActorIds(class AABB const &, std::vector<struct ActorUniqueID> &) const;
    /**
     * @symbol  ?fetchActorIds\@BlockSource\@\@QEBAX_KAEBVAABB\@\@AEAV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchActorIds(unsigned __int64, class AABB const &, std::vector<struct ActorUniqueID> &) const;
    /**
     * @symbol  ?fetchActors\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchActors(struct ActorDefinitionIdentifier const &, class AABB const &);
    /**
     * @symbol  ?fetchBlockEntities\@BlockSource\@\@QEAAAEBV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI std::vector<class BlockActor *> const & fetchBlockEntities(class AABB const &);
    /**
     * @symbol  ?fetchBlockEntities\@BlockSource\@\@QEAAXAEBVAABB\@\@AEAV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void fetchBlockEntities(class AABB const &, std::vector<class BlockActor *> &, bool);
    /**
     * @symbol  ?fetchBlockEntities\@BlockSource\@\@QEBA?AV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@W4BlockActorType\@\@AEBVAABB\@\@\@Z
     */
    MCAPI std::vector<class BlockActor *> fetchBlockEntities(enum class BlockActorType, class AABB const &) const;
    /**
     * @symbol  ?fetchBlocks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI bool fetchBlocks(class BlockPos const &, class BlockVolume &) const;
    /**
     * @symbol  ?fetchBlocksInBox\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @symbol  ?fetchBlocksInBoxSorted\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBoxSorted(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @symbol  ?fetchBlocksInCylinder\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBlockPos\@\@IIV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInCylinder(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    /**
     * @symbol  ?fetchBlocksInCylinderSorted\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBlockPos\@\@IIV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInCylinderSorted(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    /**
     * @symbol  ?fetchEntities\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@3\@AEBVAABB\@\@_N2\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool, bool);
    /**
     * @symbol  ?fetchEntities2\@BlockSource\@\@QEAAAEBV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@W4ActorType\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI std::vector<class Actor *> const & fetchEntities2(enum class ActorType, class AABB const &, bool);
    /**
     * @symbol  ?fetchNearestEntityOfType\@BlockSource\@\@QEAAPEAVActor\@\@PEBV2\@AEBVAABB\@\@W4ActorType\@\@\@Z
     */
    MCAPI class Actor * fetchNearestEntityOfType(class Actor const *, class AABB const &, enum class ActorType);
    /**
     * @symbol  ?findNextTopSolidBlockAbove\@BlockSource\@\@QEAA_NAEAVBlockPos\@\@\@Z
     */
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos &);
    /**
     * @symbol  ?findNextTopSolidBlockUnder\@BlockSource\@\@QEAA_NAEAVBlockPos\@\@\@Z
     */
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos &);
    /**
     * @symbol  ?fireAreaChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0\@Z
     */
    MCAPI void fireAreaChanged(class BlockPos const &, class BlockPos const &);
    /**
     * @symbol  ?fireBlockChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1HW4BlockChangedEventTarget\@\@PEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI void fireBlockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, enum class BlockChangedEventTarget, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @symbol  ?fireBlockEntityAboutToBeRemoved\@BlockSource\@\@QEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void fireBlockEntityAboutToBeRemoved(class std::shared_ptr<class BlockActor>);
    /**
     * @symbol  ?fireBlockEntityChanged\@BlockSource\@\@QEAAXAEAVBlockActor\@\@\@Z
     */
    MCAPI void fireBlockEntityChanged(class BlockActor &);
    /**
     * @symbol  ?fireBrightnessChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void fireBrightnessChanged(class BlockPos const &);
    /**
     * @symbol  ?fireEntityChanged\@BlockSource\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void fireEntityChanged(class Actor &);
    /**
     * @symbol  ?getAABBFetchResultCache\@BlockSource\@\@QEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AABB> & getAABBFetchResultCache();
    /**
     * @symbol  ?getAboveTopSolidBlock\@BlockSource\@\@QEAAFAEBVBlockPos\@\@_N1\@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool);
    /**
     * @symbol  ?getAboveTopSolidBlock\@BlockSource\@\@QEAAFHH_N0\@Z
     */
    MCAPI short getAboveTopSolidBlock(int, int, bool, bool);
    /**
     * @symbol  ?getAllocatedHeightAt\@BlockSource\@\@QEAAFAEBVBlockPos\@\@\@Z
     */
    MCAPI short getAllocatedHeightAt(class BlockPos const &);
    /**
     * @symbol  ?getBiome\@BlockSource\@\@QEAAAEAVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome & getBiome(class BlockPos const &);
    /**
     * @symbol  ?getBlockEntity\@BlockSource\@\@QEAAPEAVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BlockActor * getBlockEntity(class BlockPos const &);
    /**
     * @symbol  ?getBlockEntity\@BlockSource\@\@QEAAPEAVBlockActor\@\@HHH\@Z
     */
    MCAPI class BlockActor * getBlockEntity(int, int, int);
    /**
     * @symbol  ?getBrightnessPair\@BlockSource\@\@QEBA?AUBrightnessPair\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const &) const;
    /**
     * @symbol  ?getChunk\@BlockSource\@\@QEBAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class LevelChunk * getChunk(class ChunkPos const &) const;
    /**
     * @symbol  ?getChunk\@BlockSource\@\@QEBAPEAVLevelChunk\@\@HH\@Z
     */
    MCAPI class LevelChunk * getChunk(int, int) const;
    /**
     * @symbol  ?getConstBiome\@BlockSource\@\@QEBAAEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome const & getConstBiome(class BlockPos const &) const;
    /**
     * @symbol  ?getDefaultBrightness\@BlockSource\@\@QEBA?AUBrightnessPair\@\@XZ
     */
    MCAPI struct BrightnessPair getDefaultBrightness() const;
    /**
     * @symbol  ?getGrassColor\@BlockSource\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getGrassColor(class BlockPos const &) const;
    /**
     * @symbol  ?getHeightmap\@BlockSource\@\@QEAAFHH\@Z
     */
    MCAPI short getHeightmap(int, int);
    /**
     * @symbol  ?getHeightmap\@BlockSource\@\@QEBAFAEBVBlockPos\@\@\@Z
     */
    MCAPI short getHeightmap(class BlockPos const &) const;
    /**
     * @symbol  ?getHeightmapPos\@BlockSource\@\@QEBA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCAPI class BlockPos getHeightmapPos(class BlockPos const &) const;
    /**
     * @symbol  ?getLevel\@BlockSource\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @symbol  ?getLevel\@BlockSource\@\@QEAAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel();
    /**
     * @symbol  ?getLevelConst\@BlockSource\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const & getLevelConst() const;
    /**
     * @symbol  ?getNextTickUpdateForPos\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@AEAUTick\@\@\@Z
     */
    MCAPI bool getNextTickUpdateForPos(class BlockPos const &, enum class TickingQueueType, struct Tick &) const;
    /**
     * @symbol  ?getPublicSource\@BlockSource\@\@QEBA_NXZ
     */
    MCAPI bool getPublicSource() const;
    /**
     * @symbol  ?getRawBrightness\@BlockSource\@\@QEBA?AUBrightness\@\@AEBVBlockPos\@\@_N1\@Z
     */
    MCAPI struct Brightness getRawBrightness(class BlockPos const &, bool, bool) const;
    /**
     * @symbol  ?getRawBrightnessWithManualDarken\@BlockSource\@\@QEBA?AUBrightness\@\@AEBVBlockPos\@\@U2\@_N2\@Z
     */
    MCAPI struct Brightness getRawBrightnessWithManualDarken(class BlockPos const &, struct Brightness, bool, bool) const;
    /**
     * @symbol  ?getSeenPercent\@BlockSource\@\@QEAAMAEBVVec3\@\@AEBVAABB\@\@\@Z
     */
    MCAPI float getSeenPercent(class Vec3 const &, class AABB const &);
    /**
     * @symbol  ?getTickingQueue\@BlockSource\@\@QEBAPEAVBlockTickingQueue\@\@AEBVBlockPos\@\@W4TickingQueueType\@\@_N\@Z
     */
    MCAPI class BlockTickingQueue * getTickingQueue(class BlockPos const &, enum class TickingQueueType, bool) const;
    /**
     * @symbol  ?getVoidHeight\@BlockSource\@\@QEBAFXZ
     */
    MCAPI short getVoidHeight() const;
    /**
     * @symbol  ?getWritableChunk\@BlockSource\@\@QEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class LevelChunk * getWritableChunk(class ChunkPos const &);
    /**
     * @symbol  ?hasBorderBlock\@BlockSource\@\@QEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool hasBorderBlock(class BlockPos) const;
    /**
     * @symbol  ?hasChunksAt\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0_N\@Z
     */
    MCAPI bool hasChunksAt(class BlockPos const &, class BlockPos const &, bool) const;
    /**
     * @symbol  ?hasSubChunksAt\@BlockSource\@\@QEBA?AU?$pair\@_NV?$optional\@VSubChunkPos\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0\@Z
     */
    MCAPI struct std::pair<bool, class std::optional<class SubChunkPos>> hasSubChunksAt(class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol  ?hasTickInCurrentTick\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &) const;
    /**
     * @symbol  ?hasTickInCurrentTick\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &, enum class TickingQueueType) const;
    /**
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &) const;
    /**
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &, enum class TickingQueueType) const;
    /**
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class BlockLegacy const &) const;
    /**
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlockLegacy\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class BlockLegacy const &, enum class TickingQueueType) const;
    /**
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, enum class TickingQueueType) const;
    /**
     * @symbol  ?hasUntickedNeighborChunk\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@H\@Z
     */
    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const &, int) const;
    /**
     * @symbol  ?isChunkFullyLoaded\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@AEBVChunkSource\@\@\@Z
     */
    MCAPI bool isChunkFullyLoaded(class ChunkPos const &, class ChunkSource const &) const;
    /**
     * @symbol  ?isConsideredSolidBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isConsideredSolidBlock(class BlockPos const &);
    /**
     * @symbol  ?isEmptyBlock\@BlockSource\@\@QEAA_NHHH\@Z
     */
    MCAPI bool isEmptyBlock(int, int, int);
    /**
     * @symbol  ?isEmptyBlock\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyBlock(class BlockPos const &) const;
    /**
     * @symbol  ?isEmptyWaterBlock\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyWaterBlock(class BlockPos const &) const;
    /**
     * @symbol  ?isInWall\@BlockSource\@\@QEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool isInWall(class Vec3 const &);
    /**
     * @symbol  ?isInstaticking\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInstaticking(class BlockPos const &) const;
    /**
     * @symbol  ?isNearUnloadedChunks\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool isNearUnloadedChunks(class ChunkPos const &) const;
    /**
     * @symbol  ?isTouchingMaterial\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isTouchingMaterial(class BlockPos const &, enum class MaterialType) const;
    /**
     * @symbol  ?isUnderWater\@BlockSource\@\@QEBA_NAEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool isUnderWater(class Vec3 const &, class Block const &) const;
    /**
     * @symbol  ?isUnobstructedByEntities\@BlockSource\@\@QEAA_NAEBVAABB\@\@PEBVActor\@\@\@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const &, class Actor const *);
    /**
     * @symbol  ?isUnobstructedByEntities\@BlockSource\@\@QEAA_NAEBVAABB\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const &, class gsl::span<class gsl::not_null<class Actor const *>, -1>);
    /**
     * @symbol  ?isWithinHeightLimits\@BlockSource\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinHeightLimits(int) const;
    /**
     * @symbol  ?mayPlace\@BlockSource\@\@QEAA_NAEBVBlock\@\@AEBVBlockPos\@\@EPEAVActor\@\@_N\@Z
     */
    MCAPI bool mayPlace(class Block const &, class BlockPos const &, unsigned char, class Actor *, bool);
    /**
     * @symbol  ?neighborChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0\@Z
     */
    MCAPI void neighborChanged(class BlockPos const &, class BlockPos const &);
    /**
     * @symbol  ?postGameEvent\@BlockSource\@\@QEAAXPEAVActor\@\@AEBVGameEvent\@\@AEBVBlockPos\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void postGameEvent(class Actor *, class GameEvent const &, class BlockPos const &, class Block const *);
    /**
     * @symbol  ?postGameEvent\@BlockSource\@\@QEAAXPEAVActor\@\@AEBVGameEvent\@\@AEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void postGameEvent(class Actor *, class GameEvent const &, class Vec3 const &, class Block const *);
    /**
     * @symbol  ?removeBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool removeBlock(class BlockPos const &);
    /**
     * @symbol  ?removeBlock\@BlockSource\@\@QEAA_NHHH\@Z
     */
    MCAPI bool removeBlock(int, int, int);
    /**
     * @symbol  ?removeBlockEntity\@BlockSource\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const &);
    /**
     * @symbol  ?removeFromRandomTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void removeFromRandomTickingQueue(class BlockPos const &, class Block const &);
    /**
     * @symbol  ?removeFromTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void removeFromTickingQueue(class BlockPos const &, class Block const &);
    /**
     * @symbol  ?setBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@HV?$shared_ptr\@VBlockActor\@\@\@std\@\@PEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool setBlock(class BlockPos const &, class Block const &, int, class std::shared_ptr<class BlockActor>, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @symbol  ?setBlock\@BlockSource\@\@QEAA_NHHHAEBVBlock\@\@HPEAVActor\@\@\@Z
     */
    MCAPI bool setBlock(int, int, int, class Block const &, int, class Actor *);
    /**
     * @symbol  ?setBlockNoUpdate\@BlockSource\@\@QEAA_NHHHAEBVBlock\@\@\@Z
     */
    MCAPI bool setBlockNoUpdate(int, int, int, class Block const &);
    /**
     * @symbol  ?setBlockSimple\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @symbol  ?setBorderBlock\@BlockSource\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void setBorderBlock(class BlockPos const &, bool);
    /**
     * @symbol  ?setCurrentTickForValidityChecks\@BlockSource\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void setCurrentTickForValidityChecks(struct Tick const &);
    /**
     * @symbol  ?setExtraBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI bool setExtraBlock(class BlockPos const &, class Block const &, int);
    /**
     * @symbol  ?setExtraBlockSimple\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool setExtraBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @symbol  ?setIsPersistentBlockSource\@BlockSource\@\@QEAAXXZ
     */
    MCAPI void setIsPersistentBlockSource();
    /**
     * @symbol  ?setLiquidBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@_NH\@Z
     */
    MCAPI bool setLiquidBlock(class BlockPos const &, class Block const &, bool, int);
    /**
     * @symbol  ?setRandomTickingQueue\@BlockSource\@\@QEAAXAEAVBlockTickingQueue\@\@\@Z
     */
    MCAPI void setRandomTickingQueue(class BlockTickingQueue &);
    /**
     * @symbol  ?setTickingQueue\@BlockSource\@\@QEAAXAEAVBlockTickingQueue\@\@\@Z
     */
    MCAPI void setTickingQueue(class BlockTickingQueue &);
    /**
     * @symbol  ?shouldFireEvents\@BlockSource\@\@QEBA_NAEAVLevelChunk\@\@\@Z
     */
    MCAPI bool shouldFireEvents(class LevelChunk &) const;
    /**
     * @symbol  ?ticksFromNow\@BlockSource\@\@QEBAHAEBVBlockPos\@\@W4TickingQueueType\@\@H\@Z
     */
    MCAPI int ticksFromNow(class BlockPos const &, enum class TickingQueueType, int) const;
    /**
     * @symbol  ?tryGetBiome\@BlockSource\@\@QEBAPEAVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome * tryGetBiome(class BlockPos const &) const;
    /**
     * @symbol  ?updateCheckForValidityState\@BlockSource\@\@QEAAX_N\@Z
     */
    MCAPI void updateCheckForValidityState(bool);
    /**
     * @symbol  ?updateNeighborsAt\@BlockSource\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void updateNeighborsAt(class BlockPos const &);
    /**
     * @symbol  ?updateNeighborsAtExceptFromFacing\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0H\@Z
     */
    MCAPI void updateNeighborsAtExceptFromFacing(class BlockPos const &, class BlockPos const &, int);
    /**
     * @symbol  ?containsAnyLiquid\@BlockSource\@\@SA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@\@Z
     */
    MCAPI static bool containsAnyLiquid(class IConstBlockSource const &, class AABB const &);
    /**
     * @symbol  ?containsMaterial\@BlockSource\@\@SA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool containsMaterial(class IConstBlockSource const &, class AABB const &, enum class MaterialType);
    /**
     * @symbol  ?generateUnloadedChunkAABB\@BlockSource\@\@SA?AVAABB\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI static class AABB generateUnloadedChunkAABB(class ChunkPos const &);
    /**
     * @symbol  ?getLiquidBlock\@BlockSource\@\@SAAEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Block const & getLiquidBlock(class IConstBlockSource const &, class BlockPos const &);

//protected:
    /**
     * @symbol  ?_blockChanged\@BlockSource\@\@IEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1HPEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI void _blockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @symbol  ?_fetchBorderBlockCollisions\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@_N\@Z
     */
    MCAPI void _fetchBorderBlockCollisions(std::vector<class AABB> &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, bool) const;
    /**
     * @symbol  ?_fetchEntityHelper\@BlockSource\@\@IEAAXVWeakEntityRef\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI void _fetchEntityHelper(class WeakEntityRef, class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool);
    /**
     * @symbol  ?_hasChunksAt\@BlockSource\@\@IEBA_NAEBUBounds\@\@_N\@Z
     */
    MCAPI bool _hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @symbol  ?_updateTallestCollisionShapeWithBorderBlockCollisions\@BlockSource\@\@IEBAXAEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV2\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI void _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @symbol  ?addUnloadedChunksAABBs\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB> &, class AABB const &) const;
    /**
     * @symbol  ?addVoidFloor\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI void addVoidFloor(std::vector<class AABB> &, class AABB const &) const;
    /**
     * @symbol  ?getTallestCollisionShapeFromUnloadedChunksAABBs\@BlockSource\@\@IEBAXAEBVAABB\@\@AEAV2\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI void getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const &, class AABB &, class Vec3 const &, float &) const;

//private:
    /**
     * @symbol  ?_addToTickingQueue\@BlockSource\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@HHW4TickingQueueType\@\@_N\@Z
     */
    MCAPI void _addToTickingQueue(class BlockPos const &, class Block const &, int, int, enum class TickingQueueType, bool);
    /**
     * @symbol  ?_getBlockPermissions\@BlockSource\@\@AEAA_NAEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _getBlockPermissions(class BlockPos const &, bool);
    /**
     * @symbol  ?_getRawBrightness\@BlockSource\@\@AEBA?AUBrightness\@\@AEBVBlockPos\@\@U2\@_N2\@Z
     */
    MCAPI struct Brightness _getRawBrightness(class BlockPos const &, struct Brightness, bool, bool) const;
    /**
     * @symbol  ?_removeFromTickingQueue\@BlockSource\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI void _removeFromTickingQueue(class BlockPos const &, class Block const &, enum class TickingQueueType);

protected:

private:

};