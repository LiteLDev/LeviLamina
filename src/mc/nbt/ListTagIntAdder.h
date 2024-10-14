#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/ListTag.h"

class ListTagIntAdder {
public:
    std::unique_ptr<ListTag> mTag;

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
