#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelectionBoxProcessor {

public:
    // prevent constructor by default
    BlockSelectionBoxProcessor& operator=(BlockSelectionBoxProcessor const&) = delete;
    BlockSelectionBoxProcessor(BlockSelectionBoxProcessor const&)            = delete;
    BlockSelectionBoxProcessor()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryBake\@BlockSelectionBoxProcessor\@\@SAXAEBVMatrix\@\@PEAUBlockSelectionBoxComponent\@\@\@Z
     */
    MCAPI static void _tryBake(class Matrix const&, struct BlockSelectionBoxComponent*);
    // NOLINTEND
};
