#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

template <typename T0>
class StructureBuilder {
public:
    // prevent constructor by default
    StructureBuilder& operator=(StructureBuilder const&);
    StructureBuilder(StructureBuilder const&);
    StructureBuilder();
};

} // namespace br::worldgen
