#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSET
public:
    BlockSet& operator=(BlockSet const&) = delete;
    BlockSet(BlockSet const&)            = delete;
    BlockSet()                           = delete;
#endif

public:
    /**
     * @symbol ??1BlockSet\@\@QEAA\@XZ
     */
    MCAPI ~BlockSet();
};
