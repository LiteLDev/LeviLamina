#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortPair {

public:
    // prevent constructor by default
    PortPair& operator=(PortPair const&) = delete;
    PortPair(PortPair const&)            = delete;
    PortPair()                           = delete;
};
