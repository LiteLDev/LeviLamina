/**
 * @file  TransactionalWorldBlockTarget.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~TransactionalWorldBlockTarget();
    /**
     * @hash   -2083154275
     * @vftbl  1
     * @symbol ?NewSequentialFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @hash   -275340003
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @hash   -562930141
     * @vftbl  3
     * @symbol ?tryGetLiquidBlock@TransactionalWorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   637894878
     * @vftbl  4
     * @symbol ?getBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   -1467946902
     * @vftbl  5
     * @symbol ?getBlockNoBoundsCheck@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @hash   -479219374
     * @vftbl  6
     * @symbol ?getExtraBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -991633606
     * @vftbl  7
     * @symbol ?fetchBlocksInBox@TransactionalWorldBlockTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @hash   1031408413
     * @vftbl  8
     * @symbol ?hasBiomeTag@TransactionalWorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @hash   353869646
     * @vftbl  9
     * @symbol ?setBlock@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   -486781197
     * @vftbl  10
     * @symbol ?setBlockSimple@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @hash   -654173631
     * @vftbl  11
     * @symbol ?apply@TransactionalWorldBlockTarget@@UEBA_NXZ
     */
    virtual bool apply() const;
    /**
     * @hash   1989866433
     * @vftbl  12
     * @symbol ?placeStructure@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
     */
    virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @hash   -1833805513
     * @vftbl  13
     * @symbol ?mayPlace@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1624314265
     * @vftbl  14
     * @symbol ?canSurvive@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -205889682
     * @vftbl  15
     * @symbol ?getMaxHeight@TransactionalWorldBlockTarget@@UEBAFXZ
     */
    virtual short getMaxHeight() const;
    /**
     * @hash   84804908
     * @vftbl  16
     * @symbol ?getMinHeight@TransactionalWorldBlockTarget@@UEBAFXZ
     */
    virtual short getMinHeight() const;
    /**
     * @hash   3582892
     * @vftbl  17
     * @symbol ?shimPlaceForOldFeatures@TransactionalWorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -1803433383
     * @vftbl  18
     * @symbol ?getHeightmap@TransactionalWorldBlockTarget@@UEAAFHH@Z
     */
    virtual short getHeightmap(int, int);
    /**
     * @hash   1995291733
     * @vftbl  19
     * @symbol ?isLegacyLevel@TransactionalWorldBlockTarget@@UEAA_NXZ
     */
    virtual bool isLegacyLevel();
    /**
     * @hash   -69655534
     * @vftbl  20
     * @symbol ?getBiome@TransactionalWorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @hash   1925318204
     * @vftbl  21
     * @symbol ?isInBounds@TransactionalWorldBlockTarget@@UEBA_NAEBVPos@@@Z
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @hash   1343170637
     * @vftbl  22
     * @symbol ?getLocalWaterLevel@TransactionalWorldBlockTarget@@UEBAFAEBVBlockPos@@@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @hash   -568360134
     * @vftbl  23
     * @symbol ?getLevelData@TransactionalWorldBlockTarget@@UEBAAEBVLevelData@@XZ
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @hash   1174339036
     * @vftbl  24
     * @symbol ?getContext@TransactionalWorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @hash   -1660195255
     * @vftbl  25
     * @symbol ?disableBlockSimple@TransactionalWorldBlockTarget@@UEAAXXZ
     */
    virtual void disableBlockSimple();
    /**
     * @hash   1169508632
     * @symbol ??0TransactionalWorldBlockTarget@@QEAA@AEAVIBlockWorldGenAPI@@@Z
     */
    MCAPI TransactionalWorldBlockTarget(class IBlockWorldGenAPI &);

};