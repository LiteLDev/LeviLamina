#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbFileLock {

public:
    // prevent constructor by default
    LevelDbFileLock& operator=(LevelDbFileLock const&) = delete;
    LevelDbFileLock(LevelDbFileLock const&)            = delete;
    LevelDbFileLock()                                  = delete;
};
