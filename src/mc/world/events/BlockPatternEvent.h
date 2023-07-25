#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPATTERNEVENT
public:
    BlockPatternEvent& operator=(BlockPatternEvent const&) = delete;
    BlockPatternEvent()                                    = delete;
#endif

public:
    /**
     * @symbol ??0BlockPatternEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockPatternEvent(struct BlockPatternEvent const&);
    /**
     * @symbol ??1BlockPatternEvent\@\@QEAA\@XZ
     */
    MCAPI ~BlockPatternEvent();
};
