#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemRenderer {
public:
    // prevent constructor by default
    ItemRenderer& operator=(ItemRenderer const&);
    ItemRenderer(ItemRenderer const&);
    ItemRenderer();
};
