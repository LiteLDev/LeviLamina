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
    // symbol:
    // ?bootstrap@StructureSets@worldgen@br@@SAXAEBVStructureRegistry@23@AEAVStructureSetRegistry@23@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    bootstrap(class br::worldgen::StructureRegistry const&, class br::worldgen::StructureSetRegistry&, class BaseGameVersion const&, class Experiments const&);

    // NOLINTEND
};

}; // namespace br::worldgen
