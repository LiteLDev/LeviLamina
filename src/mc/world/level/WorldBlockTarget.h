#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/WorldGenContext.h"

// auto generated inclusion list
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class WorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    BlockSource&    mBlockSource;          // this+0x8
    WorldGenContext mWorldGenContext;      // this+0x10
    bool            mBlockSimpleIsAllowed; // this+0x60

public:
    // prevent constructor by default
    WorldBlockTarget& operator=(WorldBlockTarget const&);
    WorldBlockTarget(WorldBlockTarget const&);
    WorldBlockTarget();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WorldBlockTarget@@UEAA@XZ
    virtual ~WorldBlockTarget();

    // vIndex: 1, symbol: ?canGetChunk@WorldBlockTarget@@UEBA_NXZ
    virtual bool canGetChunk() const;

    // vIndex: 2, symbol: ?getChunk@WorldBlockTarget@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    virtual class LevelChunk* getChunk(class ChunkPos const& pos);

    // vIndex: 3, symbol: ?tryGetLiquidBlock@WorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const* tryGetLiquidBlock(class BlockPos const& pos) const;

    // vIndex: 4, symbol: ?getBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const& pos) const;

    // vIndex: 5, symbol: ?getBlockNoBoundsCheck@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const& pos) const;

    // vIndex: 6, symbol: ?getExtraBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const& pos) const;

    // vIndex: 7, symbol:
    // ?fetchBlocksInBox@WorldBlockTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    virtual gsl::span<class BlockDataFetchResult<class Block> const>
    fetchBlocksInBox(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    // vIndex: 8, symbol: ?hasBiomeTag@WorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z
    virtual bool hasBiomeTag(uint64, class BlockPos const& pos) const;

    // vIndex: 9, symbol: ?setBlock@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    virtual bool setBlock(class BlockPos const& pos, class Block const& newBlock, int updateFlags);

    // vIndex: 10, symbol: ?setBlockSimple@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool setBlockSimple(class BlockPos const& pos, class Block const& block);

    // vIndex: 11, symbol: ?apply@WorldBlockTarget@@UEBA_NXZ
    virtual bool apply() const;

    // vIndex: 12, symbol:
    // ?placeStructure@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
    virtual bool
    placeStructure(class BlockPos const& pos, class StructureTemplate& structure, class StructureSettings& settings);

    // vIndex: 13, symbol: ?mayPlace@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool mayPlace(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 14, symbol: ?canSurvive@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canSurvive(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 15, symbol: ?canBeBuiltOver@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeBuiltOver(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 16, symbol: ?getMaxHeight@WorldBlockTarget@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 17, symbol: ?getMinHeight@WorldBlockTarget@@UEBAFXZ
    virtual short getMinHeight() const;

    // vIndex: 18, symbol: ?shimPlaceForOldFeatures@WorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool
    shimPlaceForOldFeatures(class Feature const& feature, class BlockPos const& pos, class Random& random) const;

    // vIndex: 19, symbol: ?getHeightmap@WorldBlockTarget@@UEAAFHH@Z
    virtual short getHeightmap(int x, int z);

    // vIndex: 20, symbol: ?isLegacyLevel@WorldBlockTarget@@UEAA_NXZ
    virtual bool isLegacyLevel();

    // vIndex: 21, symbol: ?getBiome@WorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const& pos) const;

    // vIndex: 22, symbol: ?isInBounds@WorldBlockTarget@@UEBA_NAEBVPos@@@Z
    virtual bool isInBounds(class Pos const& pos) const;

    // vIndex: 23, symbol: ?getLocalWaterLevel@WorldBlockTarget@@UEBAFAEBVBlockPos@@@Z
    virtual short getLocalWaterLevel(class BlockPos const& pos) const;

    // vIndex: 24, symbol: ?getLevelData@WorldBlockTarget@@UEBAAEBVLevelData@@XZ
    virtual class LevelData const& getLevelData() const;

    // vIndex: 25, symbol: ?getContext@WorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ
    virtual struct WorldGenContext const& getContext();

    // vIndex: 26, symbol: ?disableBlockSimple@WorldBlockTarget@@UEAAXXZ
    virtual void disableBlockSimple();

    // symbol: ??0WorldBlockTarget@@QEAA@AEAVBlockSource@@AEBUWorldGenContext@@@Z
    MCAPI WorldBlockTarget(class BlockSource& region, struct WorldGenContext const& context);

    // NOLINTEND
};
