#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/WorldGenContext.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeSource;
class Block;
class BlockPos;
class BlockVolume;
class BoundingBox;
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
    virtual ~BlockVolumeTarget() /*override*/ = default;

    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const /*override*/;

    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const /*override*/;

    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>) /*override*/;

    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const /*override*/;

    virtual bool hasAnyBiomeTags(::gsl::span<uint64 const> tagNameHashes, ::BlockPos const& pos) const /*override*/;

    virtual bool hasAllBiomeTags(::gsl::span<uint64 const> tagNameHashes, ::BlockPos const& pos) const /*override*/;

    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int) /*override*/;

    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) /*override*/;

    virtual bool apply() const /*override*/;

    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&) /*override*/;

    virtual bool mayPlace(::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCNAPI ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;

    MCNAPI ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;

    MCNAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>);

    MCNAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;

    MCNAPI bool $hasAnyBiomeTags(::gsl::span<uint64 const> tagNameHashes, ::BlockPos const& pos) const;

    MCNAPI bool $hasAllBiomeTags(::gsl::span<uint64 const> tagNameHashes, ::BlockPos const& pos) const;

    MCNAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int);

    MCNAPI bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCNAPI bool $apply() const;

    MCNAPI bool $placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&);

    MCNAPI bool $mayPlace(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $canSurvive(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $canBeBuiltOver(::BlockPos const&, ::Block const&) const;

    MCNAPI short $getMaxHeight() const;

    MCNAPI short $getMinHeight() const;

    MCNAPI bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;

    MCNAPI short $getHeightmap(int x, int z);

    MCNAPI bool $isLegacyLevel();

    MCNAPI ::Biome const* $getBiome(::BlockPos const& pos) const;

    MCNAPI bool $isInBounds(::Pos const& pos) const;

    MCNAPI short $getLocalWaterLevel(::BlockPos const&) const;

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
