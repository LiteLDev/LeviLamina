/**
 * @file  TransactionalWorldBlockTarget.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TransactionalWorldBlockTarget.
 *
 */
class TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSACTIONALWORLDBLOCKTARGET
public:
    class TransactionalWorldBlockTarget& operator=(class TransactionalWorldBlockTarget const &) = delete;
    TransactionalWorldBlockTarget(class TransactionalWorldBlockTarget const &) = delete;
    TransactionalWorldBlockTarget() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TransactionalWorldBlockTarget();
    /**
     * @vftbl  1
     * @symbol  ?shimPlaceForOldFeatures\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVFeature\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?tryGetLiquidBlock\@TransactionalWorldBlockTarget\@\@UEBAPEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getBlock\@TransactionalWorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getBlockNoBoundsCheck\@TransactionalWorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol  ?getExtraBlock\@TransactionalWorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol  ?fetchBlocksInBox\@TransactionalWorldBlockTarget\@\@UEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @vftbl  8
     * @symbol  ?hasBiomeTag\@TransactionalWorldBlockTarget\@\@UEBA_N_KAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @vftbl  9
     * @symbol  ?setBlock\@TransactionalWorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @vftbl  10
     * @symbol  ?setBlockSimple\@TransactionalWorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @symbol  ?apply\@TransactionalWorldBlockTarget\@\@UEBA_NXZ
     */
    virtual bool apply() const;
    /**
     * @vftbl  12
     * @symbol  ?placeStructure\@TransactionalWorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEAVStructureTemplate\@\@AEAVStructureSettings\@\@\@Z
     */
    virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @vftbl  13
     * @symbol  ?mayPlace\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  14
     * @symbol  ?canSurvive\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  15
     * @symbol  ?canBeBuiltOver\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  16
     * @symbol  ?getMaxHeight\@TransactionalWorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  17
     * @symbol  ?getMinHeight\@TransactionalWorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  ?getHeightmap\@TransactionalWorldBlockTarget\@\@UEAAFHH\@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @vftbl  20
     * @symbol  ?isLegacyLevel\@TransactionalWorldBlockTarget\@\@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @vftbl  21
     * @symbol  ?getBiome\@TransactionalWorldBlockTarget\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vftbl  22
     * @symbol  ?isInBounds\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVPos\@\@\@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @vftbl  23
     * @symbol  ?getLocalWaterLevel\@TransactionalWorldBlockTarget\@\@UEBAFAEBVBlockPos\@\@\@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @vftbl  24
     * @symbol  ?getLevelData\@TransactionalWorldBlockTarget\@\@UEBAAEBVLevelData\@\@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @vftbl  25
     * @symbol  ?getContext\@TransactionalWorldBlockTarget\@\@UEAAAEBUWorldGenContext\@\@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @vftbl  26
     * @symbol  ?disableBlockSimple\@TransactionalWorldBlockTarget\@\@UEAAXXZ
     */
    virtual void disableBlockSimple();
    /**
     * @symbol  ??0TransactionalWorldBlockTarget\@\@QEAA\@AEAVIBlockWorldGenAPI\@\@\@Z
     */
    MCAPI TransactionalWorldBlockTarget(class IBlockWorldGenAPI &);

};