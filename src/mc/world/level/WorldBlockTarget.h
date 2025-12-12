#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/WorldGenContext.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockPos;
class BlockSource;
class BoundingBox;
class ChunkPos;
class Feature;
class LevelChunk;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
// clang-format on

class WorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>     mBlockSource;
    ::ll::TypedStorage<8, 80, ::WorldGenContext> mWorldGenContext;
    ::ll::TypedStorage<1, 1, bool>               mBlockSimpleIsAllowed;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBlockTarget& operator=(WorldBlockTarget const&);
    WorldBlockTarget(WorldBlockTarget const&);
    WorldBlockTarget();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldBlockTarget() /*override*/;

    virtual bool canGetChunk() const /*override*/;

    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const /*override*/;

    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate) /*override*/;

    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const /*override*/;

    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags) /*override*/;

    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) /*override*/;

    virtual bool apply() const /*override*/;

    virtual bool
    placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings) /*override*/;

    virtual bool mayPlace(::BlockPos const& pos, ::Block const& block) const /*override*/;

    virtual bool canSurvive(::BlockPos const& pos, ::Block const& block) const /*override*/;

    virtual bool canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const /*override*/;

    virtual short getMaxHeight() const /*override*/;

    virtual short getMinHeight() const /*override*/;

    virtual bool shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    virtual short getHeightmap(int x, int z) /*override*/;

    virtual bool isLegacyLevel() /*override*/;

    virtual ::Biome const* getBiome(::BlockPos const& pos) const /*override*/;

    virtual bool isInBounds(::Pos const& pos) const /*override*/;

    virtual short getLocalWaterLevel(::BlockPos const& pos) const /*override*/;

    virtual ::LevelData const& getLevelData() const /*override*/;

    virtual ::WorldGenContext const& getContext() /*override*/;

    virtual void disableBlockSimple() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canGetChunk() const;

    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos);

    MCFOLD ::Block const& $getBlock(::BlockPos const& pos) const;

    MCFOLD ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;

    MCFOLD ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCAPI ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;

    MCAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);

    MCAPI bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCFOLD bool $apply() const;

    MCAPI bool $placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings);

    MCAPI bool $mayPlace(::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $canSurvive(::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const;

    MCAPI short $getMaxHeight() const;

    MCAPI short $getMinHeight() const;

    MCAPI bool $shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const;

    MCAPI short $getHeightmap(int x, int z);

    MCAPI bool $isLegacyLevel();

    MCAPI ::Biome const* $getBiome(::BlockPos const& pos) const;

    MCAPI bool $isInBounds(::Pos const& pos) const;

    MCAPI short $getLocalWaterLevel(::BlockPos const& pos) const;

    MCAPI ::LevelData const& $getLevelData() const;

    MCFOLD ::WorldGenContext const& $getContext();

    MCAPI void $disableBlockSimple();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
