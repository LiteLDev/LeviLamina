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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~NullLogger();

    // vIndex: 1, symbol: ?Logv@NullLogger@@UEAAXPEBDPEAD@Z
    virtual void Logv(char const*, char*);

    // symbol: ?instance@NullLogger@@2V1@A
    MCAPI static class NullLogger instance;

    // NOLINTEND
};
