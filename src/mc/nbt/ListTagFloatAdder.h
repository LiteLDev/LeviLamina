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
    // symbol: ??RListTagFloatAdder@@QEAAAEAV0@M@Z
    MCAPI class ListTagFloatAdder& operator()(float f);

    // symbol: ??1ListTagFloatAdder@@QEAA@XZ
    MCAPI ~ListTagFloatAdder();

    // NOLINTEND
};
