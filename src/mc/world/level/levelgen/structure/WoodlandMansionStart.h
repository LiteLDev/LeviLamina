#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class WoodlandMansionStart : public ::StructureStart {
public:
    // prevent constructor by default
    WoodlandMansionStart& operator=(WoodlandMansionStart const&);
    WoodlandMansionStart(WoodlandMansionStart const&);
    WoodlandMansionStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~WoodlandMansionStart() = default;

    // vIndex: 1, symbol: ?postProcess@WoodlandMansionStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_create@WoodlandMansionStart@@AEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void _create(class Dimension&, class Random&, int, int);

    // symbol: ?_makeStairs@WoodlandMansionStart@@AEAAXAEBVBlockPos@@AEBVBlock@@EEAEAVBlockSource@@AEBVBoundingBox@@@Z
    MCAPI void
    _makeStairs(class BlockPos const&, class Block const&, uchar, uchar, class BlockSource&, class BoundingBox const&);

    // symbol: ?_fillCobblestone@WoodlandMansionStart@@CAXAEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI static void _fillCobblestone(class BlockPos const&, class BlockSource&);

    // NOLINTEND
};
