#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NullLogger {
public:
    // prevent constructor by default
    NullLogger& operator=(NullLogger const&);
    NullLogger(NullLogger const&);
    NullLogger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullLogger() = default;

    // vIndex: 1
    virtual void Logv(char const*, char*);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void Logv$(char const*, char*);

    MCAPI static class NullLogger& instance();

    // NOLINTEND
};
