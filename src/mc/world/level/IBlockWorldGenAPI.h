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
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBlockWorldGenAPI() = default;

    virtual bool canGetChunk() const;

    virtual ::LevelChunk* getChunk(::ChunkPos const& pos);

    virtual ::Block const* tryGetLiquidBlock(::BlockPos const&) const = 0;

    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const&) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>) = 0;

    virtual bool hasBiomeTag(uint64, ::BlockPos const&) const = 0;

    virtual bool setBlock(::BlockPos const&, ::Block const&, int) = 0;

    virtual bool setBlockSimple(::BlockPos const&, ::Block const&) = 0;

    virtual bool apply() const = 0;

    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&) = 0;

    virtual bool mayPlace(::BlockPos const&, ::Block const&) const = 0;

    virtual bool canSurvive(::BlockPos const&, ::Block const&) const = 0;

    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const = 0;

    virtual short getMaxHeight() const = 0;

    virtual short getMinHeight() const = 0;

    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const = 0;

    virtual short getHeightmap(int, int) = 0;

    virtual bool isLegacyLevel() = 0;

    virtual ::Biome const* getBiome(::BlockPos const&) const = 0;

    virtual bool isInBounds(::Pos const&) const = 0;

    virtual short getLocalWaterLevel(::BlockPos const&) const = 0;

    virtual ::LevelData const& getLevelData() const = 0;

    virtual ::WorldGenContext const& getContext() = 0;

    virtual void disableBlockSimple() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canGetChunk() const;

    MCNAPI ::LevelChunk* $getChunk(::ChunkPos const& pos);


    // NOLINTEND
};
