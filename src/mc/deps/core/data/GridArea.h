#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class GridArea {
public:
    // prevent constructor by default
    GridArea& operator=(GridArea const&);
    GridArea(GridArea const&);
    GridArea();
};
