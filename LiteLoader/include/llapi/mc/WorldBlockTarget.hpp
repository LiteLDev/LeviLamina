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
     * @hash   -601077477
     * @vftbl  2
     * @symbol  ?getChunk\@WorldBlockTarget\@\@UEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class LevelChunk * getChunk(class ChunkPos const &);
    /**
     * @hash   -844276614
     * @vftbl  3
     * @symbol  ?tryGetLiquidBlock\@WorldBlockTarget\@\@UEBAPEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   801372709
     * @vftbl  4
     * @symbol  ?getBlock\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   1722140737
     * @vftbl  5
     * @symbol  ?getBlockNoBoundsCheck\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @hash   1306230809
     * @vftbl  6
     * @symbol  ?getExtraBlock\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -465378205
     * @vftbl  7
     * @symbol  ?fetchBlocksInBox\@WorldBlockTarget\@\@UEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -903851498
     * @vftbl  8
     * @symbol  ?hasBiomeTag\@WorldBlockTarget\@\@UEBA_N_KAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @hash   2079188869
     * @vftbl  9
     * @symbol  ?setBlock\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   1124856716
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
     * @hash   358365800
     * @vftbl  12
     * @symbol  ?placeStructure\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEAVStructureTemplate\@\@AEAVStructureSettings\@\@\@Z
     */
    virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @hash   -1701388544
     * @vftbl  13
     * @symbol  ?mayPlace\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -531297680
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
     * @hash   431953703
     * @vftbl  16
     * @symbol  ?getMaxHeight\@WorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @hash   1484184693
     * @vftbl  17
     * @symbol  ?getMinHeight\@WorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @hash   -653532685
     * @vftbl  18
     * @symbol  ?shimPlaceForOldFeatures\@WorldBlockTarget\@\@UEBA_NAEBVFeature\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -113442302
     * @vftbl  19
     * @symbol  ?getHeightmap\@WorldBlockTarget\@\@UEAAFHH\@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @hash   935751998
     * @vftbl  20
     * @symbol  ?isLegacyLevel\@WorldBlockTarget\@\@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @hash   169002649
     * @vftbl  21
     * @symbol  ?getBiome\@WorldBlockTarget\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @hash   1561444355
     * @vftbl  22
     * @symbol  ?isInBounds\@WorldBlockTarget\@\@UEBA_NAEBVPos\@\@\@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @hash   -1635293852
     * @vftbl  23
     * @symbol  ?getLocalWaterLevel\@WorldBlockTarget\@\@UEBAFAEBVBlockPos\@\@\@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @hash   -2146213021
     * @vftbl  24
     * @symbol  ?getLevelData\@WorldBlockTarget\@\@UEBAAEBVLevelData\@\@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @hash   -1364302299
     * @vftbl  25
     * @symbol  ?getContext\@WorldBlockTarget\@\@UEAAAEBUWorldGenContext\@\@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @hash   -1445325262
     * @vftbl  26
     * @symbol  ?disableBlockSimple\@WorldBlockTarget\@\@UEAAXXZ
     */
    virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDBLOCKTARGET
    /**
     * @hash   -2096292118
     * @symbol  ?apply\@WorldBlockTarget\@\@UEBA_NXZ
     */
    MCVAPI bool apply() const;
    /**
     * @hash   780218499
     * @symbol  ?canGetChunk\@WorldBlockTarget\@\@UEBA_NXZ
     */
    MCVAPI bool canGetChunk() const;
#endif
    /**
     * @hash   -2102815620
     * @symbol  ??0WorldBlockTarget\@\@QEAA\@AEAVBlockSource\@\@AEBUWorldGenContext\@\@\@Z
     */
    MCAPI WorldBlockTarget(class BlockSource &, struct WorldGenContext const &);

};