#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelectionBoxProcessor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTIONBOXPROCESSOR
public:
    BlockSelectionBoxProcessor& operator=(BlockSelectionBoxProcessor const&) = delete;
    BlockSelectionBoxProcessor(BlockSelectionBoxProcessor const&)            = delete;
    BlockSelectionBoxProcessor()                                             = delete;
#endif

public:
    /**
     * @symbol ?_tryBake\@BlockSelectionBoxProcessor\@\@SAXAEBVMatrix\@\@PEAUBlockSelectionBoxComponent\@\@\@Z
     */
    MCAPI static void _tryBake(class Matrix const&, struct BlockSelectionBoxComponent*);
};
