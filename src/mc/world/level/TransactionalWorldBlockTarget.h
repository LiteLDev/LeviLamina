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
class BoundingBox;
class Feature;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
struct WorldGenContext;
// clang-format on

class TransactionalWorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk943c12;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionalWorldBlockTarget& operator=(TransactionalWorldBlockTarget const&);
    TransactionalWorldBlockTarget(TransactionalWorldBlockTarget const&);
    TransactionalWorldBlockTarget();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransactionalWorldBlockTarget() /*override*/;

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
    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCNAPI ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCNAPI ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;

    MCNAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCNAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;

    MCNAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);

    MCNAPI bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCNAPI bool $apply() const;

    MCNAPI bool $placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings);

    MCNAPI bool $mayPlace(::BlockPos const& pos, ::Block const& block) const;

    MCNAPI bool $canSurvive(::BlockPos const& pos, ::Block const& block) const;

    MCNAPI bool $canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const;

    MCNAPI short $getMaxHeight() const;

    MCNAPI short $getMinHeight() const;

    MCNAPI bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;

    MCNAPI short $getHeightmap(int x, int z);

    MCNAPI bool $isLegacyLevel();

    MCNAPI ::Biome const* $getBiome(::BlockPos const& pos) const;

    MCNAPI bool $isInBounds(::Pos const& pos) const;

    MCNAPI short $getLocalWaterLevel(::BlockPos const& pos) const;

    MCNAPI ::LevelData const& $getLevelData() const;

    MCNAPI ::WorldGenContext const& $getContext();

    MCNAPI void $disableBlockSimple();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
