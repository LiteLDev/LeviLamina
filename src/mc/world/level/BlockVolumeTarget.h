#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class BlockVolumeTarget : public ::IBlockWorldGenAPI {
public:
    // prevent constructor by default
    BlockVolumeTarget& operator=(BlockVolumeTarget const&);
    BlockVolumeTarget(BlockVolumeTarget const&);
    BlockVolumeTarget();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?tryGetLiquidBlock@BlockVolumeTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const* tryGetLiquidBlock(class BlockPos const&) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?getExtraBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const&) const;

    // vIndex: 7, symbol:
    // ?fetchBlocksInBox@BlockVolumeTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    virtual gsl::span<class BlockDataFetchResult<class Block> const>
    fetchBlocksInBox(class BoundingBox const&, std::function<bool(class Block const&)>);

    // vIndex: 8, symbol: ?hasBiomeTag@BlockVolumeTarget@@UEBA_N_KAEBVBlockPos@@@Z
    virtual bool hasBiomeTag(uint64, class BlockPos const&) const;

    // vIndex: 9, symbol: ?setBlock@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    virtual bool setBlock(class BlockPos const&, class Block const&, int);

    // vIndex: 10, symbol: ?setBlockSimple@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool setBlockSimple(class BlockPos const&, class Block const&);

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: ?getMaxHeight@BlockVolumeTarget@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?getHeightmap@BlockVolumeTarget@@UEAAFHH@Z
    virtual short getHeightmap(int, int);

    // vIndex: 20, symbol: ?isLegacyLevel@BlockVolumeTarget@@UEAA_NXZ
    virtual bool isLegacyLevel();

    // vIndex: 21, symbol: ?getBiome@BlockVolumeTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const&) const;

    // vIndex: 22, symbol: ?isInBounds@BlockVolumeTarget@@UEBA_NAEBVPos@@@Z
    virtual bool isInBounds(class Pos const&) const;

    // vIndex: 23, symbol: ?getLocalWaterLevel@BlockVolumeTarget@@UEBAFAEBVBlockPos@@@Z
    virtual short getLocalWaterLevel(class BlockPos const&) const;

    // vIndex: 24, symbol: ?getLevelData@BlockVolumeTarget@@UEBAAEBVLevelData@@XZ
    virtual class LevelData const& getLevelData() const;

    // vIndex: 25, symbol: ?getContext@BlockVolumeTarget@@UEAAAEBUWorldGenContext@@XZ
    virtual struct WorldGenContext const& getContext();

    // vIndex: 26, symbol: ?disableBlockSimple@BlockVolumeTarget@@UEAAXXZ
    virtual void disableBlockSimple();

    // symbol: ?apply@BlockVolumeTarget@@UEBA_NXZ
    MCVAPI bool apply() const;

    // symbol: ?canBeBuiltOver@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCVAPI bool canBeBuiltOver(class BlockPos const&, class Block const&) const;

    // symbol: ?canSurvive@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCVAPI bool canSurvive(class BlockPos const&, class Block const&) const;

    // symbol: ?getBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    MCVAPI class Block const& getBlock(class BlockPos const&) const;

    // symbol: ?getBlockNoBoundsCheck@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    MCVAPI class Block const& getBlockNoBoundsCheck(class BlockPos const&) const;

    // symbol: ?getMinHeight@BlockVolumeTarget@@UEBAFXZ
    MCVAPI short getMinHeight() const;

    // symbol: ?mayPlace@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCVAPI bool mayPlace(class BlockPos const&, class Block const&) const;

    // symbol: ?placeStructure@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
    MCVAPI bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);

    // symbol: ?shimPlaceForOldFeatures@BlockVolumeTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
    MCVAPI bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;

    // symbol: ??1BlockVolumeTarget@@UEAA@XZ
    MCVAPI ~BlockVolumeTarget();

    // symbol:
    // ??0BlockVolumeTarget@@QEAA@AEAVBlockVolume@@AEAVLevel@@AEBVBiomeSource@@V?$AutomaticID@VDimension@@H@@AEBUWorldGenContext@@@Z
    MCAPI
    BlockVolumeTarget(class BlockVolume&, class Level&, class BiomeSource const&, class AutomaticID<class Dimension, int>, struct WorldGenContext const&);

    // NOLINTEND
};
