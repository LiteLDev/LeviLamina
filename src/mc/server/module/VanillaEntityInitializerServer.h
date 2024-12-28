#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaEntityInitializerServer {
public:
    // prevent constructor by default
    VanillaEntityInitializerServer& operator=(VanillaEntityInitializerServer const&);
    VanillaEntityInitializerServer(VanillaEntityInitializerServer const&);
    VanillaEntityInitializerServer();
};
