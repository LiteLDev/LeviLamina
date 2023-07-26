#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternEvent {

public:
    // prevent constructor by default
    BlockPatternEvent& operator=(BlockPatternEvent const&) = delete;
    BlockPatternEvent()                                    = delete;

public:
    /**
     * @symbol ??0BlockPatternEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockPatternEvent(struct BlockPatternEvent const&); // NOLINT
    /**
     * @symbol ??1BlockPatternEvent\@\@QEAA\@XZ
     */
    MCAPI ~BlockPatternEvent(); // NOLINT
};
