#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NewBlockID {

public:
    // prevent constructor by default
    NewBlockID& operator=(NewBlockID const&) = delete;
    NewBlockID(NewBlockID const&)            = delete;
    NewBlockID()                             = delete;
};
