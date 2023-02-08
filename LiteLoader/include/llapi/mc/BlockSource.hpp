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
     * @hash   -1515631658
     * @vftbl  1
     * @symbol  ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@HHH\@Z
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @hash   -134219071
     * @vftbl  2
     * @symbol  ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   1841602807
     * @vftbl  3
     * @symbol  ?getBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@I\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @hash   1778313525
     * @vftbl  4
     * @symbol  ?getBlockEntity\@BlockSource\@\@UEBAPEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @hash   -1194871995
     * @vftbl  5
     * @symbol  ?getExtraBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -386676483
     * @vftbl  6
     * @symbol  ?getLiquidBlock\@BlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   539891701
     * @vftbl  7
     * @symbol  ?hasBlock\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @hash   1234931894
     * @vftbl  8
     * @symbol  ?containsAnyLiquid\@BlockSource\@\@UEBA_NAEBVAABB\@\@\@Z
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @hash   681394360
     * @vftbl  9
     * @symbol  ?containsMaterial\@BlockSource\@\@UEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @hash   442222893
     * @vftbl  10
     * @symbol  ?getMaterial\@BlockSource\@\@UEBAAEBVMaterial\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @hash   -127072958
     * @vftbl  11
     * @symbol  ?getMaterial\@BlockSource\@\@UEBAAEBVMaterial\@\@HHH\@Z
     */
    virtual class Material const & getMaterial(int, int, int) const;
    /**
     * @hash   1698211366
     * @vftbl  12
     * @symbol  ?hasChunksAt\@BlockSource\@\@UEBA_NAEBUBounds\@\@_N\@Z
     */
    virtual bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @hash   37947714
     * @vftbl  13
     * @symbol  ?hasChunksAt\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@H_N\@Z
     */
    virtual bool hasChunksAt(class BlockPos const &, int, bool) const;
    /**
     * @hash   -820087746
     * @vftbl  14
     * @symbol  ?hasChunksAt\@BlockSource\@\@UEBA_NAEBVAABB\@\@_N\@Z
     */
    virtual bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @hash   -1576972769
     * @vftbl  15
     * @symbol  ?getDimensionId\@BlockSource\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   238961156
     * @vftbl  16
     * @symbol  ?fetchAABBs\@BlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @hash   1771711891
     * @vftbl  17
     * @symbol  ?fetchCollisionShapes\@BlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   273920548
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
     * @hash   1676374299
     * @vftbl  20
     * @symbol  ?fetchAABBs\@BlockSource\@\@UEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual std::vector<class AABB> & fetchAABBs(class AABB const &, bool);
    /**
     * @hash   653861048
     * @vftbl  21
     * @symbol  ?fetchCollisionShapes\@BlockSource\@\@UEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NPEAUIActorMovementProxy\@\@\@Z
     */
    virtual std::vector<class AABB> & fetchCollisionShapes(class AABB const &, float *, bool, struct IActorMovementProxy *);
    /**
     * @hash   -1347218600
     * @vftbl  22
     * @symbol  ?getWeakRef\@BlockSource\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    virtual class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getWeakRef();
    /**
     * @hash   1332419276
     * @vftbl  23
     * @symbol  ?addListener\@BlockSource\@\@UEAAXAEAVBlockSourceListener\@\@\@Z
     */
    virtual void addListener(class BlockSourceListener &);
    /**
     * @hash   1564837001
     * @vftbl  24
     * @symbol  ?removeListener\@BlockSource\@\@UEAAXAEAVBlockSourceListener\@\@\@Z
     */
    virtual void removeListener(class BlockSourceListener &);
    /**
     * @hash   685267664
     * @vftbl  25
     * @symbol  ?fetchEntities\@BlockSource\@\@UEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@PEBVActor\@\@AEBVAABB\@\@_N2\@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class Actor const *, class AABB const &, bool, bool);
    /**
     * @hash   -706451101
     * @vftbl  26
     * @symbol  ?fetchEntities\@BlockSource\@\@UEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@W4ActorType\@\@AEBVAABB\@\@PEBVActor\@\@\@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(enum class ActorType, class AABB const &, class Actor const *);
    /**
     * @hash   896158944
     * @vftbl  27
     * @symbol  ?setBlock\@BlockSource\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@HPEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   -1274505957
     * @vftbl  28
     * @symbol  ?getMaxHeight\@BlockSource\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @hash   1799506649
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
     * @hash   2062176099
     * @vftbl  33
     * @symbol  ?getChunkAt\@BlockSource\@\@UEBAPEAVLevelChunk\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class LevelChunk * getChunkAt(class BlockPos const &) const;
    /**
     * @hash   724282094
     * @vftbl  34
     * @symbol  ?getILevel\@BlockSource\@\@UEBAAEAVILevel\@\@XZ
     */
    virtual class ILevel & getILevel() const;
    /**
     * @hash   -314427861
     * @vftbl  35
     * @symbol  ?getChunkSource\@BlockSource\@\@UEAAAEAVChunkSource\@\@XZ
     */
    virtual class ChunkSource & getChunkSource();
    /**
     * @hash   -117739903
     * @vftbl  36
     * @symbol  ?isSolidBlockingBlock\@BlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isSolidBlockingBlock(class BlockPos const &) const;
    /**
     * @hash   -828452954
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
     * @hash   1741839307
     * @symbol  ?getDimension\@BlockSource\@\@UEAAAEAVDimension\@\@XZ
     */
    MCVAPI class Dimension & getDimension();
    /**
     * @hash   488573002
     * @symbol  ?getDimension\@BlockSource\@\@UEBAAEAVDimension\@\@XZ
     */
    MCVAPI class Dimension & getDimension() const;
    /**
     * @hash   -1138069302
     * @symbol  ?getDimensionConst\@BlockSource\@\@UEBAAEBVDimension\@\@XZ
     */
    MCVAPI class Dimension const & getDimensionConst() const;
#endif
    /**
     * @hash   1797750646
     * @symbol  ??0BlockSource\@\@QEAA\@AEAVLevel\@\@AEAVDimension\@\@AEAVChunkSource\@\@_N33\@Z
     */
    MCAPI BlockSource(class Level &, class Dimension &, class ChunkSource &, bool, bool, bool);
    /**
     * @hash   537199945
     * @symbol  ??0BlockSource\@\@QEAA\@AEAVChunkSource\@\@_N1\@Z
     */
    MCAPI BlockSource(class ChunkSource &, bool, bool);
    /**
     * @hash   447141803
     * @symbol  ?_fetchEntities\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@PEBUIActorMovementProxy\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> _fetchEntities(struct IActorMovementProxy const *, class AABB const &, bool);
    /**
     * @hash   -390115506
     * @symbol  ?addToRandomTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH_N\@Z
     */
    MCAPI void addToRandomTickingQueue(class BlockPos const &, class Block const &, int, int, bool);
    /**
     * @hash   2054702354
     * @symbol  ?addToRandomTickingQueuePercentChance\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@MH_N\@Z
     */
    MCAPI void addToRandomTickingQueuePercentChance(class BlockPos const &, class Block const &, float, int, bool);
    /**
     * @hash   1342921796
     * @symbol  ?addToTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@HH_N\@Z
     */
    MCAPI void addToTickingQueue(class BlockPos const &, class Block const &, int, int, bool);
    /**
     * @hash   -1997586813
     * @symbol  ?allowsRunes\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool allowsRunes(class BlockPos const &);
    /**
     * @hash   -330147986
     * @symbol  ?areAllChunksLoaded\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI bool areAllChunksLoaded(class BlockPos const &, class BlockVolume &) const;
    /**
     * @hash   100895571
     * @symbol  ?areChunksFullyLoaded\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0\@Z
     */
    MCAPI bool areChunksFullyLoaded(class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -197895558
     * @symbol  ?blockEvent\@BlockSource\@\@QEAAXAEBVBlockPos\@\@HH\@Z
     */
    MCAPI void blockEvent(class BlockPos const &, int, int);
    /**
     * @hash   549987386
     * @symbol  ?canProvideSupport\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@EW4BlockSupportType\@\@\@Z
     */
    MCAPI bool canProvideSupport(class BlockPos const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @hash   733719701
     * @symbol  ?canSeeSky\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSeeSky(class BlockPos const &) const;
    /**
     * @hash   2062503547
     * @symbol  ?canSeeSky\@BlockSource\@\@QEBA_NHHH\@Z
     */
    MCAPI bool canSeeSky(int, int, int) const;
    /**
     * @hash   2106790165
     * @symbol  ?canSeeSkyFromBelowWater\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const &);
    /**
     * @hash   955204626
     * @symbol  ?checkBlockDestroyPermissions\@BlockSource\@\@QEAA_NAEAVActor\@\@AEBVBlockPos\@\@AEBVItemStackBase\@\@_N\@Z
     */
    MCAPI bool checkBlockDestroyPermissions(class Actor &, class BlockPos const &, class ItemStackBase const &, bool);
    /**
     * @hash   -1249757530
     * @symbol  ?checkBlockPermissions\@BlockSource\@\@QEAA_NAEAVActor\@\@AEBVBlockPos\@\@EAEBVItemStackBase\@\@_N\@Z
     */
    MCAPI bool checkBlockPermissions(class Actor &, class BlockPos const &, unsigned char, class ItemStackBase const &, bool);
    /**
     * @hash   1012106423
     * @symbol  ?checkValidity\@BlockSource\@\@QEBAXXZ
     */
    MCAPI void checkValidity() const;
    /**
     * @hash   -299406913
     * @symbol  ?clip\@BlockSource\@\@QEBA?AVHitResult\@\@AEBUClipParameters\@\@\@Z
     */
    MCAPI class HitResult clip(struct ClipParameters const &) const;
    /**
     * @hash   209912111
     * @symbol  ?clip\@BlockSource\@\@QEBA?AVHitResult\@\@AEBVVec3\@\@0_N1H11PEAVPlayer\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z\@std\@\@\@Z
     */
    MCAPI class HitResult clip(class Vec3 const &, class Vec3 const &, bool, bool, int, bool, bool, class Player *, class std::function<bool (class BlockSource const &, class Block const &, bool)> const &) const;
    /**
     * @hash   664359544
     * @symbol  ?containsAnyBlockInBox\@BlockSource\@\@QEAA_NAEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool containsAnyBlockInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -1292058762
     * @symbol  ?containsAnyBlockOfType\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0AEBVBlock\@\@\@Z
     */
    MCAPI bool containsAnyBlockOfType(class BlockPos const &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   388412683
     * @symbol  ?containsAnySolidBlocking\@BlockSource\@\@QEBA_NAEBVAABB\@\@\@Z
     */
    MCAPI bool containsAnySolidBlocking(class AABB const &) const;
    /**
     * @hash   -106245530
     * @symbol  ?countBlocksOfType\@BlockSource\@\@QEBA_KAEBVBlockDescriptor\@\@AEBVBlockPos\@\@1_K\@Z
     */
    MCAPI unsigned __int64 countBlocksOfType(class BlockDescriptor const &, class BlockPos const &, class BlockPos const &, unsigned __int64) const;
    /**
     * @hash   1395799111
     * @symbol  ?fetchActorIds\@BlockSource\@\@QEBAXAEBVAABB\@\@AEAV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchActorIds(class AABB const &, std::vector<struct ActorUniqueID> &) const;
    /**
     * @hash   625074281
     * @symbol  ?fetchActorIds\@BlockSource\@\@QEBAX_KAEBVAABB\@\@AEAV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchActorIds(unsigned __int64, class AABB const &, std::vector<struct ActorUniqueID> &) const;
    /**
     * @hash   -1083489043
     * @symbol  ?fetchActors\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchActors(struct ActorDefinitionIdentifier const &, class AABB const &);
    /**
     * @hash   1317148751
     * @symbol  ?fetchBlockEntities\@BlockSource\@\@QEAAAEBV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI std::vector<class BlockActor *> const & fetchBlockEntities(class AABB const &);
    /**
     * @hash   1054791900
     * @symbol  ?fetchBlockEntities\@BlockSource\@\@QEAAXAEBVAABB\@\@AEAV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void fetchBlockEntities(class AABB const &, std::vector<class BlockActor *> &, bool);
    /**
     * @hash   1756929158
     * @symbol  ?fetchBlockEntities\@BlockSource\@\@QEBA?AV?$vector\@PEAVBlockActor\@\@V?$allocator\@PEAVBlockActor\@\@\@std\@\@\@std\@\@W4BlockActorType\@\@AEBVAABB\@\@\@Z
     */
    MCAPI std::vector<class BlockActor *> fetchBlockEntities(enum class BlockActorType, class AABB const &) const;
    /**
     * @hash   368164624
     * @symbol  ?fetchBlocks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI bool fetchBlocks(class BlockPos const &, class BlockVolume &) const;
    /**
     * @hash   1107286307
     * @symbol  ?fetchBlocksInBox\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -258274003
     * @symbol  ?fetchBlocksInBoxSorted\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBoxSorted(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   1278723173
     * @symbol  ?fetchBlocksInCylinder\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBlockPos\@\@IIV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInCylinder(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    /**
     * @hash   830427301
     * @symbol  ?fetchBlocksInCylinderSorted\@BlockSource\@\@QEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBlockPos\@\@IIV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInCylinderSorted(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    /**
     * @hash   1276006156
     * @symbol  ?fetchEntities\@BlockSource\@\@QEAA?AV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@3\@AEBVAABB\@\@_N2\@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool, bool);
    /**
     * @hash   1155162361
     * @symbol  ?fetchEntities2\@BlockSource\@\@QEAAAEBV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@W4ActorType\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI std::vector<class Actor *> const & fetchEntities2(enum class ActorType, class AABB const &, bool);
    /**
     * @hash   541191658
     * @symbol  ?fetchNearestEntityOfType\@BlockSource\@\@QEAAPEAVActor\@\@PEBV2\@AEBVAABB\@\@W4ActorType\@\@\@Z
     */
    MCAPI class Actor * fetchNearestEntityOfType(class Actor const *, class AABB const &, enum class ActorType);
    /**
     * @hash   -1898255359
     * @symbol  ?findNextTopSolidBlockAbove\@BlockSource\@\@QEAA_NAEAVBlockPos\@\@\@Z
     */
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos &);
    /**
     * @hash   -1186253749
     * @symbol  ?findNextTopSolidBlockUnder\@BlockSource\@\@QEAA_NAEAVBlockPos\@\@\@Z
     */
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos &);
    /**
     * @hash   -407720718
     * @symbol  ?fireAreaChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0\@Z
     */
    MCAPI void fireAreaChanged(class BlockPos const &, class BlockPos const &);
    /**
     * @hash   891647887
     * @symbol  ?fireBlockChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1HW4BlockChangedEventTarget\@\@PEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI void fireBlockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, enum class BlockChangedEventTarget, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   42467771
     * @symbol  ?fireBlockEntityAboutToBeRemoved\@BlockSource\@\@QEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void fireBlockEntityAboutToBeRemoved(class std::shared_ptr<class BlockActor>);
    /**
     * @hash   1702035866
     * @symbol  ?fireBlockEntityChanged\@BlockSource\@\@QEAAXAEAVBlockActor\@\@\@Z
     */
    MCAPI void fireBlockEntityChanged(class BlockActor &);
    /**
     * @hash   657032700
     * @symbol  ?fireBrightnessChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void fireBrightnessChanged(class BlockPos const &);
    /**
     * @hash   -1404572204
     * @symbol  ?fireEntityChanged\@BlockSource\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void fireEntityChanged(class Actor &);
    /**
     * @hash   1000178016
     * @symbol  ?getAABBFetchResultCache\@BlockSource\@\@QEAAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AABB> & getAABBFetchResultCache();
    /**
     * @hash   -105855404
     * @symbol  ?getAboveTopSolidBlock\@BlockSource\@\@QEAAFAEBVBlockPos\@\@_N1\@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool);
    /**
     * @hash   1654518616
     * @symbol  ?getAboveTopSolidBlock\@BlockSource\@\@QEAAFHH_N0\@Z
     */
    MCAPI short getAboveTopSolidBlock(int, int, bool, bool);
    /**
     * @hash   -611442508
     * @symbol  ?getAllocatedHeightAt\@BlockSource\@\@QEAAFAEBVBlockPos\@\@\@Z
     */
    MCAPI short getAllocatedHeightAt(class BlockPos const &);
    /**
     * @hash   539958857
     * @symbol  ?getBiome\@BlockSource\@\@QEAAAEAVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome & getBiome(class BlockPos const &);
    /**
     * @hash   -251241232
     * @symbol  ?getBlockEntity\@BlockSource\@\@QEAAPEAVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BlockActor * getBlockEntity(class BlockPos const &);
    /**
     * @hash   1395132386
     * @symbol  ?getBlockEntity\@BlockSource\@\@QEAAPEAVBlockActor\@\@HHH\@Z
     */
    MCAPI class BlockActor * getBlockEntity(int, int, int);
    /**
     * @hash   789295657
     * @symbol  ?getBrightnessPair\@BlockSource\@\@QEBA?AUBrightnessPair\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const &) const;
    /**
     * @hash   -674557578
     * @symbol  ?getChunk\@BlockSource\@\@QEBAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class LevelChunk * getChunk(class ChunkPos const &) const;
    /**
     * @hash   192661951
     * @symbol  ?getChunk\@BlockSource\@\@QEBAPEAVLevelChunk\@\@HH\@Z
     */
    MCAPI class LevelChunk * getChunk(int, int) const;
    /**
     * @hash   480782891
     * @symbol  ?getConstBiome\@BlockSource\@\@QEBAAEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome const & getConstBiome(class BlockPos const &) const;
    /**
     * @hash   1365011726
     * @symbol  ?getDefaultBrightness\@BlockSource\@\@QEBA?AUBrightnessPair\@\@XZ
     */
    MCAPI struct BrightnessPair getDefaultBrightness() const;
    /**
     * @hash   79281541
     * @symbol  ?getGrassColor\@BlockSource\@\@QEBAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getGrassColor(class BlockPos const &) const;
    /**
     * @hash   -1297826461
     * @symbol  ?getHeightmap\@BlockSource\@\@QEAAFHH\@Z
     */
    MCAPI short getHeightmap(int, int);
    /**
     * @hash   -1061404206
     * @symbol  ?getHeightmap\@BlockSource\@\@QEBAFAEBVBlockPos\@\@\@Z
     */
    MCAPI short getHeightmap(class BlockPos const &) const;
    /**
     * @hash   1968027198
     * @symbol  ?getHeightmapPos\@BlockSource\@\@QEBA?AVBlockPos\@\@AEBV2\@\@Z
     */
    MCAPI class BlockPos getHeightmapPos(class BlockPos const &) const;
    /**
     * @hash   -280672152
     * @symbol  ?getLevel\@BlockSource\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   229832234
     * @symbol  ?getLevel\@BlockSource\@\@QEAAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel();
    /**
     * @hash   -1576746732
     * @symbol  ?getLevelConst\@BlockSource\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const & getLevelConst() const;
    /**
     * @hash   -468139781
     * @symbol  ?getNextTickUpdateForPos\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@AEAUTick\@\@\@Z
     */
    MCAPI bool getNextTickUpdateForPos(class BlockPos const &, enum class TickingQueueType, struct Tick &) const;
    /**
     * @hash   1672798334
     * @symbol  ?getPublicSource\@BlockSource\@\@QEBA_NXZ
     */
    MCAPI bool getPublicSource() const;
    /**
     * @hash   11590497
     * @symbol  ?getRawBrightness\@BlockSource\@\@QEBA?AUBrightness\@\@AEBVBlockPos\@\@_N1\@Z
     */
    MCAPI struct Brightness getRawBrightness(class BlockPos const &, bool, bool) const;
    /**
     * @hash   456185212
     * @symbol  ?getRawBrightnessWithManualDarken\@BlockSource\@\@QEBA?AUBrightness\@\@AEBVBlockPos\@\@U2\@_N2\@Z
     */
    MCAPI struct Brightness getRawBrightnessWithManualDarken(class BlockPos const &, struct Brightness, bool, bool) const;
    /**
     * @hash   -342177082
     * @symbol  ?getSeenPercent\@BlockSource\@\@QEAAMAEBVVec3\@\@AEBVAABB\@\@\@Z
     */
    MCAPI float getSeenPercent(class Vec3 const &, class AABB const &);
    /**
     * @hash   -1380619318
     * @symbol  ?getTickingQueue\@BlockSource\@\@QEBAPEAVBlockTickingQueue\@\@AEBVBlockPos\@\@W4TickingQueueType\@\@_N\@Z
     */
    MCAPI class BlockTickingQueue * getTickingQueue(class BlockPos const &, enum class TickingQueueType, bool) const;
    /**
     * @hash   -987750993
     * @symbol  ?getVoidHeight\@BlockSource\@\@QEBAFXZ
     */
    MCAPI short getVoidHeight() const;
    /**
     * @hash   1379327910
     * @symbol  ?getWritableChunk\@BlockSource\@\@QEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class LevelChunk * getWritableChunk(class ChunkPos const &);
    /**
     * @hash   -1736988239
     * @symbol  ?hasBorderBlock\@BlockSource\@\@QEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool hasBorderBlock(class BlockPos) const;
    /**
     * @hash   -152572968
     * @symbol  ?hasChunksAt\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@0_N\@Z
     */
    MCAPI bool hasChunksAt(class BlockPos const &, class BlockPos const &, bool) const;
    /**
     * @hash   -1224040142
     * @symbol  ?hasSubChunksAt\@BlockSource\@\@QEBA?AU?$pair\@_NV?$optional\@VSubChunkPos\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0\@Z
     */
    MCAPI struct std::pair<bool, class std::optional<class SubChunkPos>> hasSubChunksAt(class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -21029057
     * @symbol  ?hasTickInCurrentTick\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &) const;
    /**
     * @hash   -1551433094
     * @symbol  ?hasTickInCurrentTick\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &, enum class TickingQueueType) const;
    /**
     * @hash   -1197977461
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &) const;
    /**
     * @hash   -1665225290
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1950580969
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &, enum class TickingQueueType) const;
    /**
     * @hash   1376926452
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class BlockLegacy const &) const;
    /**
     * @hash   56964295
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@AEBVBlockLegacy\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class BlockLegacy const &, enum class TickingQueueType) const;
    /**
     * @hash   -1459888184
     * @symbol  ?hasTickInPendingTicks\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, enum class TickingQueueType) const;
    /**
     * @hash   -1619085066
     * @symbol  ?hasUntickedNeighborChunk\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@H\@Z
     */
    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const &, int) const;
    /**
     * @hash   2000003440
     * @symbol  ?isChunkFullyLoaded\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@AEBVChunkSource\@\@\@Z
     */
    MCAPI bool isChunkFullyLoaded(class ChunkPos const &, class ChunkSource const &) const;
    /**
     * @hash   -1923848357
     * @symbol  ?isConsideredSolidBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isConsideredSolidBlock(class BlockPos const &);
    /**
     * @hash   -645556405
     * @symbol  ?isEmptyBlock\@BlockSource\@\@QEAA_NHHH\@Z
     */
    MCAPI bool isEmptyBlock(int, int, int);
    /**
     * @hash   -766418753
     * @symbol  ?isEmptyBlock\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyBlock(class BlockPos const &) const;
    /**
     * @hash   -1442723713
     * @symbol  ?isEmptyWaterBlock\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyWaterBlock(class BlockPos const &) const;
    /**
     * @hash   -1824926383
     * @symbol  ?isInWall\@BlockSource\@\@QEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool isInWall(class Vec3 const &);
    /**
     * @hash   117842411
     * @symbol  ?isInstaticking\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInstaticking(class BlockPos const &) const;
    /**
     * @symbol  ?isNearUnloadedChunks\@BlockSource\@\@QEBA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool isNearUnloadedChunks(class ChunkPos const &) const;
    /**
     * @hash   142797540
     * @symbol  ?isTouchingMaterial\@BlockSource\@\@QEBA_NAEBVBlockPos\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isTouchingMaterial(class BlockPos const &, enum class MaterialType) const;
    /**
     * @hash   -1765416272
     * @symbol  ?isUnderWater\@BlockSource\@\@QEBA_NAEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool isUnderWater(class Vec3 const &, class Block const &) const;
    /**
     * @hash   1988670131
     * @symbol  ?isUnobstructedByEntities\@BlockSource\@\@QEAA_NAEBVAABB\@\@PEBVActor\@\@\@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const &, class Actor const *);
    /**
     * @hash   332047175
     * @symbol  ?isUnobstructedByEntities\@BlockSource\@\@QEAA_NAEBVAABB\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const &, class gsl::span<class gsl::not_null<class Actor const *>, -1>);
    /**
     * @hash   627274905
     * @symbol  ?isWithinHeightLimits\@BlockSource\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinHeightLimits(int) const;
    /**
     * @hash   -1268461677
     * @symbol  ?mayPlace\@BlockSource\@\@QEAA_NAEBVBlock\@\@AEBVBlockPos\@\@EPEAVActor\@\@_N\@Z
     */
    MCAPI bool mayPlace(class Block const &, class BlockPos const &, unsigned char, class Actor *, bool);
    /**
     * @hash   -1974439422
     * @symbol  ?neighborChanged\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0\@Z
     */
    MCAPI void neighborChanged(class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -1206377849
     * @symbol  ?postGameEvent\@BlockSource\@\@QEAAXPEAVActor\@\@AEBVGameEvent\@\@AEBVBlockPos\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void postGameEvent(class Actor *, class GameEvent const &, class BlockPos const &, class Block const *);
    /**
     * @hash   -1306886601
     * @symbol  ?postGameEvent\@BlockSource\@\@QEAAXPEAVActor\@\@AEBVGameEvent\@\@AEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    MCAPI void postGameEvent(class Actor *, class GameEvent const &, class Vec3 const &, class Block const *);
    /**
     * @hash   -1687645793
     * @symbol  ?removeBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool removeBlock(class BlockPos const &);
    /**
     * @hash   -1217459075
     * @symbol  ?removeBlock\@BlockSource\@\@QEAA_NHHH\@Z
     */
    MCAPI bool removeBlock(int, int, int);
    /**
     * @hash   229533446
     * @symbol  ?removeBlockEntity\@BlockSource\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const &);
    /**
     * @hash   832219081
     * @symbol  ?removeFromRandomTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void removeFromRandomTickingQueue(class BlockPos const &, class Block const &);
    /**
     * @hash   -323924679
     * @symbol  ?removeFromTickingQueue\@BlockSource\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void removeFromTickingQueue(class BlockPos const &, class Block const &);
    /**
     * @hash   1011702761
     * @symbol  ?setBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@HV?$shared_ptr\@VBlockActor\@\@\@std\@\@PEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool setBlock(class BlockPos const &, class Block const &, int, class std::shared_ptr<class BlockActor>, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   -1248811623
     * @symbol  ?setBlock\@BlockSource\@\@QEAA_NHHHAEBVBlock\@\@HPEAVActor\@\@\@Z
     */
    MCAPI bool setBlock(int, int, int, class Block const &, int, class Actor *);
    /**
     * @hash   1595896472
     * @symbol  ?setBlockNoUpdate\@BlockSource\@\@QEAA_NHHHAEBVBlock\@\@\@Z
     */
    MCAPI bool setBlockNoUpdate(int, int, int, class Block const &);
    /**
     * @hash   -1396910166
     * @symbol  ?setBlockSimple\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @hash   2033213165
     * @symbol  ?setBorderBlock\@BlockSource\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void setBorderBlock(class BlockPos const &, bool);
    /**
     * @hash   1441288782
     * @symbol  ?setCurrentTickForValidityChecks\@BlockSource\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void setCurrentTickForValidityChecks(struct Tick const &);
    /**
     * @hash   -1297455981
     * @symbol  ?setExtraBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI bool setExtraBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   1095670644
     * @symbol  ?setExtraBlockSimple\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool setExtraBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @hash   -1270950707
     * @symbol  ?setIsPersistentBlockSource\@BlockSource\@\@QEAAXXZ
     */
    MCAPI void setIsPersistentBlockSource();
    /**
     * @hash   1816927514
     * @symbol  ?setLiquidBlock\@BlockSource\@\@QEAA_NAEBVBlockPos\@\@AEBVBlock\@\@_NH\@Z
     */
    MCAPI bool setLiquidBlock(class BlockPos const &, class Block const &, bool, int);
    /**
     * @hash   2005957568
     * @symbol  ?setRandomTickingQueue\@BlockSource\@\@QEAAXAEAVBlockTickingQueue\@\@\@Z
     */
    MCAPI void setRandomTickingQueue(class BlockTickingQueue &);
    /**
     * @hash   2023726614
     * @symbol  ?setTickingQueue\@BlockSource\@\@QEAAXAEAVBlockTickingQueue\@\@\@Z
     */
    MCAPI void setTickingQueue(class BlockTickingQueue &);
    /**
     * @hash   -17444147
     * @symbol  ?shouldFireEvents\@BlockSource\@\@QEBA_NAEAVLevelChunk\@\@\@Z
     */
    MCAPI bool shouldFireEvents(class LevelChunk &) const;
    /**
     * @hash   957814229
     * @symbol  ?ticksFromNow\@BlockSource\@\@QEBAHAEBVBlockPos\@\@W4TickingQueueType\@\@H\@Z
     */
    MCAPI int ticksFromNow(class BlockPos const &, enum class TickingQueueType, int) const;
    /**
     * @hash   330371710
     * @symbol  ?tryGetBiome\@BlockSource\@\@QEBAPEAVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Biome * tryGetBiome(class BlockPos const &) const;
    /**
     * @hash   2049222318
     * @symbol  ?updateCheckForValidityState\@BlockSource\@\@QEAAX_N\@Z
     */
    MCAPI void updateCheckForValidityState(bool);
    /**
     * @hash   1120645388
     * @symbol  ?updateNeighborsAt\@BlockSource\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void updateNeighborsAt(class BlockPos const &);
    /**
     * @hash   -1818507375
     * @symbol  ?updateNeighborsAtExceptFromFacing\@BlockSource\@\@QEAAXAEBVBlockPos\@\@0H\@Z
     */
    MCAPI void updateNeighborsAtExceptFromFacing(class BlockPos const &, class BlockPos const &, int);
    /**
     * @hash   940503182
     * @symbol  ?containsAnyLiquid\@BlockSource\@\@SA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@\@Z
     */
    MCAPI static bool containsAnyLiquid(class IConstBlockSource const &, class AABB const &);
    /**
     * @hash   -770328529
     * @symbol  ?containsMaterial\@BlockSource\@\@SA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool containsMaterial(class IConstBlockSource const &, class AABB const &, enum class MaterialType);
    /**
     * @hash   -1438824015
     * @symbol  ?generateUnloadedChunkAABB\@BlockSource\@\@SA?AVAABB\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI static class AABB generateUnloadedChunkAABB(class ChunkPos const &);
    /**
     * @hash   -109631424
     * @symbol  ?getLiquidBlock\@BlockSource\@\@SAAEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Block const & getLiquidBlock(class IConstBlockSource const &, class BlockPos const &);

//protected:
    /**
     * @hash   1680239445
     * @symbol  ?_blockChanged\@BlockSource\@\@IEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1HPEBUActorBlockSyncMessage\@\@PEAVActor\@\@\@Z
     */
    MCAPI void _blockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   -314946824
     * @symbol  ?_fetchBorderBlockCollisions\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@_N\@Z
     */
    MCAPI void _fetchBorderBlockCollisions(std::vector<class AABB> &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, bool) const;
    /**
     * @hash   -1181882293
     * @symbol  ?_fetchEntityHelper\@BlockSource\@\@IEAAXVWeakEntityRef\@\@V?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI void _fetchEntityHelper(class WeakEntityRef, class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool);
    /**
     * @hash   -33305221
     * @symbol  ?_hasChunksAt\@BlockSource\@\@IEBA_NAEBUBounds\@\@_N\@Z
     */
    MCAPI bool _hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @hash   1006725951
     * @symbol  ?_updateTallestCollisionShapeWithBorderBlockCollisions\@BlockSource\@\@IEBAXAEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV2\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI void _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @hash   -2036316441
     * @symbol  ?addUnloadedChunksAABBs\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB> &, class AABB const &) const;
    /**
     * @hash   -1344435936
     * @symbol  ?addVoidFloor\@BlockSource\@\@IEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@\@Z
     */
    MCAPI void addVoidFloor(std::vector<class AABB> &, class AABB const &) const;
    /**
     * @hash   130644798
     * @symbol  ?getTallestCollisionShapeFromUnloadedChunksAABBs\@BlockSource\@\@IEBAXAEBVAABB\@\@AEAV2\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI void getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const &, class AABB &, class Vec3 const &, float &) const;

//private:
    /**
     * @hash   -836248523
     * @symbol  ?_addToTickingQueue\@BlockSource\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@HHW4TickingQueueType\@\@_N\@Z
     */
    MCAPI void _addToTickingQueue(class BlockPos const &, class Block const &, int, int, enum class TickingQueueType, bool);
    /**
     * @hash   1513025966
     * @symbol  ?_getBlockPermissions\@BlockSource\@\@AEAA_NAEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _getBlockPermissions(class BlockPos const &, bool);
    /**
     * @hash   -2046305193
     * @symbol  ?_getRawBrightness\@BlockSource\@\@AEBA?AUBrightness\@\@AEBVBlockPos\@\@U2\@_N2\@Z
     */
    MCAPI struct Brightness _getRawBrightness(class BlockPos const &, struct Brightness, bool, bool) const;
    /**
     * @hash   -2974465
     * @symbol  ?_removeFromTickingQueue\@BlockSource\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@W4TickingQueueType\@\@\@Z
     */
    MCAPI void _removeFromTickingQueue(class BlockPos const &, class Block const &, enum class TickingQueueType);

protected:

private:

};