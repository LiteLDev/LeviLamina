/**
 * @file  BlockVolumeTarget.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockVolumeTarget.
 *
 */
class BlockVolumeTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKVOLUMETARGET
public:
    class BlockVolumeTarget& operator=(class BlockVolumeTarget const &) = delete;
    BlockVolumeTarget(class BlockVolumeTarget const &) = delete;
    BlockVolumeTarget() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockVolumeTarget();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?getMinHeight\@BlockVolumeTarget\@\@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  3
     * @symbol  ?tryGetLiquidBlock\@BlockVolumeTarget\@\@UEBAPEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  ?getExtraBlock\@BlockVolumeTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol  ?fetchBlocksInBox\@BlockVolumeTarget\@\@UEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @vftbl  8
     * @symbol  ?hasBiomeTag\@BlockVolumeTarget\@\@UEBA_N_KAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @vftbl  9
     * @symbol  ?setBlock\@BlockVolumeTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @vftbl  10
     * @symbol  ?setBlockSimple\@BlockVolumeTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  ?getMaxHeight\@BlockVolumeTarget\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  ?getHeightmap\@BlockVolumeTarget\@\@UEAAFHH\@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @vftbl  20
     * @symbol  ?isLegacyLevel\@BlockVolumeTarget\@\@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @vftbl  21
     * @symbol  ?getBiome\@BlockVolumeTarget\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vftbl  22
     * @symbol  ?isInBounds\@BlockVolumeTarget\@\@UEBA_NAEBVPos\@\@\@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @vftbl  23
     * @symbol  ?getLocalWaterLevel\@BlockVolumeTarget\@\@UEBAFAEBVBlockPos\@\@\@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @vftbl  24
     * @symbol  ?getLevelData\@BlockVolumeTarget\@\@UEBAAEBVLevelData\@\@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @vftbl  25
     * @symbol  ?getContext\@BlockVolumeTarget\@\@UEAAAEBUWorldGenContext\@\@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @vftbl  26
     * @symbol  ?disableBlockSimple\@BlockVolumeTarget\@\@UEAAXXZ
     */
    virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKVOLUMETARGET
    /**
     * @symbol  ?apply\@BlockVolumeTarget\@\@UEBA_NXZ
     */
    MCVAPI bool apply() const;
    /**
     * @symbol  ?canBeBuiltOver\@BlockVolumeTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI bool canBeBuiltOver(class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?canSurvive\@BlockVolumeTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?getBlock\@BlockVolumeTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI class Block const & getBlock(class BlockPos const &) const;
    /**
     * @symbol  ?getBlockNoBoundsCheck\@BlockVolumeTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @symbol  ?mayPlace\@BlockVolumeTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?placeStructure\@BlockVolumeTarget\@\@UEAA_NAEBVBlockPos\@\@AEAVStructureTemplate\@\@AEAVStructureSettings\@\@\@Z
     */
    MCVAPI bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @symbol  ?shimPlaceForOldFeatures\@BlockVolumeTarget\@\@UEBA_NAEBVFeature\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
#endif
    /**
     * @symbol  ??0BlockVolumeTarget\@\@QEAA\@AEAVBlockVolume\@\@AEAVLevel\@\@AEBVBiomeSource\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBUWorldGenContext\@\@\@Z
     */
    MCAPI BlockVolumeTarget(class BlockVolume &, class Level &, class BiomeSource const &, class AutomaticID<class Dimension, int>, struct WorldGenContext const &);

};