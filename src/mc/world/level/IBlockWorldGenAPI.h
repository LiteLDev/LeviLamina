#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockDataFetchResult.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockPos;
class BoundingBox;
class ChunkPos;
class Feature;
class LevelChunk;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
struct WorldGenContext;
// clang-format on

class IBlockWorldGenAPI {
public:
    // prevent constructor by default
    IBlockWorldGenAPI& operator=(IBlockWorldGenAPI const&);
    IBlockWorldGenAPI(IBlockWorldGenAPI const&);
    IBlockWorldGenAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBlockWorldGenAPI();

    // vIndex: 1
    virtual bool canGetChunk() const;

    // vIndex: 2
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos);

    // vIndex: 3
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const&) const = 0;

    // vIndex: 4
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    // vIndex: 5
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const&) const = 0;

    // vIndex: 6
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    // vIndex: 7
    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>) = 0;

    // vIndex: 8
    virtual bool hasBiomeTag(uint64, ::BlockPos const&) const = 0;

    // vIndex: 9
    virtual bool setBlock(::BlockPos const&, ::Block const&, int) = 0;

    // vIndex: 10
    virtual bool setBlockSimple(::BlockPos const&, ::Block const&) = 0;

    // vIndex: 11
    virtual bool apply() const = 0;

    // vIndex: 12
    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&) = 0;

    // vIndex: 13
    virtual bool mayPlace(::BlockPos const&, ::Block const&) const = 0;

    // vIndex: 14
    virtual bool canSurvive(::BlockPos const&, ::Block const&) const = 0;

    // vIndex: 15
    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const = 0;

    // vIndex: 16
    virtual short getMaxHeight() const = 0;

    // vIndex: 17
    virtual short getMinHeight() const = 0;

    // vIndex: 18
    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const = 0;

    // vIndex: 19
    virtual short getHeightmap(int, int) = 0;

    // vIndex: 20
    virtual bool isLegacyLevel() = 0;

    // vIndex: 21
    virtual ::Biome const* getBiome(::BlockPos const&) const = 0;

    // vIndex: 22
    virtual bool isInBounds(::Pos const&) const = 0;

    // vIndex: 23
    virtual short getLocalWaterLevel(::BlockPos const&) const = 0;

    // vIndex: 24
    virtual ::LevelData const& getLevelData() const = 0;

    // vIndex: 25
    virtual ::WorldGenContext const& getContext() = 0;

    // vIndex: 26
    virtual void disableBlockSimple() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canGetChunk() const;

    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos);
    // NOLINTEND
};
