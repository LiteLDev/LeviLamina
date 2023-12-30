#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/ListTag.h"

class ListTagFloatAdder {
public:
    std::unique_ptr<ListTag> mTag;

public:
    // NOLINTBEGIN
    // symbol: ??RListTagFloatAdder@@QEAAAEAV0@M@Z
    MCAPI class ListTagFloatAdder& operator()(float f);

    // symbol: ??1ListTagFloatAdder@@QEAA@XZ
    MCAPI ~ListTagFloatAdder();

    // NOLINTEND
};
