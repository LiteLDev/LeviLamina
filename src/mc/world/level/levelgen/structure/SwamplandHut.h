#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SwamplandHut : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    SwamplandHut& operator=(SwamplandHut const&);
    SwamplandHut(SwamplandHut const&);
    SwamplandHut();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwamplandHut() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 12
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void placeCauldron(
        class BlockSource&       region,
        class Random&            random,
        int                      x,
        int                      y,
        int                      z,
        class BoundingBox const& chunkBB
    );

    // NOLINTEND
};
