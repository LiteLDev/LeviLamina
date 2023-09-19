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
    // symbol: ??1Block@CodeBuilder@@QEAA@XZ
    MCAPI ~Block();

    // NOLINTEND
};

}; // namespace CodeBuilder
