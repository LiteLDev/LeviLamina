#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class StructureHelpers {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool createChest(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  y,
        int                  z,
        uchar                direction,
        ::std::string const& lootTable
    );

    MCAPI static bool createDispenser(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  z,
        int                  facing,
        int                  lootTable,
        ::std::string const& y
    );

    MCAPI static bool createMinecartChest(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  z,
        int                  lootTable,
        int                  y,
        ::std::string const& direction
    );

    MCAPI static void fillColumnDown(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::Block const&       block,
        int                  x,
        int                  startY,
        int                  z,
        ::BoundingBox const& chunkBB
    );

    MCAPI static int getTorchRotation(int structureOrientation, ushort torchOrientation);
    // NOLINTEND
};
