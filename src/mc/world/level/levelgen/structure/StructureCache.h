#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureCache {
public:
    // StructureCache inner types declare
    // clang-format off
    struct StructurePair;
    class StructureTempOwner;
    // clang-format on

    // StructureCache inner types define
    struct StructurePair {
    public:
        uchar filler[24];

        // prevent constructor by default
        StructurePair& operator=(StructurePair const&);
        StructurePair(StructurePair const&);
        StructurePair();

    public:
        // NOLINTBEGIN
        // symbol: ??1StructurePair@StructureCache@worldgen@br@@QEAA@XZ
        MCAPI ~StructurePair();

        // NOLINTEND
    };
    std::unordered_map<ChunkPos, std::vector<br::worldgen::StructureCache::StructurePair>> unordered_map;
    uchar                                                                                  unk_64[8];

    class StructureTempOwner {
    public:
        // prevent constructor by default
        StructureTempOwner& operator=(StructureTempOwner const&);
        StructureTempOwner(StructureTempOwner const&);
        StructureTempOwner();

    public:
        // NOLINTBEGIN
        // symbol: ??1StructureTempOwner@StructureCache@worldgen@br@@QEAA@XZ
        MCAPI ~StructureTempOwner();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureCache& operator=(StructureCache const&);
    StructureCache(StructureCache const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StructureCache@worldgen@br@@QEAA@XZ
    MCAPI StructureCache();

    // symbol:
    // ?at@StructureCache@worldgen@br@@QEBA?AV?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@VBlockPos@@@Z
    MCAPI std::shared_ptr<class br::worldgen::StructureInstance const> at(class BlockPos) const;

    // symbol:
    // ?collectGroupByStep@StructureCache@worldgen@br@@QEBA?AV?$vector@V?$vector@V?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@V?$allocator@V?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@@2@@std@@V?$allocator@V?$vector@V?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@V?$allocator@V?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::vector<std::shared_ptr<class br::worldgen::StructureInstance const>>>
          collectGroupByStep() const;

    // symbol:
    // ?setInstanceForStructure@StructureCache@worldgen@br@@QEAAXAEBUStructure@23@$$QEAV?$shared_ptr@VStructureInstance@worldgen@br@@@std@@VChunkPos@@@Z
    MCAPI void setInstanceForStructure(
        struct br::worldgen::Structure const&,
        std::shared_ptr<class br::worldgen::StructureInstance>&&,
        class ChunkPos
    );

    // symbol: ?tick@StructureCache@worldgen@br@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND
};

}; // namespace br::worldgen
