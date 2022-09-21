/**
 * @file  MC/BlockVolumeTarget.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~BlockVolumeTarget();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   2076634969
     * @vftbl  2
     * @symbol ?getMinHeight@BlockVolumeTarget@@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @hash   188245398
     * @vftbl  3
     * @symbol ?tryGetLiquidBlock@BlockVolumeTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   488536965
     * @vftbl  6
     * @symbol ?getExtraBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -1890756153
     * @vftbl  7
     * @symbol ?fetchBlocksInBox@BlockVolumeTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   1790319978
     * @vftbl  8
     * @symbol ?hasBiomeTag@BlockVolumeTarget@@UEBA_N_KAEBVBlockPos@@@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @hash   -1746283263
     * @vftbl  9
     * @symbol ?setBlock@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   -1339615760
     * @vftbl  10
     * @symbol ?setBlockSimple@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   -1736084885
     * @vftbl  15
     * @symbol ?getMaxHeight@BlockVolumeTarget@@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   -796957434
     * @vftbl  18
     * @symbol ?getHeightmap@BlockVolumeTarget@@UEAAFHH@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @hash   -1627143054
     * @vftbl  19
     * @symbol ?isLegacyLevel@BlockVolumeTarget@@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @hash   976521349
     * @vftbl  20
     * @symbol ?getBiome@BlockVolumeTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @hash   1224310783
     * @vftbl  21
     * @symbol ?isInBounds@BlockVolumeTarget@@UEBA_NAEBVPos@@@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @hash   -926289328
     * @vftbl  22
     * @symbol ?getLocalWaterLevel@BlockVolumeTarget@@UEBAFAEBVBlockPos@@@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @hash   -1802389993
     * @vftbl  23
     * @symbol ?getLevelData@BlockVolumeTarget@@UEBAAEBVLevelData@@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @hash   -1621646151
     * @vftbl  24
     * @symbol ?getContext@BlockVolumeTarget@@UEAAAEBUWorldGenContext@@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @hash   -663629690
     * @vftbl  25
     * @symbol ?disableBlockSimple@BlockVolumeTarget@@UEAAXXZ
     */
    virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKVOLUMETARGET
    /**
     * @hash   -529150738
     * @symbol ?apply@BlockVolumeTarget@@UEBA_NXZ
     */
    MCVAPI bool apply() const;
    /**
     * @hash   -1075938044
     * @symbol ?canSurvive@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCVAPI bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1799899887
     * @symbol ?getBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    MCVAPI class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   858428525
     * @symbol ?getBlockNoBoundsCheck@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    MCVAPI class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @hash   226194084
     * @symbol ?mayPlace@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCVAPI bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -506622428
     * @symbol ?placeStructure@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
     */
    MCVAPI bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @hash   -1161638001
     * @symbol ?shimPlaceForOldFeatures@BlockVolumeTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCVAPI bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
#endif
    /**
     * @hash   1571063541
     * @symbol ??0BlockVolumeTarget@@QEAA@AEAVBlockVolume@@AEAVLevel@@AEBVBiomeSource@@V?$AutomaticID@VDimension@@H@@AEBUWorldGenContext@@@Z
     */
    MCAPI BlockVolumeTarget(class BlockVolume &, class Level &, class BiomeSource const &, class AutomaticID<class Dimension, int>, struct WorldGenContext const &);

};