#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClassID {
public:
    // prevent constructor by default
    ClassID& operator=(ClassID const&);
    ClassID(ClassID const&);
    ClassID();

    // private:
    // NOLINTBEGIN
    // symbol: ?getNextID@ClassID@@CA_KXZ
    MCAPI static uint64 getNextID();

    // NOLINTEND
};
