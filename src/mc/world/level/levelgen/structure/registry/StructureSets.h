#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

namespace br::worldgen {

class StructureSets {
public:
    // prevent constructor by default
    StructureSets& operator=(StructureSets const&);
    StructureSets(StructureSets const&);
    StructureSets();

public:
    // NOLINTBEGIN
    MCAPI static void
    bootstrap(class br::worldgen::StructureRegistry const& structures, class br::worldgen::StructureSetRegistry& context, class BaseGameVersion const& baseGameVersion, class Experiments const&);

    // NOLINTEND
};

}; // namespace br::worldgen
