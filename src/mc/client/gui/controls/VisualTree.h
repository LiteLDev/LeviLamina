#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VisualTree {
public:
    // prevent constructor by default
    VisualTree& operator=(VisualTree const&);
    VisualTree(VisualTree const&);
    VisualTree();
};
