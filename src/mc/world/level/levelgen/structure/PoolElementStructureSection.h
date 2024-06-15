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
    // vIndex: 0, symbol: __gen_??1PoolElementStructureSection@worldgen@br@@UEAA@XZ
    virtual ~PoolElementStructureSection() = default;

    // vIndex: 1, symbol:
    // ?appendJunctions@PoolElementStructureSection@worldgen@br@@UEAAXAEBVBoundingBox@@AEAV?$vector@UJigsawJunction@worldgen@br@@V?$allocator@UJigsawJunction@worldgen@br@@@std@@@std@@@Z
    virtual void appendJunctions(class BoundingBox const&, std::vector<struct br::worldgen::JigsawJunction>&);

    // vIndex: 2, symbol:
    // ?appendRigid@PoolElementStructureSection@worldgen@br@@UEAAXW4Type@TerrainAdjustment@23@AEAV?$vector@URigid@worldgen@br@@V?$allocator@URigid@worldgen@br@@@std@@@std@@@Z
    virtual void appendRigid(::br::worldgen::TerrainAdjustment::Type, std::vector<struct br::worldgen::Rigid>&);

    // vIndex: 3, symbol:
    // ?postProcess@PoolElementStructureSection@worldgen@br@@UEBA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&) const;

    // NOLINTEND
};

}; // namespace br::worldgen
