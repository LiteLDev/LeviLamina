#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefinitionInstanceGroup {

public:
    // prevent constructor by default
    DefinitionInstanceGroup& operator=(DefinitionInstanceGroup const&) = delete;
    DefinitionInstanceGroup(DefinitionInstanceGroup const&)            = delete;
    DefinitionInstanceGroup()                                          = delete;
};
