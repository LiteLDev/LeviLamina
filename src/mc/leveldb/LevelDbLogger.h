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
    // vIndex: 0, symbol: __gen_??1LevelDbLogger@@UEAA@XZ
    virtual ~LevelDbLogger() = default;

    // vIndex: 1, symbol: ?Logv@LevelDbLogger@@EEAAXPEBDPEAD@Z
    virtual void Logv(char const*, char*);

    // NOLINTEND
};
