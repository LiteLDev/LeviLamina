#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/WorldGenContext.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeSource;
class Block;
class BlockPos;
class BlockVolume;
class BoundingBox;
class Dimension;
class Feature;
class ILevel;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
// clang-format on

class BlockVolumeTarget : public ::IBlockWorldGenAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockVolume&>       mBlockVolume;
    ::ll::TypedStorage<8, 8, ::BiomeSource const&> mBiomeSource;
    ::ll::TypedStorage<8, 8, ::ILevel&>            mLevel;
    ::ll::TypedStorage<4, 4, ::DimensionType>      mDimensionID;
    ::ll::TypedStorage<8, 80, ::WorldGenContext>   mWorldGenContext;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVolumeTarget& operator=(BlockVolumeTarget const&);
    BlockVolumeTarget(BlockVolumeTarget const&);
    BlockVolumeTarget();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockVolumeTarget() /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const /*override*/;

    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const /*override*/;

    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>) /*override*/;

    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const /*override*/;

    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int) /*override*/;

    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) /*override*/;

    virtual bool apply() const /*override*/;

    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&) /*override*/;

    virtual bool mayPlace(::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool canSurvive(::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const /*override*/;

    virtual short getMaxHeight() const /*override*/;

    virtual short getMinHeight() const /*override*/;

    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const /*override*/;

    virtual short getHeightmap(int x, int z) /*override*/;

    virtual bool isLegacyLevel() /*override*/;

    virtual ::Biome const* getBiome(::BlockPos const& pos) const /*override*/;

    virtual bool isInBounds(::Pos const& pos) const /*override*/;

    virtual short getLocalWaterLevel(::BlockPos const&) const /*override*/;

    virtual ::LevelData const& getLevelData() const /*override*/;

    virtual ::WorldGenContext const& getContext() /*override*/;

    virtual void disableBlockSimple() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const& $getBlock(::BlockPos const& pos) const;

    MCFOLD ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;

    MCFOLD ::Block const& $getExtraBlock(::BlockPos const&) const;

    MCAPI ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;

    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>);

    MCAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;

    MCAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int);

    MCFOLD bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCFOLD bool $apply() const;

    MCFOLD bool $placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&);

    MCFOLD bool $mayPlace(::BlockPos const&, ::Block const&) const;

    MCFOLD bool $canSurvive(::BlockPos const&, ::Block const&) const;

    MCFOLD bool $canBeBuiltOver(::BlockPos const&, ::Block const&) const;

    MCAPI short $getMaxHeight() const;

    MCFOLD short $getMinHeight() const;

    MCFOLD bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;

    MCAPI short $getHeightmap(int x, int z);

    MCAPI bool $isLegacyLevel();

    MCAPI ::Biome const* $getBiome(::BlockPos const& pos) const;

    MCAPI bool $isInBounds(::Pos const& pos) const;

    MCAPI short $getLocalWaterLevel(::BlockPos const&) const;

    MCAPI ::LevelData const& $getLevelData() const;

    MCFOLD ::WorldGenContext const& $getContext();

    MCFOLD void $disableBlockSimple();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
