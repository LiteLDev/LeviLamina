#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelectionBoxProcessor {
public:
    // prevent constructor by default
    BlockSelectionBoxProcessor& operator=(BlockSelectionBoxProcessor const&);
    BlockSelectionBoxProcessor(BlockSelectionBoxProcessor const&);
    BlockSelectionBoxProcessor();

public:
    // NOLINTBEGIN
    // symbol: ?_tryBake@BlockSelectionBoxProcessor@@SAXAEBVMatrix@@PEAUBlockSelectionBoxComponent@@@Z
    MCAPI static void _tryBake(class Matrix const&, struct BlockSelectionBoxComponent*);

    // NOLINTEND
};
