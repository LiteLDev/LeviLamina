/**
 * @file  MC/WorldBlockTarget.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~WorldBlockTarget();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -1458550869
     * @vftbl  2
     * @symbol ?getChunk@WorldBlockTarget@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
     */
    virtual class LevelChunk * getChunk(class ChunkPos const &);
    /**
     * @hash   -1701842262
     * @vftbl  3
     * @symbol ?tryGetLiquidBlock@WorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   -56085307
     * @vftbl  4
     * @symbol ?getBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   -1927864863
     * @vftbl  5
     * @symbol ?getBlockNoBoundsCheck@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @hash   448757417
     * @vftbl  6
     * @symbol ?getExtraBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -1322820845
     * @vftbl  7
     * @symbol ?fetchBlocksInBox@WorldBlockTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   -1761401770
     * @vftbl  8
     * @symbol ?hasBiomeTag@WorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @hash   1221638597
     * @vftbl  9
     * @symbol ?setBlock@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   267306444
     * @vftbl  10
     * @symbol ?setBlockSimple@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   -499184472
     * @vftbl  12
     * @symbol ?placeStructure@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
     */
    virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @hash   1736028480
     * @vftbl  13
     * @symbol ?mayPlace@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1388740320
     * @vftbl  14
     * @symbol ?canSurvive@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -425565817
     * @vftbl  15
     * @symbol ?getMaxHeight@WorldBlockTarget@@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @hash   626649797
     * @vftbl  16
     * @symbol ?getMinHeight@WorldBlockTarget@@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @hash   -1511098333
     * @vftbl  17
     * @symbol ?shimPlaceForOldFeatures@WorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -970931070
     * @vftbl  18
     * @symbol ?getHeightmap@WorldBlockTarget@@UEAAFHH@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @hash   78201726
     * @vftbl  19
     * @symbol ?isLegacyLevel@WorldBlockTarget@@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @hash   -688455367
     * @vftbl  20
     * @symbol ?getBiome@WorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @hash   703894083
     * @vftbl  21
     * @symbol ?isInBounds@WorldBlockTarget@@UEBA_NAEBVPos@@@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @hash   1802169300
     * @vftbl  22
     * @symbol ?getLocalWaterLevel@WorldBlockTarget@@UEBAFAEBVBlockPos@@@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @hash   1291265507
     * @vftbl  23
     * @symbol ?getLevelData@WorldBlockTarget@@UEBAAEBVLevelData@@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @hash   1592133477
     * @vftbl  24
     * @symbol ?getContext@WorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @hash   1992199394
     * @vftbl  25
     * @symbol ?disableBlockSimple@WorldBlockTarget@@UEAAXXZ
     */
    virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDBLOCKTARGET
    /**
     * @hash   2098777306
     * @symbol ?apply@WorldBlockTarget@@UEBA_NXZ
     */
    MCVAPI bool apply() const;
    /**
     * @hash   680320627
     * @symbol ?canGetChunk@WorldBlockTarget@@UEBA_NXZ
     */
    MCVAPI bool canGetChunk() const;
#endif
    /**
     * @hash   1334724412
     * @symbol ??0WorldBlockTarget@@QEAA@AEAVBlockSource@@AEBUWorldGenContext@@@Z
     */
    MCAPI WorldBlockTarget(class BlockSource &, struct WorldGenContext const &);

};