#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/IBlockWorldGenAPI.h"

class BlockVolumeTarget : public ::IBlockWorldGenAPI {
public:
    // prevent constructor by default
    BlockVolumeTarget& operator=(BlockVolumeTarget const&);
    BlockVolumeTarget(BlockVolumeTarget const&);
    BlockVolumeTarget();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockVolumeTarget();

    // vIndex: 1
    virtual bool canGetChunk() const;

    // vIndex: 2
    virtual class LevelChunk* getChunk(class ChunkPos const& pos);

    // vIndex: 3
    virtual class Block const* tryGetLiquidBlock(class BlockPos const& pos) const;

    // vIndex: 4
    virtual class Block const& getBlock(class BlockPos const& pos) const;

    // vIndex: 5
    virtual class Block const& getBlockNoBoundsCheck(class BlockPos const& pos) const;

    // vIndex: 6
    virtual class Block const& getExtraBlock(class BlockPos const&) const;

    // vIndex: 7
    virtual gsl::span<class BlockDataFetchResult<class Block> const>
    fetchBlocksInBox(class BoundingBox const&, std::function<bool(class Block const&)>);

    // vIndex: 8
    virtual bool hasBiomeTag(uint64 tagNameHash, class BlockPos const& pos) const;

    // vIndex: 9
    virtual bool setBlock(class BlockPos const& pos, class Block const& newBlock, int);

    // vIndex: 10
    virtual bool setBlockSimple(class BlockPos const& pos, class Block const& block);

    // vIndex: 11
    virtual bool apply() const;

    // vIndex: 12
    virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);

    // vIndex: 13
    virtual bool mayPlace(class BlockPos const&, class Block const&) const;

    // vIndex: 14
    virtual bool canSurvive(class BlockPos const&, class Block const&) const;

    // vIndex: 15
    virtual bool canBeBuiltOver(class BlockPos const&, class Block const&) const;

    // vIndex: 16
    virtual short getMaxHeight() const;

    // vIndex: 17
    virtual short getMinHeight() const;

    // vIndex: 18
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;

    // vIndex: 19
    virtual short getHeightmap(int x, int z);

    // vIndex: 20
    virtual bool isLegacyLevel();

    // vIndex: 21
    virtual class Biome const* getBiome(class BlockPos const& pos) const;

    // vIndex: 22
    virtual bool isInBounds(class Pos const& pos) const;

    // vIndex: 23
    virtual short getLocalWaterLevel(class BlockPos const&) const;

    // vIndex: 24
    virtual class LevelData const& getLevelData() const;

    // vIndex: 25
    virtual struct WorldGenContext const& getContext();

    // vIndex: 26
    virtual void disableBlockSimple();

    MCAPI BlockVolumeTarget(
        class BlockVolume&            blockVolume,
        class Level&                  level,
        class BiomeSource const&      biomeSource,
        DimensionType                 dimensionType,
        struct WorldGenContext const& context
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool apply$() const;

    MCAPI bool canBeBuiltOver$(class BlockPos const&, class Block const&) const;

    MCAPI bool canGetChunk$() const;

    MCAPI bool canSurvive$(class BlockPos const&, class Block const&) const;

    MCAPI void disableBlockSimple$();

    MCAPI gsl::span<class BlockDataFetchResult<class Block> const>
          fetchBlocksInBox$(class BoundingBox const&, std::function<bool(class Block const&)>);

    MCAPI class Biome const* getBiome$(class BlockPos const& pos) const;

    MCAPI class Block const& getBlock$(class BlockPos const& pos) const;

    MCAPI class Block const& getBlockNoBoundsCheck$(class BlockPos const& pos) const;

    MCAPI class LevelChunk* getChunk$(class ChunkPos const& pos);

    MCAPI struct WorldGenContext const& getContext$();

    MCAPI class Block const& getExtraBlock$(class BlockPos const&) const;

    MCAPI short getHeightmap$(int x, int z);

    MCAPI class LevelData const& getLevelData$() const;

    MCAPI short getLocalWaterLevel$(class BlockPos const&) const;

    MCAPI short getMaxHeight$() const;

    MCAPI short getMinHeight$() const;

    MCAPI bool hasBiomeTag$(uint64 tagNameHash, class BlockPos const& pos) const;

    MCAPI bool isInBounds$(class Pos const& pos) const;

    MCAPI bool isLegacyLevel$();

    MCAPI bool mayPlace$(class BlockPos const&, class Block const&) const;

    MCAPI bool placeStructure$(class BlockPos const&, class StructureTemplate&, class StructureSettings&);

    MCAPI bool setBlock$(class BlockPos const& pos, class Block const& newBlock, int);

    MCAPI bool setBlockSimple$(class BlockPos const& pos, class Block const& block);

    MCAPI bool shimPlaceForOldFeatures$(class Feature const&, class BlockPos const&, class Random&) const;

    MCAPI class Block const* tryGetLiquidBlock$(class BlockPos const& pos) const;

    // NOLINTEND
};
