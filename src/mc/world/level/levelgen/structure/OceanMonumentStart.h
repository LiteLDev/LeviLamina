#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class OceanMonumentStart : public ::StructureStart {
public:
    // prevent constructor by default
    OceanMonumentStart& operator=(OceanMonumentStart const&);
    OceanMonumentStart(OceanMonumentStart const&);
    OceanMonumentStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentStart@@UEAA@XZ
    virtual ~OceanMonumentStart() = default;

    // vIndex: 1, symbol: ?postProcess@OceanMonumentStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?createMonument@OceanMonumentStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void createMonument(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND
};
