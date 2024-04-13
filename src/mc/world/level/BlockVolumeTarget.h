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
    // vIndex: 0, symbol: ??1BlockVolumeTarget@@UEAA@XZ
    virtual ~BlockVolumeTarget();

    // vIndex: 1, symbol: ?canGetChunk@IBlockWorldGenAPI@@UEBA_NXZ
    virtual bool canGetChunk() const;

    // vIndex: 2, symbol: ?getChunk@IBlockWorldGenAPI@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    virtual class LevelChunk* getChunk(class ChunkPos const& pos);

    // vIndex: 3, symbol: ?tryGetLiquidBlock@BlockVolumeTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const* tryGetLiquidBlock(class BlockPos const& pos) const;

    // vIndex: 4, symbol: ?getBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const& pos) const;

    // vIndex: 5, symbol: ?getBlockNoBoundsCheck@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const& pos) const;

    // vIndex: 6, symbol: ?getExtraBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const&) const;

    // vIndex: 7, symbol:
    // ?fetchBlocksInBox@BlockVolumeTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    virtual gsl::span<class BlockDataFetchResult<class Block> const>
    fetchBlocksInBox(class BoundingBox const&, std::function<bool(class Block const&)>);

    // vIndex: 8, symbol: ?hasBiomeTag@BlockVolumeTarget@@UEBA_N_KAEBVBlockPos@@@Z
    virtual bool hasBiomeTag(uint64, class BlockPos const& pos) const;

    // vIndex: 9, symbol: ?setBlock@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    virtual bool setBlock(class BlockPos const& pos, class Block const& newBlock, int);

    // vIndex: 10, symbol: ?setBlockSimple@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool setBlockSimple(class BlockPos const& pos, class Block const& block);

    // vIndex: 11, symbol: ?apply@WorldBlockTarget@@UEBA_NXZ
    virtual bool apply() const;

    // vIndex: 12, symbol:
    // ?placeStructure@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
    virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);

    // vIndex: 13, symbol: ?mayPlace@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool mayPlace(class BlockPos const&, class Block const&) const;

    // vIndex: 14, symbol: ?canSurvive@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canSurvive(class BlockPos const&, class Block const&) const;

    // vIndex: 15, symbol: ?canBeBuiltOver@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeBuiltOver(class BlockPos const&, class Block const&) const;

    // vIndex: 16, symbol: ?getMaxHeight@BlockVolumeTarget@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 17, symbol: ?getMinHeight@BlockVolumeTarget@@UEBAFXZ
    virtual short getMinHeight() const;

    // vIndex: 18, symbol: ?shimPlaceForOldFeatures@BlockVolumeTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;

    // vIndex: 19, symbol: ?getHeightmap@BlockVolumeTarget@@UEAAFHH@Z
    virtual short getHeightmap(int x, int z);

    // vIndex: 20, symbol: ?isLegacyLevel@BlockVolumeTarget@@UEAA_NXZ
    virtual bool isLegacyLevel();

    // vIndex: 21, symbol: ?getBiome@BlockVolumeTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const& pos) const;

    // vIndex: 22, symbol: ?isInBounds@BlockVolumeTarget@@UEBA_NAEBVPos@@@Z
    virtual bool isInBounds(class Pos const& pos) const;

    // vIndex: 23, symbol: ?getLocalWaterLevel@BlockVolumeTarget@@UEBAFAEBVBlockPos@@@Z
    virtual short getLocalWaterLevel(class BlockPos const&) const;

    // vIndex: 24, symbol: ?getLevelData@BlockVolumeTarget@@UEBAAEBVLevelData@@XZ
    virtual class LevelData const& getLevelData() const;

    // vIndex: 25, symbol: ?getContext@BlockVolumeTarget@@UEAAAEBUWorldGenContext@@XZ
    virtual struct WorldGenContext const& getContext();

    // vIndex: 26, symbol: ?disableBlockSimple@BlockVolumeTarget@@UEAAXXZ
    virtual void disableBlockSimple();

    // symbol:
    // ??0BlockVolumeTarget@@QEAA@AEAVBlockVolume@@AEAVLevel@@AEBVBiomeSource@@V?$AutomaticID@VDimension@@H@@AEBUWorldGenContext@@@Z
    MCAPI BlockVolumeTarget(
        class BlockVolume&            blockVolume,
        class Level&                  level,
        class BiomeSource const&      biomeSource,
        DimensionType                 dimensionType,
        struct WorldGenContext const& context
    );

    // NOLINTEND
};
