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
    MCNAPI static bool createChest(
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

    MCNAPI static bool createDispenser(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  y,
        int                  z,
        int                  facing,
        ::std::string const& lootTable
    );

    MCNAPI static bool createMinecartChest(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  y,
        int                  z,
        int                  direction,
        ::std::string const& lootTable
    );

    MCNAPI static void fillColumnDown(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::Block const&       block,
        int                  x,
        int                  startY,
        int                  z,
        ::BoundingBox const& chunkBB
    );

    MCNAPI static int getTorchRotation(int structureOrientation, ushort torchOrientation);
    // NOLINTEND
};
