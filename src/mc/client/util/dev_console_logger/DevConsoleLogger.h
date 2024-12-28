#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DevConsoleLogger {
public:
    // prevent constructor by default
    DevConsoleLogger& operator=(DevConsoleLogger const&);
    DevConsoleLogger(DevConsoleLogger const&);
    DevConsoleLogger();
};
