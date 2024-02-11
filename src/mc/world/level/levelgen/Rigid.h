#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct Rigid {
public:
    // prevent constructor by default
    Rigid& operator=(Rigid const&);
    Rigid(Rigid const&);
    Rigid();
};

}; // namespace br::worldgen
