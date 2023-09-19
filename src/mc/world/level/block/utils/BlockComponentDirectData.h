#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentDirectData {
public:
    // prevent constructor by default
    BlockComponentDirectData& operator=(BlockComponentDirectData const&);
    BlockComponentDirectData(BlockComponentDirectData const&);
    BlockComponentDirectData();

public:
    // NOLINTBEGIN
    // symbol: ?finalize@BlockComponentDirectData@@QEAAXAEBVBlock@@@Z
    MCAPI void finalize(class Block const&);

    // NOLINTEND
};
