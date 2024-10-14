#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

class AncientCityPiece : public ::PoolElementStructurePiece {
public:
    // prevent constructor by default
    AncientCityPiece& operator=(AncientCityPiece const&);
    AncientCityPiece(AncientCityPiece const&);
    AncientCityPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AncientCityPiece() = default;

    // vIndex: 13
    virtual int
    generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>&)
        const;

    // vIndex: 14
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 15
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    MCAPI static void addPieces(
        class BlockPos                                      position,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        class JigsawStructureRegistry&                      pools,
        ::VanillaBiomeTypes,
        class Dimension& dimension
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI int
    generateHeightAtPosition$(class BlockPos const&, class Dimension&, class BlockVolume&, std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>&)
        const;

    MCAPI class Block const& getBeardStabilizeBlock$(class Block const&) const;

    MCAPI class Block const* getSupportBlock$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI ::AdjustmentEffect getTerrainAdjustmentEffect$() const;

    // NOLINTEND
};
