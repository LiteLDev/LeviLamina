#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NibblePair {
public:
    // prevent constructor by default
    NibblePair& operator=(NibblePair const&);
    NibblePair(NibblePair const&);
    NibblePair();
};
