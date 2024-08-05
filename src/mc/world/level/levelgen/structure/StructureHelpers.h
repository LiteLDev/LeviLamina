#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureHelpers {
public:
    // prevent constructor by default
    StructureHelpers& operator=(StructureHelpers const&);
    StructureHelpers(StructureHelpers const&);
    StructureHelpers();

public:
    // NOLINTBEGIN
    MCAPI static bool createChest(
        class StructurePiece&    piece,
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        int                      x,
        int                      y,
        int                      z,
        uchar                    direction,
        std::string const&       lootTable
    );

    MCAPI static bool createDispenser(
        class StructurePiece&    piece,
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        int                      x,
        int                      y,
        int                      z,
        int                      facing,
        std::string const&       lootTable
    );

    MCAPI static bool createMinecartChest(
        class StructurePiece&    piece,
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        int                      x,
        int                      y,
        int                      z,
        int                      direction,
        std::string const&       lootTable
    );

    MCAPI static void fillColumnDown(
        class StructurePiece&    piece,
        class BlockSource&       region,
        class Block const&       block,
        int                      x,
        int                      startY,
        int                      z,
        class BoundingBox const& chunkBB
    );

    MCAPI static int getTorchRotation(int structureOrientation, ushort torchOrientation);

    // NOLINTEND
};
