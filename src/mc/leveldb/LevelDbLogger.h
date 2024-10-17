#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbLogger {
public:
    // prevent constructor by default
    LevelDbLogger& operator=(LevelDbLogger const&);
    LevelDbLogger(LevelDbLogger const&);
    LevelDbLogger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelDbLogger() = default;

    // vIndex: 1
    virtual void Logv(char const*, char*);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void Logv$(char const*, char*);

    // NOLINTEND
};
