#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IGameModuleDocumentation {
public:
    // prevent constructor by default
    IGameModuleDocumentation& operator=(IGameModuleDocumentation const&);
    IGameModuleDocumentation(IGameModuleDocumentation const&);
    IGameModuleDocumentation();
};
