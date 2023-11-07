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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OceanMonumentStart() = default;

    // vIndex: 1, symbol: ?postProcess@OceanMonumentStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ?createMonument@OceanMonumentStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void createMonument(class Dimension&, class Random&, int, int);

    // NOLINTEND
};
