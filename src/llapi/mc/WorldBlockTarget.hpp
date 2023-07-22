/**
 * @file  WorldBlockTarget.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldBlockTarget.
 *
 */
class WorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDBLOCKTARGET
public:
    class WorldBlockTarget& operator=(class WorldBlockTarget const &) = delete;
    WorldBlockTarget(class WorldBlockTarget const &) = delete;
    WorldBlockTarget() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WorldBlockTarget();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?getChunk\@WorldBlockTarget\@\@UEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class LevelChunk * getChunk(class ChunkPos const &);
    /**
     * @vftbl  3
     * @symbol  ?tryGetLiquidBlock\@WorldBlockTarget\@\@UEBAPEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getBlock\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getBlockNoBoundsCheck\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol  ?getExtraBlock\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol  ?fetchBlocksInBox\@WorldBlockTarget\@\@UEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @vftbl  8
     * @symbol  ?hasBiomeTag\@WorldBlockTarget\@\@UEBA_N_KAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @vftbl  9
     * @symbol  ?setBlock\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @vftbl  10
     * @symbol  ?setBlockSimple\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  ?placeStructure\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEAVStructureTemplate\@\@AEAVStructureSettings\@\@\@Z
     */
    virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @vftbl  13
     * @symbol  ?mayPlace\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  14
     * @symbol  ?canSurvive\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  15
     * @symbol  ?canBeBuiltOver\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  16
     * @symbol  ?getMaxHeight\@WorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  17
     * @symbol  ?getMinHeight\@WorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  18
     * @symbol  ?shimPlaceForOldFeatures\@WorldBlockTarget\@\@UEBA_NAEBVFeature\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  19
     * @symbol  ?getHeightmap\@WorldBlockTarget\@\@UEAAFHH\@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @vftbl  20
     * @symbol  ?isLegacyLevel\@WorldBlockTarget\@\@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @vftbl  21
     * @symbol  ?getBiome\@WorldBlockTarget\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vftbl  22
     * @symbol  ?isInBounds\@WorldBlockTarget\@\@UEBA_NAEBVPos\@\@\@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @vftbl  23
     * @symbol  ?getLocalWaterLevel\@WorldBlockTarget\@\@UEBAFAEBVBlockPos\@\@\@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @vftbl  24
     * @symbol  ?getLevelData\@WorldBlockTarget\@\@UEBAAEBVLevelData\@\@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @vftbl  25
     * @symbol  ?getContext\@WorldBlockTarget\@\@UEAAAEBUWorldGenContext\@\@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @vftbl  26
     * @symbol  ?disableBlockSimple\@WorldBlockTarget\@\@UEAAXXZ
     */
    virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDBLOCKTARGET
    /**
     * @symbol  ?apply\@WorldBlockTarget\@\@UEBA_NXZ
     */
    MCVAPI bool apply() const;
    /**
     * @symbol  ?canGetChunk\@WorldBlockTarget\@\@UEBA_NXZ
     */
    MCVAPI bool canGetChunk() const;
#endif
    /**
     * @symbol  ??0WorldBlockTarget\@\@QEAA\@AEAVBlockSource\@\@AEBUWorldGenContext\@\@\@Z
     */
    MCAPI WorldBlockTarget(class BlockSource &, struct WorldGenContext const &);

};