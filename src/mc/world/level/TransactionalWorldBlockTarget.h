#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class TransactionalWorldBlockTarget {

public:
    // prevent constructor by default
    TransactionalWorldBlockTarget& operator=(TransactionalWorldBlockTarget const&) = delete;
    TransactionalWorldBlockTarget(TransactionalWorldBlockTarget const&)            = delete;
    TransactionalWorldBlockTarget()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?shimPlaceForOldFeatures\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVFeature\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tryGetLiquidBlock\@TransactionalWorldBlockTarget\@\@UEBAPEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const* tryGetLiquidBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getBlock\@TransactionalWorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getBlockNoBoundsCheck\@TransactionalWorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getExtraBlock\@TransactionalWorldBlockTarget\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const& getExtraBlock(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?fetchBlocksInBox\@TransactionalWorldBlockTarget\@\@UEAA?AV?$span\@$$CBV?$BlockDataFetchResult\@VBlock\@\@\@\@$0?0\@gsl\@\@AEBVBoundingBox\@\@V?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1>
    fetchBlocksInBox(class BoundingBox const&, class std::function<bool(class Block const&)>); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?hasBiomeTag\@TransactionalWorldBlockTarget\@\@UEBA_N_KAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?setBlock\@TransactionalWorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    virtual bool setBlock(class BlockPos const&, class Block const&, int); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?setBlockSimple\@TransactionalWorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool setBlockSimple(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?apply\@TransactionalWorldBlockTarget\@\@UEBA_NXZ
     */
    virtual bool apply() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?placeStructure\@TransactionalWorldBlockTarget\@\@UEAA_NAEBVBlockPos\@\@AEAVStructureTemplate\@\@AEAVStructureSettings\@\@\@Z
     */
    virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?mayPlace\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool mayPlace(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?canSurvive\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canSurvive(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?canBeBuiltOver\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getMaxHeight\@TransactionalWorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMaxHeight() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getMinHeight\@TransactionalWorldBlockTarget\@\@UEBAFXZ
     */
    virtual short getMinHeight() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getHeightmap\@TransactionalWorldBlockTarget\@\@UEAAFHH\@Z
     */
    virtual short getHeightmap(int, int); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?isLegacyLevel\@TransactionalWorldBlockTarget\@\@UEAA_NXZ
     */
    virtual bool isLegacyLevel(); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?getBiome\@TransactionalWorldBlockTarget\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const* getBiome(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?isInBounds\@TransactionalWorldBlockTarget\@\@UEBA_NAEBVPos\@\@\@Z
     */
    virtual bool isInBounds(class Pos const&) const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getLocalWaterLevel\@TransactionalWorldBlockTarget\@\@UEBAFAEBVBlockPos\@\@\@Z
     */
    virtual short getLocalWaterLevel(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?getLevelData\@TransactionalWorldBlockTarget\@\@UEBAAEBVLevelData\@\@XZ
     */
    virtual class LevelData const& getLevelData() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getContext\@TransactionalWorldBlockTarget\@\@UEAAAEBUWorldGenContext\@\@XZ
     */
    virtual struct WorldGenContext const& getContext(); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?disableBlockSimple\@TransactionalWorldBlockTarget\@\@UEAAXXZ
     */
    virtual void disableBlockSimple(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRANSACTIONALWORLDBLOCKTARGET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TransactionalWorldBlockTarget(); // NOLINT
#endif
    /**
     * @symbol ??0TransactionalWorldBlockTarget\@\@QEAA\@AEAVIBlockWorldGenAPI\@\@\@Z
     */
    MCAPI TransactionalWorldBlockTarget(class IBlockWorldGenAPI&); // NOLINT
};
