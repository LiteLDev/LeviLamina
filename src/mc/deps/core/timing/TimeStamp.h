#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeStamp {
public:
    // prevent constructor by default
    TimeStamp& operator=(TimeStamp const&);
    TimeStamp(TimeStamp const&);
    TimeStamp();
};
