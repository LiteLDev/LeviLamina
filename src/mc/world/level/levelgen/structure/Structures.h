#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
namespace br::worldgen { class StructureRegistry; }
// clang-format on

namespace br::worldgen {

class Structures {
public:
    // prevent constructor by default
    Structures& operator=(Structures const&);
    Structures(Structures const&);
    Structures();

public:
    // NOLINTBEGIN
    // symbol: ?bootstrap@Structures@worldgen@br@@SAXAEAVStructureRegistry@23@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    bootstrap(class br::worldgen::StructureRegistry&, class BaseGameVersion const&, class Experiments const&);

    // NOLINTEND
};

}; // namespace br::worldgen
