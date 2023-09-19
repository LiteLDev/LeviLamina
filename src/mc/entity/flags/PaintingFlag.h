#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PaintingFlag {
public:
    // prevent constructor by default
    PaintingFlag& operator=(PaintingFlag const&);
    PaintingFlag(PaintingFlag const&);
    PaintingFlag();
};
