#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/IBlockWorldGenAPI.h"

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
struct WorldGenContext;
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
    // vIndex: 0
    virtual ~WorldBlockTarget() /*override*/;

    // vIndex: 1
    virtual bool canGetChunk() const /*override*/;

    // vIndex: 2
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) /*override*/;

    // vIndex: 4
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 5
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const /*override*/;

    // vIndex: 6
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 3
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 7
    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate) /*override*/;

    // vIndex: 8
    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const /*override*/;

    // vIndex: 9
    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags) /*override*/;

    // vIndex: 10
    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) /*override*/;

    // vIndex: 11
    virtual bool apply() const /*override*/;

    // vIndex: 12
    virtual bool
    placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings) /*override*/;

    // vIndex: 13
    virtual bool mayPlace(::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 14
    virtual bool canSurvive(::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 15
    virtual bool canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 16
    virtual short getMaxHeight() const /*override*/;

    // vIndex: 17
    virtual short getMinHeight() const /*override*/;

    // vIndex: 18
    virtual bool shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 19
    virtual short getHeightmap(int x, int z) /*override*/;

    // vIndex: 20
    virtual bool isLegacyLevel() /*override*/;

    // vIndex: 21
    virtual ::Biome const* getBiome(::BlockPos const& pos) const /*override*/;

    // vIndex: 22
    virtual bool isInBounds(::Pos const& pos) const /*override*/;

    // vIndex: 23
    virtual short getLocalWaterLevel(::BlockPos const& pos) const /*override*/;

    // vIndex: 24
    virtual ::LevelData const& getLevelData() const /*override*/;

    // vIndex: 25
    virtual ::WorldGenContext const& getContext() /*override*/;

    // vIndex: 26
    virtual void disableBlockSimple() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldBlockTarget(::BlockSource& region, ::WorldGenContext const& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region, ::WorldGenContext const& context);
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

    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;

    MCAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCAPI ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;

    MCAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);

    MCAPI bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI bool $apply() const;

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

    MCAPI ::WorldGenContext const& $getContext();

    MCAPI void $disableBlockSimple();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
