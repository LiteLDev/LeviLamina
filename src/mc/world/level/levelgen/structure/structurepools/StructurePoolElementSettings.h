#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StructurePoolElementSettings {

public:
    // prevent constructor by default
    StructurePoolElementSettings& operator=(StructurePoolElementSettings const&) = delete;
    StructurePoolElementSettings(StructurePoolElementSettings const&)            = delete;
    StructurePoolElementSettings()                                               = delete;
};
