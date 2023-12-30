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
    // symbol: ??RListTagIntAdder@@QEAAAEAV0@H@Z
    MCAPI class ListTagIntAdder& operator()(int i);

    // symbol: ??1ListTagIntAdder@@QEAA@XZ
    MCAPI ~ListTagIntAdder();

    // NOLINTEND
};
