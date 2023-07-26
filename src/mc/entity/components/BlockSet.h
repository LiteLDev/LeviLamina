#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSet {

public:
    // prevent constructor by default
    BlockSet& operator=(BlockSet const&) = delete;
    BlockSet(BlockSet const&)            = delete;
    BlockSet()                           = delete;

public:
    /**
     * @symbol ??1BlockSet\@\@QEAA\@XZ
     */
    MCAPI ~BlockSet(); // NOLINT
};
