#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/ListTag.h"

class ListTagFloatAdder {
public:
    std::unique_ptr<ListTag> mTag;

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
