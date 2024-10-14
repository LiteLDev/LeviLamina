#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListTagFloatAdder {
public:
    // prevent constructor by default
    ListTagFloatAdder& operator=(ListTagFloatAdder const&);
    ListTagFloatAdder(ListTagFloatAdder const&);
    ListTagFloatAdder();

public:
    // NOLINTBEGIN
    MCAPI class ListTagFloatAdder& operator()(float f);

    MCAPI ~ListTagFloatAdder();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
