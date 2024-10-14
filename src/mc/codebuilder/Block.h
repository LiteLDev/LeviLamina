#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Block {
public:
    // prevent constructor by default
    Block& operator=(Block const&);
    Block(Block const&);
    Block();

public:
    // NOLINTBEGIN
    MCAPI ~Block();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
