/**
 * @file  BlockSelectionBoxProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSelectionBoxProcessor.
 *
 */
class BlockSelectionBoxProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTIONBOXPROCESSOR
public:
    class BlockSelectionBoxProcessor& operator=(class BlockSelectionBoxProcessor const &) = delete;
    BlockSelectionBoxProcessor(class BlockSelectionBoxProcessor const &) = delete;
    BlockSelectionBoxProcessor() = delete;
#endif

public:
    /**
     * @symbol ?_tryBake\@BlockSelectionBoxProcessor\@\@SAXAEBVMatrix\@\@PEAUBlockSelectionBoxComponent\@\@\@Z
     */
    MCAPI static void _tryBake(class Matrix const &, struct BlockSelectionBoxComponent *);

};
