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
    // symbol:
    // ?createChest@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHEAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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

    // symbol:
    // ?createDispenser@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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

    // symbol:
    // ?createMinecartChest@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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

    // symbol:
    // ?fillColumnDown@StructureHelpers@@SAXAEAVStructurePiece@@AEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
    MCAPI static void fillColumnDown(
        class StructurePiece&    piece,
        class BlockSource&       region,
        class Block const&       block,
        int                      x,
        int                      startY,
        int                      z,
        class BoundingBox const& chunkBB
    );

    // symbol: ?getTorchRotation@StructureHelpers@@SAHHG@Z
    MCAPI static int getTorchRotation(int structureOrientation, ushort torchOrientation);

    // NOLINTEND
};
