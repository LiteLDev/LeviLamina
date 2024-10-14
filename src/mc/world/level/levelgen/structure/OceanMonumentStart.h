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
    // vIndex: 0
    virtual ~OceanMonumentStart() = default;

    // vIndex: 1
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void createMonument(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
