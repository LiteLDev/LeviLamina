#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class BastionPiece : public ::PoolElementStructurePiece {
public:
    // prevent constructor by default
    BastionPiece& operator=(BastionPiece const&);
    BastionPiece(BastionPiece const&);
    BastionPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BastionPiece() = default;

    // vIndex: 13
    virtual int generateHeightAtPosition(
        class BlockPos const&                                                    pos,
        class Dimension&                                                         dim,
        class BlockVolume&                                                       box,
        std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>& chunkHeightCache
    ) const;

    // vIndex: 14
    virtual class Block const*
    getSupportBlock(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 15
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    MCAPI static void addPieces(
        class BlockPos                                      position,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        class JigsawStructureRegistry&                      pools,
        ::VanillaBiomeTypes                                 biomeType,
        class Dimension&                                    dimension
    );

    // NOLINTEND
};
