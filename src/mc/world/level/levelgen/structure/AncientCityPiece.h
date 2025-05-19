#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class ChunkPos;
class Dimension;
class JigsawStructureRegistry;
class Random;
class StructurePiece;
// clang-format on

class AncientCityPiece : public ::PoolElementStructurePiece {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual int generateHeightAtPosition(
        ::BlockPos const&,
        ::Dimension&,
        ::BlockVolume&,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>&
    ) const /*override*/;

    // vIndex: 14
    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const /*override*/;

    // vIndex: 15
    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const /*override*/;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const /*override*/;

    // vIndex: 0
    virtual ~AncientCityPiece() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addPieces(
        ::BlockPos                                          position,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::JigsawStructureRegistry&                          pools,
        ::VanillaBiomeTypes                                 biomeType,
        ::Dimension&                                        dimension
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $generateHeightAtPosition(
        ::BlockPos const&,
        ::Dimension&,
        ::BlockVolume&,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>&
    ) const;

    MCNAPI ::Block const* $getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $getBeardStabilizeBlock(::Block const&) const;

    MCNAPI ::AdjustmentEffect $getTerrainAdjustmentEffect() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
