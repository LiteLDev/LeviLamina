#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NewBlockID {
public:
    // prevent constructor by default
    NewBlockID& operator=(NewBlockID const&);
    NewBlockID(NewBlockID const&);
    NewBlockID();
};
