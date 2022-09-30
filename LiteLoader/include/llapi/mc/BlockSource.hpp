/**
 * @file  BlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "BlockInstance.hpp"

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
     * @symbol __unk_destructor_0
     */
    virtual ~BlockSource();
    /**
     * @hash   1845428150
     * @vftbl  1
     * @symbol ?getBlock@BlockSource@@UEBAAEBVBlock@@HHH@Z
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @hash   -1068111183
     * @vftbl  2
     * @symbol ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   907695319
     * @vftbl  3
     * @symbol ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@I@Z
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @hash   844406037
     * @vftbl  4
     * @symbol ?getBlockEntity@BlockSource@@UEBAPEBVBlockActor@@AEBVBlockPos@@@Z
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @hash   -2128840987
     * @vftbl  5
     * @symbol ?getExtraBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -1320660851
     * @vftbl  6
     * @symbol ?getLiquidBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   -394138795
     * @vftbl  7
     * @symbol ?hasBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @hash   301547190
     * @vftbl  8
     * @symbol ?containsAnyLiquid@BlockSource@@UEBA_NAEBVAABB@@@Z
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @hash   -251990344
     * @vftbl  9
     * @symbol ?containsMaterial@BlockSource@@UEBA_NAEBVAABB@@W4MaterialType@@@Z
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @hash   -491776851
     * @vftbl  10
     * @symbol ?getMaterial@BlockSource@@UEBAAEBVMaterial@@AEBVBlockPos@@@Z
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @hash   -1061072702
     * @vftbl  11
     * @symbol ?getMaterial@BlockSource@@UEBAAEBVMaterial@@HHH@Z
     */
    virtual class Material const & getMaterial(int, int, int) const;
    /**
     * @hash   764180870
     * @vftbl  12
     * @symbol ?hasChunksAt@BlockSource@@UEBA_NAEBUBounds@@_N@Z
     */
    virtual bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @hash   -896082782
     * @vftbl  13
     * @symbol ?hasChunksAt@BlockSource@@UEBA_NAEBVBlockPos@@H_N@Z
     */
    virtual bool hasChunksAt(class BlockPos const &, int, bool) const;
    /**
     * @hash   -1754118242
     * @vftbl  14
     * @symbol ?hasChunksAt@BlockSource@@UEBA_NAEBVAABB@@_N@Z
     */
    virtual bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @hash   1784040911
     * @vftbl  15
     * @symbol ?getDimensionId@BlockSource@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -694408172
     * @vftbl  16
     * @symbol ?fetchAABBs@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @hash   838019667
     * @vftbl  17
     * @symbol ?fetchCollisionShapes@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -660109948
     * @vftbl  18
     * @symbol ?getTallestCollisionShape@BlockSource@@UEBA?AVAABB@@AEBV2@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual class AABB getTallestCollisionShape(class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   743004971
     * @vftbl  19
     * @symbol ?fetchAABBs@BlockSource@@UEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
     */
    virtual std::vector<class AABB> & fetchAABBs(class AABB const &, bool);
    /**
     * @hash   -279831176
     * @vftbl  20
     * @symbol ?fetchCollisionShapes@BlockSource@@UEAAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@PEAM_NPEAUIActorMovementProxy@@@Z
     */
    virtual std::vector<class AABB> & fetchCollisionShapes(class AABB const &, float *, bool, struct IActorMovementProxy *);
    /**
     * @hash   2013718200
     * @vftbl  21
     * @symbol ?getWeakRef@BlockSource@@UEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
     */
    virtual class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getWeakRef();
    /**
     * @hash   398988444
     * @vftbl  22
     * @symbol ?addListener@BlockSource@@UEAAXAEAVBlockSourceListener@@@Z
     */
    virtual void addListener(class BlockSourceListener &);
    /**
     * @hash   629945449
     * @vftbl  23
     * @symbol ?removeListener@BlockSource@@UEAAXAEAVBlockSourceListener@@@Z
     */
    virtual void removeListener(class BlockSourceListener &);
    /**
     * @hash   -248470688
     * @vftbl  24
     * @symbol ?fetchEntities@BlockSource@@UEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@PEBVActor@@AEBVAABB@@_N2@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class Actor const *, class AABB const &, bool, bool);
    /**
     * @hash   -1640189453
     * @vftbl  25
     * @symbol ?fetchEntities@BlockSource@@UEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@W4ActorType@@AEBVAABB@@PEBVActor@@@Z
     */
    virtual class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(enum class ActorType, class AABB const &, class Actor const *);
    /**
     * @hash   -38794112
     * @vftbl  26
     * @symbol ?setBlock@BlockSource@@UEAA_NAEBVBlockPos@@AEBVBlock@@HPEBUActorBlockSyncMessage@@PEAVActor@@@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   865491529
     * @vftbl  27
     * @symbol ?getMinHeight@BlockSource@@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @hash   1128222483
     * @vftbl  31
     * @symbol ?getChunkAt@BlockSource@@UEBAPEAVLevelChunk@@AEBVBlockPos@@@Z
     */
    virtual class LevelChunk * getChunkAt(class BlockPos const &) const;
    /**
     * @hash   619279390
     * @vftbl  32
     * @symbol ?getILevel@BlockSource@@UEBAAEAVILevel@@XZ
     */
    virtual class ILevel & getILevel() const;
    /**
     * @hash   -568623893
     * @vftbl  33
     * @symbol ?getChunkSource@BlockSource@@UEAAAEAVChunkSource@@XZ
     */
    virtual class ChunkSource & getChunkSource();
    /**
     * @hash   -1052308559
     * @vftbl  34
     * @symbol ?isSolidBlockingBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
     */
    virtual bool isSolidBlockingBlock(class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCE
    /**
     * @hash   -1642730405
     * @symbol ?getDimension@BlockSource@@UEAAAEAVDimension@@XZ
     */
    MCVAPI class Dimension & getDimension();
    /**
     * @hash   1398970586
     * @symbol ?getDimension@BlockSource@@UEBAAEAVDimension@@XZ
     */
    MCVAPI class Dimension & getDimension() const;
    /**
     * @hash   -227671718
     * @symbol ?getDimensionConst@BlockSource@@UEBAAEBVDimension@@XZ
     */
    MCVAPI class Dimension const & getDimensionConst() const;
#endif
    /**
     * @hash   864212182
     * @symbol ??0BlockSource@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N33@Z
     */
    MCAPI BlockSource(class Level &, class Dimension &, class ChunkSource &, bool, bool, bool);
    /**
     * @hash   -396338519
     * @symbol ??0BlockSource@@QEAA@AEAVChunkSource@@_N1@Z
     */
    MCAPI BlockSource(class ChunkSource &, bool, bool);
    /**
     * @hash   -486258277
     * @symbol ?_fetchEntities@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@PEBUIActorMovementProxy@@AEBVAABB@@_N@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> _fetchEntities(struct IActorMovementProxy const *, class AABB const &, bool);
    /**
     * @hash   -1323577090
     * @symbol ?addToRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH_N@Z
     */
    MCAPI void addToRandomTickingQueue(class BlockPos const &, class Block const &, int, int, bool);
    /**
     * @hash   1121333026
     * @symbol ?addToRandomTickingQueuePercentChance@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@MH_N@Z
     */
    MCAPI void addToRandomTickingQueuePercentChance(class BlockPos const &, class Block const &, float, int, bool);
    /**
     * @hash   409721604
     * @symbol ?addToTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@HH_N@Z
     */
    MCAPI void addToTickingQueue(class BlockPos const &, class Block const &, int, int, bool);
    /**
     * @hash   1364272547
     * @symbol ?allowsRunes@BlockSource@@QEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool allowsRunes(class BlockPos const &);
    /**
     * @hash   -1263255922
     * @symbol ?areAllChunksLoaded@BlockSource@@QEBA_NAEBVBlockPos@@AEAVBlockVolume@@@Z
     */
    MCAPI bool areAllChunksLoaded(class BlockPos const &, class BlockVolume &) const;
    /**
     * @hash   -832212365
     * @symbol ?areChunksFullyLoaded@BlockSource@@QEBA_NAEBVBlockPos@@0@Z
     */
    MCAPI bool areChunksFullyLoaded(class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -495830872
     * @symbol ?areChunksFullyLoaded@BlockSource@@QEBA_NAEBVBlockPos@@H@Z
     */
    MCAPI bool areChunksFullyLoaded(class BlockPos const &, int) const;
    /**
     * @hash   -1131049622
     * @symbol ?blockEvent@BlockSource@@QEAAXAEBVBlockPos@@HH@Z
     */
    MCAPI void blockEvent(class BlockPos const &, int, int);
    /**
     * @hash   -383166678
     * @symbol ?canProvideSupport@BlockSource@@QEBA_NAEBVBlockPos@@EW4BlockSupportType@@@Z
     */
    MCAPI bool canProvideSupport(class BlockPos const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @hash   -199449739
     * @symbol ?canSeeSky@BlockSource@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool canSeeSky(class BlockPos const &) const;
    /**
     * @hash   1129334107
     * @symbol ?canSeeSky@BlockSource@@QEBA_NHHH@Z
     */
    MCAPI bool canSeeSky(int, int, int) const;
    /**
     * @hash   1173620725
     * @symbol ?canSeeSkyFromBelowWater@BlockSource@@QEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const &);
    /**
     * @hash   22019810
     * @symbol ?checkBlockDestroyPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@AEBVItemStackBase@@_N@Z
     */
    MCAPI bool checkBlockDestroyPermissions(class Actor &, class BlockPos const &, class ItemStackBase const &, bool);
    /**
     * @hash   2111978822
     * @symbol ?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStackBase@@_N@Z
     */
    MCAPI bool checkBlockPermissions(class Actor &, class BlockPos const &, unsigned char, class ItemStackBase const &, bool);
    /**
     * @hash   78860103
     * @symbol ?checkValidity@BlockSource@@QEBAXXZ
     */
    MCAPI void checkValidity() const;
    /**
     * @hash   -1598128099
     * @symbol ?clearDeletedEntities@BlockSource@@QEAAXXZ
     */
    MCAPI void clearDeletedEntities();
    /**
     * @hash   -1232653233
     * @symbol ?clip@BlockSource@@QEBA?AVHitResult@@AEBUClipParameters@@@Z
     */
    MCAPI class HitResult clip(struct ClipParameters const &) const;
    /**
     * @hash   -723334209
     * @symbol ?clip@BlockSource@@QEBA?AVHitResult@@AEBVVec3@@0_N1H11PEAVPlayer@@AEBV?$function@$$A6A_NAEBVBlockSource@@AEBVBlock@@_N@Z@std@@@Z
     */
    MCAPI class HitResult clip(class Vec3 const &, class Vec3 const &, bool, bool, int, bool, bool, class Player *, class std::function<bool (class BlockSource const &, class Block const &, bool)> const &) const;
    /**
     * @hash   -269009784
     * @symbol ?containsAnyBlockInBox@BlockSource@@QEAA_NAEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    MCAPI bool containsAnyBlockInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   2069523830
     * @symbol ?containsAnyBlockOfType@BlockSource@@QEBA_NAEBVBlockPos@@0AEBVBlock@@@Z
     */
    MCAPI bool containsAnyBlockOfType(class BlockPos const &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -544972021
     * @symbol ?containsAnySolidBlocking@BlockSource@@QEBA_NAEBVAABB@@@Z
     */
    MCAPI bool containsAnySolidBlocking(class AABB const &) const;
    /**
     * @hash   -1039599482
     * @symbol ?countBlocksOfType@BlockSource@@QEBA_KAEBVBlockDescriptor@@AEBVBlockPos@@1_K@Z
     */
    MCAPI unsigned __int64 countBlocksOfType(class BlockDescriptor const &, class BlockPos const &, class BlockPos const &, unsigned __int64) const;
    /**
     * @hash   -308341175
     * @symbol ?fetchActorIds@BlockSource@@QEBAX_KAEBVAABB@@AEAV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@@Z
     */
    MCAPI void fetchActorIds(unsigned __int64, class AABB const &, std::vector<struct ActorUniqueID> &) const;
    /**
     * @hash   462399031
     * @symbol ?fetchActorIds@BlockSource@@QEBAXAEBVAABB@@AEAV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@@Z
     */
    MCAPI void fetchActorIds(class AABB const &, std::vector<struct ActorUniqueID> &) const;
    /**
     * @hash   -2016919875
     * @symbol ?fetchActors@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@AEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchActors(struct ActorDefinitionIdentifier const &, class AABB const &);
    /**
     * @hash   383687167
     * @symbol ?fetchBlockEntities@BlockSource@@QEAAAEBV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@AEBVAABB@@@Z
     */
    MCAPI std::vector<class BlockActor *> const & fetchBlockEntities(class AABB const &);
    /**
     * @hash   823329190
     * @symbol ?fetchBlockEntities@BlockSource@@QEBA?AV?$vector@PEAVBlockActor@@V?$allocator@PEAVBlockActor@@@std@@@std@@W4BlockActorType@@AEBVAABB@@@Z
     */
    MCAPI std::vector<class BlockActor *> fetchBlockEntities(enum class BlockActorType, class AABB const &) const;
    /**
     * @hash   -565435344
     * @symbol ?fetchBlocks@BlockSource@@QEBA_NAEBVBlockPos@@AEAVBlockVolume@@@Z
     */
    MCAPI bool fetchBlocks(class BlockPos const &, class BlockVolume &) const;
    /**
     * @hash   173686339
     * @symbol ?fetchBlocksInBox@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -1191904723
     * @symbol ?fetchBlocksInBoxSorted@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBoxSorted(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   345077077
     * @symbol ?fetchBlocksInCylinder@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInCylinder(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    /**
     * @hash   -103234171
     * @symbol ?fetchBlocksInCylinderSorted@BlockSource@@QEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBlockPos@@IIV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    MCAPI class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInCylinderSorted(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    /**
     * @hash   342313932
     * @symbol ?fetchEntities@BlockSource@@QEAA?AV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@3@AEBVAABB@@_N2@Z
     */
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool, bool);
    /**
     * @hash   221470137
     * @symbol ?fetchEntities2@BlockSource@@QEAAAEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@W4ActorType@@AEBVAABB@@_N@Z
     */
    MCAPI std::vector<class Actor *> const & fetchEntities2(enum class ActorType, class AABB const &, bool);
    /**
     * @hash   -392577446
     * @symbol ?fetchNearestEntityOfType@BlockSource@@QEAAPEAVActor@@PEBV2@AEBVAABB@@W4ActorType@@@Z
     */
    MCAPI class Actor * fetchNearestEntityOfType(class Actor const *, class AABB const &, enum class ActorType);
    /**
     * @hash   1462927457
     * @symbol ?findNextTopSolidBlockAbove@BlockSource@@QEAA_NAEAVBlockPos@@@Z
     */
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos &);
    /**
     * @hash   -2120068981
     * @symbol ?findNextTopSolidBlockUnder@BlockSource@@QEAA_NAEAVBlockPos@@@Z
     */
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos &);
    /**
     * @hash   -1341582078
     * @symbol ?fireAreaChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z
     */
    MCAPI void fireAreaChanged(class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -42228849
     * @symbol ?fireBlockChanged@BlockSource@@QEAAXAEBVBlockPos@@IAEBVBlock@@1HW4BlockChangedEventTarget@@PEBUActorBlockSyncMessage@@PEAVActor@@@Z
     */
    MCAPI void fireBlockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, enum class BlockChangedEventTarget, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   -891439717
     * @symbol ?fireBlockEntityAboutToBeRemoved@BlockSource@@QEAAXV?$shared_ptr@VBlockActor@@@std@@@Z
     */
    MCAPI void fireBlockEntityAboutToBeRemoved(class std::shared_ptr<class BlockActor>);
    /**
     * @hash   768297514
     * @symbol ?fireBlockEntityChanged@BlockSource@@QEAAXAEAVBlockActor@@@Z
     */
    MCAPI void fireBlockEntityChanged(class BlockActor &);
    /**
     * @hash   -276721028
     * @symbol ?fireBrightnessChanged@BlockSource@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void fireBrightnessChanged(class BlockPos const &);
    /**
     * @hash   1956641364
     * @symbol ?fireEntityChanged@BlockSource@@QEAAXAEAVActor@@@Z
     */
    MCAPI void fireEntityChanged(class Actor &);
    /**
     * @hash   -1039624508
     * @symbol ?getAboveTopSolidBlock@BlockSource@@QEAAFAEBVBlockPos@@_N1@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool);
    /**
     * @hash   720734136
     * @symbol ?getAboveTopSolidBlock@BlockSource@@QEAAFHH_N0@Z
     */
    MCAPI short getAboveTopSolidBlock(int, int, bool, bool);
    /**
     * @hash   -1545242364
     * @symbol ?getAllocatedHeightAt@BlockSource@@QEAAFAEBVBlockPos@@@Z
     */
    MCAPI short getAllocatedHeightAt(class BlockPos const &);
    /**
     * @hash   -393856375
     * @symbol ?getBiome@BlockSource@@QEAAAEAVBiome@@AEBVBlockPos@@@Z
     */
    MCAPI class Biome & getBiome(class BlockPos const &);
    /**
     * @hash   -1185148720
     * @symbol ?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@AEBVBlockPos@@@Z
     */
    MCAPI class BlockActor * getBlockEntity(class BlockPos const &);
    /**
     * @hash   461224898
     * @symbol ?getBlockEntity@BlockSource@@QEAAPEAVBlockActor@@HHH@Z
     */
    MCAPI class BlockActor * getBlockEntity(int, int, int);
    /**
     * @hash   843986157
     * @symbol ?getBrightness@BlockSource@@QEBAMAEBVBlockPos@@@Z
     */
    MCAPI float getBrightness(class BlockPos const &) const;
    /**
     * @hash   -144611831
     * @symbol ?getBrightnessPair@BlockSource@@QEBA?AUBrightnessPair@@AEBVBlockPos@@@Z
     */
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const &) const;
    /**
     * @hash   -741291665
     * @symbol ?getChunk@BlockSource@@QEBAPEAVLevelChunk@@HH@Z
     */
    MCAPI class LevelChunk * getChunk(int, int) const;
    /**
     * @hash   -1608465066
     * @symbol ?getChunk@BlockSource@@QEBAPEAVLevelChunk@@AEBVChunkPos@@@Z
     */
    MCAPI class LevelChunk * getChunk(class ChunkPos const &) const;
    /**
     * @hash   -453032341
     * @symbol ?getConstBiome@BlockSource@@QEBAAEBVBiome@@AEBVBlockPos@@@Z
     */
    MCAPI class Biome const & getConstBiome(class BlockPos const &) const;
    /**
     * @hash   431058110
     * @symbol ?getDefaultBrightness@BlockSource@@QEBA?AUBrightnessPair@@XZ
     */
    MCAPI struct BrightnessPair getDefaultBrightness() const;
    /**
     * @hash   -854702827
     * @symbol ?getGrassColor@BlockSource@@QEBAHAEBVBlockPos@@@Z
     */
    MCAPI int getGrassColor(class BlockPos const &) const;
    /**
     * @hash   -1995388574
     * @symbol ?getHeightmap@BlockSource@@QEBAFAEBVBlockPos@@@Z
     */
    MCAPI short getHeightmap(class BlockPos const &) const;
    /**
     * @hash   2063156467
     * @symbol ?getHeightmap@BlockSource@@QEAAFHH@Z
     */
    MCAPI short getHeightmap(int, int);
    /**
     * @hash   1034042830
     * @symbol ?getHeightmapPos@BlockSource@@QEBA?AVBlockPos@@AEBV2@@Z
     */
    MCAPI class BlockPos getHeightmapPos(class BlockPos const &) const;
    /**
     * @hash   -385674856
     * @symbol ?getLevel@BlockSource@@QEBAAEAVLevel@@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   124829530
     * @symbol ?getLevel@BlockSource@@QEAAAEAVLevel@@XZ
     */
    MCAPI class Level & getLevel();
    /**
     * @hash   -1681749436
     * @symbol ?getLevelConst@BlockSource@@QEBAAEBVLevel@@XZ
     */
    MCAPI class Level const & getLevelConst() const;
    /**
     * @hash   -1402154901
     * @symbol ?getNextTickUpdateForPos@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@AEAUTick@@@Z
     */
    MCAPI bool getNextTickUpdateForPos(class BlockPos const &, enum class TickingQueueType, struct Tick &) const;
    /**
     * @hash   738783214
     * @symbol ?getPublicSource@BlockSource@@QEBA_NXZ
     */
    MCAPI bool getPublicSource() const;
    /**
     * @hash   -922424623
     * @symbol ?getRawBrightness@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@_N1@Z
     */
    MCAPI struct Brightness getRawBrightness(class BlockPos const &, bool, bool) const;
    /**
     * @hash   -477829908
     * @symbol ?getRawBrightnessWithManualDarken@BlockSource@@QEBA?AUBrightness@@AEBVBlockPos@@U2@_N2@Z
     */
    MCAPI struct Brightness getRawBrightnessWithManualDarken(class BlockPos const &, struct Brightness, bool, bool) const;
    /**
     * @hash   -1276192202
     * @symbol ?getSeenPercent@BlockSource@@QEAAMAEBVVec3@@AEBVAABB@@@Z
     */
    MCAPI float getSeenPercent(class Vec3 const &, class AABB const &);
    /**
     * @hash   1980317482
     * @symbol ?getTickingQueue@BlockSource@@QEBAPEAVBlockTickingQueue@@AEBVBlockPos@@W4TickingQueueType@@_N@Z
     */
    MCAPI class BlockTickingQueue * getTickingQueue(class BlockPos const &, enum class TickingQueueType, bool) const;
    /**
     * @hash   -1921781489
     * @symbol ?getVoidHeight@BlockSource@@QEBAFXZ
     */
    MCAPI short getVoidHeight() const;
    /**
     * @hash   445297414
     * @symbol ?getWritableChunk@BlockSource@@QEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
     */
    MCAPI class LevelChunk * getWritableChunk(class ChunkPos const &);
    /**
     * @hash   1623948561
     * @symbol ?hasBorderBlock@BlockSource@@QEBA_NVBlockPos@@@Z
     */
    MCAPI bool hasBorderBlock(class BlockPos) const;
    /**
     * @hash   -1086603464
     * @symbol ?hasChunksAt@BlockSource@@QEBA_NAEBVBlockPos@@0_N@Z
     */
    MCAPI bool hasChunksAt(class BlockPos const &, class BlockPos const &, bool) const;
    /**
     * @hash   -955536209
     * @symbol ?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &) const;
    /**
     * @hash   1809027050
     * @symbol ?hasTickInCurrentTick@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z
     */
    MCAPI bool hasTickInCurrentTick(class BlockPos const &, enum class TickingQueueType) const;
    /**
     * @hash   -2132484613
     * @symbol ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &) const;
    /**
     * @hash   1695234854
     * @symbol ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &) const;
    /**
     * @hash   1409879175
     * @symbol ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlock@@W4TickingQueueType@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &, enum class TickingQueueType) const;
    /**
     * @hash   442419300
     * @symbol ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class BlockLegacy const &) const;
    /**
     * @hash   -877542857
     * @symbol ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@AEBVBlockLegacy@@W4TickingQueueType@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class BlockLegacy const &, enum class TickingQueueType) const;
    /**
     * @hash   1900571960
     * @symbol ?hasTickInPendingTicks@BlockSource@@QEBA_NAEBVBlockPos@@W4TickingQueueType@@@Z
     */
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, enum class TickingQueueType) const;
    /**
     * @hash   1741375078
     * @symbol ?hasUntickedNeighborChunk@BlockSource@@QEBA_NAEBVChunkPos@@H@Z
     */
    MCAPI bool hasUntickedNeighborChunk(class ChunkPos const &, int) const;
    /**
     * @hash   1065450160
     * @symbol ?isChunkFullyLoaded@BlockSource@@QEBA_NAEBVChunkPos@@AEBVChunkSource@@@Z
     */
    MCAPI bool isChunkFullyLoaded(class ChunkPos const &, class ChunkSource const &) const;
    /**
     * @hash   1436565659
     * @symbol ?isConsideredSolidBlock@BlockSource@@QEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isConsideredSolidBlock(class BlockPos const &);
    /**
     * @hash   -1580109685
     * @symbol ?isEmptyBlock@BlockSource@@QEAA_NHHH@Z
     */
    MCAPI bool isEmptyBlock(int, int, int);
    /**
     * @hash   -1700987409
     * @symbol ?isEmptyBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isEmptyBlock(class BlockPos const &) const;
    /**
     * @hash   1917659551
     * @symbol ?isEmptyWaterBlock@BlockSource@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isEmptyWaterBlock(class BlockPos const &) const;
    /**
     * @hash   1535441505
     * @symbol ?isInWall@BlockSource@@QEAA_NAEBVVec3@@@Z
     */
    MCAPI bool isInWall(class Vec3 const &);
    /**
     * @hash   -816772373
     * @symbol ?isInstaticking@BlockSource@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isInstaticking(class BlockPos const &) const;
    /**
     * @hash   1221455591
     * @symbol ?isNearUnloadedChunks@BlockSource@@QEAA_NAEBVChunkPos@@@Z
     */
    MCAPI bool isNearUnloadedChunks(class ChunkPos const &);
    /**
     * @hash   1540842009
     * @symbol ?isSolidBlockingBlock@BlockSource@@QEBA_NHHH@Z
     */
    MCAPI bool isSolidBlockingBlock(int, int, int) const;
    /**
     * @hash   -791817244
     * @symbol ?isTouchingMaterial@BlockSource@@QEBA_NAEBVBlockPos@@W4MaterialType@@@Z
     */
    MCAPI bool isTouchingMaterial(class BlockPos const &, enum class MaterialType) const;
    /**
     * @hash   1594905488
     * @symbol ?isUnderWater@BlockSource@@QEBA_NAEBVVec3@@AEBVBlock@@@Z
     */
    MCAPI bool isUnderWater(class Vec3 const &, class Block const &) const;
    /**
     * @hash   1053993843
     * @symbol ?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@PEBVActor@@@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const &, class Actor const *);
    /**
     * @hash   -602629113
     * @symbol ?isUnobstructedByEntities@BlockSource@@QEAA_NAEBVAABB@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@@Z
     */
    MCAPI bool isUnobstructedByEntities(class AABB const &, class gsl::span<class gsl::not_null<class Actor const *>, -1>);
    /**
     * @hash   2091737075
     * @symbol ?mayPlace@BlockSource@@QEAA_NAEBVBlock@@AEBVBlockPos@@EPEAVActor@@_N@Z
     */
    MCAPI bool mayPlace(class Block const &, class BlockPos const &, unsigned char, class Actor *, bool);
    /**
     * @hash   1385728578
     * @symbol ?neighborChanged@BlockSource@@QEAAXAEBVBlockPos@@0@Z
     */
    MCAPI void neighborChanged(class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -2141192521
     * @symbol ?postGameEvent@BlockSource@@QEAAXPEAVActor@@AEBVGameEvent@@AEBVBlockPos@@PEBVBlock@@@Z
     */
    MCAPI void postGameEvent(class Actor *, class GameEvent const &, class BlockPos const &, class Block const *);
    /**
     * @hash   2053250647
     * @symbol ?postGameEvent@BlockSource@@QEAAXPEAVActor@@AEBVGameEvent@@AEBVVec3@@PEBVBlock@@@Z
     */
    MCAPI void postGameEvent(class Actor *, class GameEvent const &, class Vec3 const &, class Block const *);
    /**
     * @hash   1672476079
     * @symbol ?removeBlock@BlockSource@@QEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool removeBlock(class BlockPos const &);
    /**
     * @hash   2142647421
     * @symbol ?removeBlock@BlockSource@@QEAA_NHHH@Z
     */
    MCAPI bool removeBlock(int, int, int);
    /**
     * @hash   -705342730
     * @symbol ?removeBlockEntity@BlockSource@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const &);
    /**
     * @hash   -102672471
     * @symbol ?removeFromRandomTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void removeFromRandomTickingQueue(class BlockPos const &, class Block const &);
    /**
     * @hash   -1258816231
     * @symbol ?removeFromTickingQueue@BlockSource@@QEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void removeFromTickingQueue(class BlockPos const &, class Block const &);
    /**
     * @hash   76826585
     * @symbol ?setBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@HV?$shared_ptr@VBlockActor@@@std@@PEBUActorBlockSyncMessage@@PEAVActor@@@Z
     */
    MCAPI bool setBlock(class BlockPos const &, class Block const &, int, class std::shared_ptr<class BlockActor>, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   2111217993
     * @symbol ?setBlock@BlockSource@@QEAA_NHHHAEBVBlock@@HPEAVActor@@@Z
     */
    MCAPI bool setBlock(int, int, int, class Block const &, int, class Actor *);
    /**
     * @hash   660943416
     * @symbol ?setBlockNoUpdate@BlockSource@@QEAA_NHHHAEBVBlock@@@Z
     */
    MCAPI bool setBlockNoUpdate(int, int, int, class Block const &);
    /**
     * @hash   1963088698
     * @symbol ?setBlockSimple@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @hash   1098244733
     * @symbol ?setBorderBlock@BlockSource@@QEAAXAEBVBlockPos@@_N@Z
     */
    MCAPI void setBorderBlock(class BlockPos const &, bool);
    /**
     * @hash   506320350
     * @symbol ?setCurrentTickForValidityChecks@BlockSource@@QEAAXAEBUTick@@@Z
     */
    MCAPI void setCurrentTickForValidityChecks(struct Tick const &);
    /**
     * @hash   2062542883
     * @symbol ?setExtraBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
     */
    MCAPI bool setExtraBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   160686836
     * @symbol ?setExtraBlockSimple@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool setExtraBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @hash   1767886653
     * @symbol ?setIsPersistentBlockSource@BlockSource@@QEAAXXZ
     */
    MCAPI void setIsPersistentBlockSource();
    /**
     * @hash   881959082
     * @symbol ?setLiquidBlock@BlockSource@@QEAA_NAEBVBlockPos@@AEBVBlock@@_NH@Z
     */
    MCAPI bool setLiquidBlock(class BlockPos const &, class Block const &, bool, int);
    /**
     * @hash   1070989136
     * @symbol ?setRandomTickingQueue@BlockSource@@QEAAXAEAVBlockTickingQueue@@@Z
     */
    MCAPI void setRandomTickingQueue(class BlockTickingQueue &);
    /**
     * @hash   1088758182
     * @symbol ?setTickingQueue@BlockSource@@QEAAXAEAVBlockTickingQueue@@@Z
     */
    MCAPI void setTickingQueue(class BlockTickingQueue &);
    /**
     * @hash   -952412579
     * @symbol ?shouldFireEvents@BlockSource@@QEBA_NAEAVLevelChunk@@@Z
     */
    MCAPI bool shouldFireEvents(class LevelChunk &) const;
    /**
     * @hash   -185283908
     * @symbol ?spawnResources@BlockSource@@QEAAXAEBVBlockPos@@MH@Z
     */
    MCAPI void spawnResources(class BlockPos const &, float, int);
    /**
     * @hash   23076437
     * @symbol ?ticksFromNow@BlockSource@@QEBAHAEBVBlockPos@@W4TickingQueueType@@H@Z
     */
    MCAPI int ticksFromNow(class BlockPos const &, enum class TickingQueueType, int) const;
    /**
     * @hash   -604366082
     * @symbol ?tryGetBiome@BlockSource@@QEBAPEAVBiome@@AEBVBlockPos@@@Z
     */
    MCAPI class Biome * tryGetBiome(class BlockPos const &) const;
    /**
     * @hash   1114484526
     * @symbol ?updateCheckForValidityState@BlockSource@@QEAAX_N@Z
     */
    MCAPI void updateCheckForValidityState(bool);
    /**
     * @hash   185907596
     * @symbol ?updateNeighborsAt@BlockSource@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void updateNeighborsAt(class BlockPos const &);
    /**
     * @hash   1541722129
     * @symbol ?updateNeighborsAtExceptFromFacing@BlockSource@@QEAAXAEBVBlockPos@@0H@Z
     */
    MCAPI void updateNeighborsAtExceptFromFacing(class BlockPos const &, class BlockPos const &, int);
    /**
     * @hash   1922389553
     * @symbol ?generateUnloadedChunkAABB@BlockSource@@SA?AVAABB@@AEBVChunkPos@@@Z
     */
    MCAPI static class AABB generateUnloadedChunkAABB(class ChunkPos const &);

//protected:
    /**
     * @hash   746716357
     * @symbol ?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@PEAVActor@@@Z
     */
    MCAPI void _blockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, class Actor *);
    /**
     * @hash   -1248500664
     * @symbol ?_fetchBorderBlockCollisions@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@_N@Z
     */
    MCAPI void _fetchBorderBlockCollisions(std::vector<class AABB> &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, bool) const;
    /**
     * @hash   -2115297749
     * @symbol ?_fetchEntityHelper@BlockSource@@IEAAXVWeakEntityRef@@V?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@AEBVAABB@@_N@Z
     */
    MCAPI void _fetchEntityHelper(class WeakEntityRef, class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool);
    /**
     * @hash   -966720677
     * @symbol ?_hasChunksAt@BlockSource@@IEBA_NAEBUBounds@@_N@Z
     */
    MCAPI bool _hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @hash   73310495
     * @symbol ?_updateTallestCollisionShapeWithBorderBlockCollisions@BlockSource@@IEBAXAEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV2@AEBVVec3@@AEAM@Z
     */
    MCAPI void _updateTallestCollisionShapeWithBorderBlockCollisions(class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @hash   1325542919
     * @symbol ?addUnloadedChunksAABBs@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@@Z
     */
    MCAPI void addUnloadedChunksAABBs(std::vector<class AABB> &, class AABB const &) const;
    /**
     * @hash   2017423424
     * @symbol ?addVoidFloor@BlockSource@@IEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@@Z
     */
    MCAPI void addVoidFloor(std::vector<class AABB> &, class AABB const &) const;
    /**
     * @hash   -803385698
     * @symbol ?getTallestCollisionShapeFromUnloadedChunksAABBs@BlockSource@@IEBAXAEBVAABB@@AEAV2@AEBVVec3@@AEAM@Z
     */
    MCAPI void getTallestCollisionShapeFromUnloadedChunksAABBs(class AABB const &, class AABB &, class Vec3 const &, float &) const;

//private:
    /**
     * @hash   579610510
     * @symbol ?_getBlockPermissions@BlockSource@@AEAA_NAEBVBlockPos@@_N@Z
     */
    MCAPI bool _getBlockPermissions(class BlockPos const &, bool);
    /**
     * @hash   1315246647
     * @symbol ?_getRawBrightness@BlockSource@@AEBA?AUBrightness@@AEBVBlockPos@@U2@_N2@Z
     */
    MCAPI struct Brightness _getRawBrightness(class BlockPos const &, struct Brightness, bool, bool) const;
    /**
     * @hash   -936389921
     * @symbol ?_removeFromTickingQueue@BlockSource@@AEAAXAEBVBlockPos@@AEBVBlock@@W4TickingQueueType@@@Z
     */
    MCAPI void _removeFromTickingQueue(class BlockPos const &, class Block const &, enum class TickingQueueType);

protected:

private:

};