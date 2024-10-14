#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct Rigid; }
// clang-format on

namespace br::worldgen {

class PoolElementStructureSection {
public:
    // prevent constructor by default
    PoolElementStructureSection& operator=(PoolElementStructureSection const&);
    PoolElementStructureSection(PoolElementStructureSection const&);
    PoolElementStructureSection();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PoolElementStructureSection() = default;

    // vIndex: 1
    virtual void
    appendJunctions(class BoundingBox const& box, std::vector<struct br::worldgen::JigsawJunction>& junctions);

    // vIndex: 2
    virtual void
    appendRigid(::br::worldgen::TerrainAdjustment::Type type, std::vector<struct br::worldgen::Rigid>& rigids);

    // vIndex: 3
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void
    appendJunctions$(class BoundingBox const& box, std::vector<struct br::worldgen::JigsawJunction>& junctions);

    MCAPI void
    appendRigid$(::br::worldgen::TerrainAdjustment::Type type, std::vector<struct br::worldgen::Rigid>& rigids);

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB) const;

    // NOLINTEND
};

}; // namespace br::worldgen
