#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftCorridor : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftCorridor& operator=(MineshaftCorridor const&);
    MineshaftCorridor(MineshaftCorridor const&);
    MineshaftCorridor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftCorridor() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void _placeCobWeb(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    p,
        int                      x0,
        int                      y1,
        int                      z
    );

    MCAPI void _placeSupport(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z,
        int                      y1,
        int                      x1,
        class Random&            random
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _fillPillarDownOrChainUp(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    MCAPI void
    _placeDoubleLowerOrUpperSupport(class BlockSource& region, class BoundingBox const& chunkBB, int x, int y, int z);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void addChildren$(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void postProcessMobsAt$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
