#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"

class TransactionalWorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    // prevent constructor by default
    TransactionalWorldBlockTarget& operator=(TransactionalWorldBlockTarget const&);
    TransactionalWorldBlockTarget(TransactionalWorldBlockTarget const&);
    TransactionalWorldBlockTarget();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TransactionalWorldBlockTarget@@UEAA@XZ
    virtual ~TransactionalWorldBlockTarget();

    // vIndex: 1, symbol: ?canGetChunk@IBlockWorldGenAPI@@UEBA_NXZ
    virtual bool canGetChunk() const;

    // vIndex: 2, symbol: ?getChunk@IBlockWorldGenAPI@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z
    virtual class LevelChunk* getChunk(class ChunkPos const& pos);

    // vIndex: 3, symbol: ?tryGetLiquidBlock@TransactionalWorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const* tryGetLiquidBlock(class BlockPos const& pos) const;

    // vIndex: 4, symbol: ?getBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const& pos) const;

    // vIndex: 5, symbol: ?getBlockNoBoundsCheck@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const& pos) const;

    // vIndex: 6, symbol: ?getExtraBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const& pos) const;

    // vIndex: 7, symbol:
    // ?fetchBlocksInBox@TransactionalWorldBlockTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    virtual gsl::span<class BlockDataFetchResult<class Block> const>
    fetchBlocksInBox(class BoundingBox const& box, std::function<bool(class Block const&)> predicate);

    // vIndex: 8, symbol: ?hasBiomeTag@TransactionalWorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z
    virtual bool hasBiomeTag(uint64, class BlockPos const& pos) const;

    // vIndex: 9, symbol: ?setBlock@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
    virtual bool setBlock(class BlockPos const& pos, class Block const& newBlock, int updateFlags);

    // vIndex: 10, symbol: ?setBlockSimple@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool setBlockSimple(class BlockPos const& pos, class Block const& block);

    // vIndex: 11, symbol: ?apply@TransactionalWorldBlockTarget@@UEBA_NXZ
    virtual bool apply() const;

    // vIndex: 12, symbol:
    // ?placeStructure@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
    virtual bool
    placeStructure(class BlockPos const& pos, class StructureTemplate& structure, class StructureSettings& settings);

    // vIndex: 13, symbol: ?mayPlace@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool mayPlace(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 14, symbol: ?canSurvive@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canSurvive(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 15, symbol: ?canBeBuiltOver@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeBuiltOver(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 16, symbol: ?getMaxHeight@TransactionalWorldBlockTarget@@UEBAFXZ
    virtual short getMaxHeight() const;

    // vIndex: 17, symbol: ?getMinHeight@TransactionalWorldBlockTarget@@UEBAFXZ
    virtual short getMinHeight() const;

    // vIndex: 18, symbol: ?shimPlaceForOldFeatures@BlockVolumeTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;

    // vIndex: 19, symbol: ?getHeightmap@TransactionalWorldBlockTarget@@UEAAFHH@Z
    virtual short getHeightmap(int x, int z);

    // vIndex: 20, symbol: ?isLegacyLevel@TransactionalWorldBlockTarget@@UEAA_NXZ
    virtual bool isLegacyLevel();

    // vIndex: 21, symbol: ?getBiome@TransactionalWorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const& pos) const;

    // vIndex: 22, symbol: ?isInBounds@TransactionalWorldBlockTarget@@UEBA_NAEBVPos@@@Z
    virtual bool isInBounds(class Pos const& pos) const;

    // vIndex: 23, symbol: ?getLocalWaterLevel@TransactionalWorldBlockTarget@@UEBAFAEBVBlockPos@@@Z
    virtual short getLocalWaterLevel(class BlockPos const& pos) const;

    // vIndex: 24, symbol: ?getLevelData@TransactionalWorldBlockTarget@@UEBAAEBVLevelData@@XZ
    virtual class LevelData const& getLevelData() const;

    // vIndex: 25, symbol: ?getContext@TransactionalWorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ
    virtual struct WorldGenContext const& getContext();

    // vIndex: 26, symbol: ?disableBlockSimple@TransactionalWorldBlockTarget@@UEAAXXZ
    virtual void disableBlockSimple();

    // symbol: ??0TransactionalWorldBlockTarget@@QEAA@AEAVIBlockWorldGenAPI@@@Z
    MCAPI explicit TransactionalWorldBlockTarget(class IBlockWorldGenAPI& target);

    // NOLINTEND
};
