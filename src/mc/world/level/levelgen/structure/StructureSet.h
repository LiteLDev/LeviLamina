#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
namespace br::worldgen { struct StructurePlacement; }
// clang-format on

namespace br::worldgen {

struct StructureSet {
public:
    // StructureSet inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // StructureSet inner types define
    struct Entry {
    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();

    public:
        // NOLINTBEGIN
        // symbol: ??1Entry@StructureSet@worldgen@br@@QEAA@XZ
        MCAPI ~Entry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureSet& operator=(StructureSet const&);
    StructureSet(StructureSet const&);
    StructureSet();

public:
    // NOLINTBEGIN
    // symbol:
    // ?create@StructureSet@worldgen@br@@SA?AV?$shared_ptr@UStructureSet@worldgen@br@@@std@@V?$shared_ptr@$$CBUStructure@worldgen@br@@@5@UStructurePlacement@23@@Z
    MCAPI static std::shared_ptr<struct br::worldgen::StructureSet>
        create(std::shared_ptr<struct br::worldgen::Structure const>, struct br::worldgen::StructurePlacement);

    // NOLINTEND
};

}; // namespace br::worldgen
