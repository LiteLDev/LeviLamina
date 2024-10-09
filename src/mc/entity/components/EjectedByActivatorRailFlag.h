#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EjectedByActivatorRailFlag {
public:
    // prevent constructor by default
    EjectedByActivatorRailFlag& operator=(EjectedByActivatorRailFlag const&);
    EjectedByActivatorRailFlag(EjectedByActivatorRailFlag const&);
    EjectedByActivatorRailFlag();
};
