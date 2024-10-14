#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListTagIntAdder {
public:
    // prevent constructor by default
    ListTagIntAdder& operator=(ListTagIntAdder const&);
    ListTagIntAdder(ListTagIntAdder const&);
    ListTagIntAdder();

public:
    // NOLINTBEGIN
    MCAPI class ListTagIntAdder& operator()(int i);

    MCAPI ~ListTagIntAdder();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
