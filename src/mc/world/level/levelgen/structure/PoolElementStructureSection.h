#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/adjustment/Type.h"

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
    virtual void appendJunctions(class BoundingBox const&, std::vector<struct br::worldgen::JigsawJunction>&);

    // vIndex: 2
    virtual void appendRigid(::br::worldgen::TerrainAdjustment::Type, std::vector<struct br::worldgen::Rigid>&);

    // vIndex: 3
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&) const;

    // NOLINTEND
};

}; // namespace br::worldgen
