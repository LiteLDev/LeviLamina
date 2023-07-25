#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbFileLock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBFILELOCK
public:
    LevelDbFileLock& operator=(LevelDbFileLock const&) = delete;
    LevelDbFileLock(LevelDbFileLock const&)            = delete;
    LevelDbFileLock()                                  = delete;
#endif

public:
};
