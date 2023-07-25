#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class GridArea {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRIDAREA
public:
    GridArea& operator=(GridArea const&) = delete;
    GridArea(GridArea const&)            = delete;
    GridArea()                           = delete;
#endif

public:
};
