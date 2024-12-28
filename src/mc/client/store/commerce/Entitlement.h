#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Entitlement {
public:
    // prevent constructor by default
    Entitlement& operator=(Entitlement const&);
    Entitlement(Entitlement const&);
    Entitlement();
};
