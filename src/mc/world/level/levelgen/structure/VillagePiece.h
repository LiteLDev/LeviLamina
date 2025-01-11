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

class VillagePiece : public ::PoolElementStructurePiece {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual int generateHeightAtPosition(
        ::BlockPos const&                                                          pos,
        ::Dimension&                                                               dim,
        ::BlockVolume&                                                             box,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
    ) const /*override*/;

    // vIndex: 14
    virtual ::Block const*
    getSupportBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const /*override*/;

    // vIndex: 15
    virtual ::Block const& getBeardStabilizeBlock(::Block const& foundationBlock) const /*override*/;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const /*override*/;

    // vIndex: 17
    virtual bool _needsPostProcessing(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~VillagePiece() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addPieces(
        ::BlockPos                                          position,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::JigsawStructureRegistry&                          pools,
        ::VanillaBiomeTypes                                 biomeType,
        ::Dimension&                                        dimension
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $generateHeightAtPosition(
        ::BlockPos const&                                                          pos,
        ::Dimension&                                                               dim,
        ::BlockVolume&                                                             box,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
    ) const;

    MCAPI ::Block const*
    $getSupportBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI ::Block const& $getBeardStabilizeBlock(::Block const& foundationBlock) const;

    MCFOLD ::AdjustmentEffect $getTerrainAdjustmentEffect() const;

    MCAPI bool $_needsPostProcessing(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
