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
        MCAPI ~Entry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureSet& operator=(StructureSet const&);
    StructureSet(StructureSet const&);
    StructureSet();

public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<struct br::worldgen::StructureSet> create(
        std::shared_ptr<struct br::worldgen::Structure const> structure,
        struct br::worldgen::StructurePlacement               placement
    );

    // NOLINTEND
};

}; // namespace br::worldgen
