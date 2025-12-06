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
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
struct ILevel;
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
    // vIndex: 0
    virtual ~BlockVolumeTarget() /*override*/;

    // vIndex: 4
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 5
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const /*override*/;

    // vIndex: 6
    virtual ::Block const& getExtraBlock(::BlockPos const&) const /*override*/;

    // vIndex: 3
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 7
    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const&, ::std::function<bool(::Block const&)>) /*override*/;

    // vIndex: 8
    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const /*override*/;

    // vIndex: 9
    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int) /*override*/;

    // vIndex: 10
    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) /*override*/;

    // vIndex: 11
    virtual bool apply() const /*override*/;

    // vIndex: 12
    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&) /*override*/;

    // vIndex: 13
    virtual bool mayPlace(::BlockPos const&, ::Block const&) const /*override*/;

    // vIndex: 14
    virtual bool canSurvive(::BlockPos const&, ::Block const&) const /*override*/;

    // vIndex: 15
    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const /*override*/;

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
    virtual short getLocalWaterLevel(::BlockPos const&) const /*override*/;

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
