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
    // vIndex: 0, symbol: __gen_??1NullLogger@@UEAA@XZ
    virtual ~NullLogger() = default;

    // vIndex: 1, symbol: ?Logv@NullLogger@@UEAAXPEBDPEAD@Z
    virtual void Logv(char const*, char*);

    // symbol: ?instance@NullLogger@@2V1@A
    MCAPI static class NullLogger instance;

    // NOLINTEND
};
