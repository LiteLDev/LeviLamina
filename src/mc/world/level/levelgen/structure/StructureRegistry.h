#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
    // prevent constructor by default
    StructureRegistry& operator=(StructureRegistry const&);
    StructureRegistry(StructureRegistry const&);
    StructureRegistry();

public:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<struct br::worldgen::Structure const> get(std::string_view) const;

    MCAPI ~StructureRegistry();

    // NOLINTEND
};

}; // namespace br::worldgen
