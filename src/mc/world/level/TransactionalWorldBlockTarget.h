#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WorldChangeTransaction.h"
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
    ::ll::TypedStorage<8, 16, ::WorldChangeTransaction> mTransaction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransactionalWorldBlockTarget() /*override*/;

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

    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const /*override*/;

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
    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCFOLD ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;

    MCFOLD ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCFOLD ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);

    MCAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;

    MCAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);

    MCFOLD bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI bool $apply() const;

    MCAPI bool $placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings);

    MCFOLD bool $mayPlace(::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $canSurvive(::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const;

    MCFOLD short $getMaxHeight() const;

    MCFOLD short $getMinHeight() const;

    MCFOLD bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;

    MCFOLD short $getHeightmap(int x, int z);

    MCFOLD bool $isLegacyLevel();

    MCFOLD ::Biome const* $getBiome(::BlockPos const& pos) const;

    MCFOLD bool $isInBounds(::Pos const& pos) const;

    MCAPI short $getLocalWaterLevel(::BlockPos const& pos) const;

    MCAPI ::LevelData const& $getLevelData() const;

    MCAPI ::WorldGenContext const& $getContext();

    MCFOLD void $disableBlockSimple();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
