#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class StructurePiece {
public:
    // prevent constructor by default
    StructurePiece& operator=(StructurePiece const&);
    StructurePiece(StructurePiece const&);
    StructurePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePiece();

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB) = 0;

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 6
    virtual bool isInInvalidLocation(class BlockSource& region, class BoundingBox const& chunkBB);

    // vIndex: 7
    virtual int getWorldX(int x, int z);

    // vIndex: 8
    virtual int getWorldZ(int x, int z);

    // vIndex: 9
    virtual void placeBlock(
        class BlockSource&       region,
        class Block const&       block,
        int                      x,
        int                      y,
        int                      z,
        class BoundingBox const& chunkBB
    );

    // vIndex: 10
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);

    // vIndex: 11
    virtual void generateBox(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1,
        class Block const&       edgeBlock,
        class Block const&       fillBlock,
        bool                     skipAir
    );

    // vIndex: 12
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    MCAPI class BlockPos _getWorldPos(int x, int y, int z);

    MCAPI void addTerrainAdjustmentToken(std::shared_ptr<bool> token);

    MCAPI void generateAirBox(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1
    );

    MCAPI void generateBox(
        class BlockSource&         region,
        class BoundingBox const&   chunkBB,
        int                        x0,
        int                        y0,
        int                        z0,
        int                        x1,
        int                        y1,
        int                        z1,
        bool                       skipAir,
        class Random&              random,
        class BlockSelector const& selector
    );

    MCAPI void generateMaybeBox(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    probability,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1,
        class Block const&       edgeBlock,
        class Block const&       fillBlock,
        bool                     skipAir,
        bool                     excludeSky
    );

    MCAPI void generateUpperHalfSphere(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1,
        class Block const&       fillBlock,
        bool                     skipAir
    );

    MCAPI class Block const& getBlock(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    MCAPI ::Direction::Type getOrientation() const;

    MCAPI ushort getOrientationData(class Block const* block, ushort data);

    MCAPI int getWorldY(int y);

    MCAPI bool isAboveGround(int x0, int y1, int z, class BlockSource& region);

    MCAPI bool isAir(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    MCAPI bool isReplaceableBlock(class Block const& block);

    MCAPI void maybeGenerateBlock(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    probability,
        int                      x,
        int                      y,
        int                      z,
        class Block const&       block
    );

    MCAPI void maybeGenerateBlockIfNotFloating(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    probability,
        int                      x,
        int                      y,
        int                      z,
        class Block const&       block
    );

    MCAPI static class StructurePiece*
    findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const& pieces, class BoundingBox const& box);

    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const& pieceWeights);

    // NOLINTEND
};
