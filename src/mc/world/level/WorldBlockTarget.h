#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class WorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    // prevent constructor by default
    WorldBlockTarget& operator=(WorldBlockTarget const&);
    WorldBlockTarget(WorldBlockTarget const&);
    WorldBlockTarget();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?getChunk@WorldBlockTarget@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    virtual class LevelChunk* getChunk(class ChunkPos const&);

    // vIndex: 3, symbol: ?tryGetLiquidBlock@WorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const* tryGetLiquidBlock(class BlockPos const&) const;

    // vIndex: 4, symbol: ?getBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const&) const;

    // vIndex: 5, symbol: ?getBlockNoBoundsCheck@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const&) const;

    // vIndex: 6, symbol: ?getExtraBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const&) const;

    // vIndex: 7, symbol:
    // ?fetchBlocksInBox@WorldBlockTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    virtual gsl::span<class BlockDataFetchResult<class Block> const>
    fetchBlocksInBox(class BoundingBox const&, std::function<bool(class Block const&)>);

    // vIndex: 8, symbol: ?hasBiomeTag@WorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z
    virtual bool hasBiomeTag(uint64, class BlockPos const&) const;

    // vIndex: 9, symbol: ?setBlock@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    virtual bool setBlock(class BlockPos const&, class Block const&, int);

    // vIndex: 10, symbol: ?setBlockSimple@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool setBlockSimple(class BlockPos const&, class Block const&);

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol:
    // ?placeStructure@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
    virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);

    // vIndex: 13, symbol: ?mayPlace@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool mayPlace(class BlockPos const&, class Block const&) const;

    // vIndex: 14, symbol: ?canSurvive@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canSurvive(class BlockPos const&, class Block const&) const;

    // vIndex: 15, symbol: ?canBeBuiltOver@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeBuiltOver(class BlockPos const&, class Block const&) const;

    // vIndex: 16, symbol: ?getMaxHeight@WorldBlockTarget@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 17, symbol: ?getMinHeight@WorldBlockTarget@@UEBAFXZ
    virtual short getMinHeight() const;

    // vIndex: 18, symbol: ?shimPlaceForOldFeatures@WorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;

    // vIndex: 19, symbol: ?getHeightmap@WorldBlockTarget@@UEAAFHH@Z
    virtual short getHeightmap(int, int);

    // vIndex: 20, symbol: ?isLegacyLevel@WorldBlockTarget@@UEAA_NXZ
    virtual bool isLegacyLevel();

    // vIndex: 21, symbol: ?getBiome@WorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const&) const;

    // vIndex: 22, symbol: ?isInBounds@WorldBlockTarget@@UEBA_NAEBVPos@@@Z
    virtual bool isInBounds(class Pos const&) const;

    // vIndex: 23, symbol: ?getLocalWaterLevel@WorldBlockTarget@@UEBAFAEBVBlockPos@@@Z
    virtual short getLocalWaterLevel(class BlockPos const&) const;

    // vIndex: 24, symbol: ?getLevelData@WorldBlockTarget@@UEBAAEBVLevelData@@XZ
    virtual class LevelData const& getLevelData() const;

    // vIndex: 25, symbol: ?getContext@WorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ
    virtual struct WorldGenContext const& getContext();

    // vIndex: 26, symbol: ?disableBlockSimple@WorldBlockTarget@@UEAAXXZ
    virtual void disableBlockSimple();

    // symbol: ?apply@WorldBlockTarget@@UEBA_NXZ
    MCVAPI bool apply() const;

    // symbol: ?canGetChunk@WorldBlockTarget@@UEBA_NXZ
    MCVAPI bool canGetChunk() const;

    // symbol: ??1WorldBlockTarget@@UEAA@XZ
    MCVAPI ~WorldBlockTarget();

    // symbol: ??0WorldBlockTarget@@QEAA@AEAVBlockSource@@AEBUWorldGenContext@@@Z
    MCAPI WorldBlockTarget(class BlockSource&, struct WorldGenContext const&);

    // NOLINTEND
};
