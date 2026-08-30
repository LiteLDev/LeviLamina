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

    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const = 0;

    virtual ::Block const& getBlock(::BlockPos const& pos) const = 0;

    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const = 0;

    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate) = 0;

    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const = 0;

    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags) = 0;

    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) = 0;

    virtual bool apply() const = 0;

    virtual bool
    placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings) = 0;

    virtual bool mayPlace(::BlockPos const& pos, ::Block const& block) const = 0;

    virtual bool canSurvive(::BlockPos const& pos, ::Block const& block) const = 0;

    virtual bool canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const = 0;

    virtual short getMaxHeight() const = 0;

    virtual short getMinHeight() const = 0;

    virtual bool shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const = 0;

    virtual short getHeightmap(int x, int z) = 0;

    virtual bool isLegacyLevel() = 0;

    virtual ::Biome const* getBiome(::BlockPos const& pos) const = 0;

    virtual bool isInBounds(::Pos const& pos) const = 0;

    virtual short getLocalWaterLevel(::BlockPos const& pos) const = 0;

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
