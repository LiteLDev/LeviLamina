#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class WorldBlockTarget {

public:
    // prevent constructor by default
    WorldBlockTarget& operator=(WorldBlockTarget const&) = delete;
    WorldBlockTarget(WorldBlockTarget const&)            = delete;
    WorldBlockTarget()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getChunk\@WorldBlockTarget\@\@UEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class LevelChunk* getChunk(class ChunkPos const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tryGetLiquidBlock\@WorldBlockTarget\@\@UEBAPEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const* tryGetLiquidBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getBlock\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getBlockNoBoundsCheck\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getExtraBlock\@WorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getExtraBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?fetchBlocksInBox\@WorldBlockTarget\@\@UEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1>
    fetchBlocksInBox(class BoundingBox const&, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?hasBiomeTag\@WorldBlockTarget\@\@UEBA_N_KAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?setBlock\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual bool setBlock(class BlockPos const&, class Block const&, int); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?setBlockSimple\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool setBlockSimple(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?placeStructure\@WorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEAVStructureTemplate\@\@AEAVStructureSettings\@\@\@Z
     */
    virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?mayPlace\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool mayPlace(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?canSurvive\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canSurvive(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?canBeBuiltOver\@WorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getMaxHeight\@WorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getMinHeight\@WorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMinHeight() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?shimPlaceForOldFeatures\@WorldBlockTarget\@\@UEBA_NAEBVFeature\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getHeightmap\@WorldBlockTarget\@\@UEAAFHH\@Z
     */
    virtual short getHeightmap(int, int); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?isLegacyLevel\@WorldBlockTarget\@\@UEAA_NXZ
     */
    virtual bool isLegacyLevel(); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?getBiome\@WorldBlockTarget\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const* getBiome(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?isInBounds\@WorldBlockTarget\@\@UEBA_NAEBVPos\@\@\@Z
     */
    virtual bool isInBounds(class Pos const&) const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getLocalWaterLevel\@WorldBlockTarget\@\@UEBAFAEBVBlockPos\@\@\@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?getLevelData\@WorldBlockTarget\@\@UEBAAEBVLevelData\@\@XZ
     */
    virtual class LevelData const& getLevelData() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getContext\@WorldBlockTarget\@\@UEAAAEBUWorldGenContext\@\@XZ
     */
    virtual struct WorldGenContext const& getContext(); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?disableBlockSimple\@WorldBlockTarget\@\@UEAAXXZ
     */
    virtual void disableBlockSimple(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDBLOCKTARGET
    /**
     * @symbol ?apply\@WorldBlockTarget\@\@UEBA_NXZ
     */
    MCVAPI bool apply() const; // NOLINT
    /**
     * @symbol ?canGetChunk\@WorldBlockTarget\@\@UEBA_NXZ
     */
    MCVAPI bool canGetChunk() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldBlockTarget(); // NOLINT
#endif
    /**
     * @symbol ??0WorldBlockTarget\@\@QEAA\@AEAVBlockSource\@\@AEBUWorldGenContext\@\@\@Z
     */
    MCAPI WorldBlockTarget(class BlockSource&, struct WorldGenContext const&); // NOLINT
};
