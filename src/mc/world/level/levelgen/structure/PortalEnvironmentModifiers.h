#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortalEnvironmentModifiers {

public:
    // prevent constructor by default
    PortalEnvironmentModifiers& operator=(PortalEnvironmentModifiers const&) = delete;
    PortalEnvironmentModifiers(PortalEnvironmentModifiers const&)            = delete;
    PortalEnvironmentModifiers()                                             = delete;
};
