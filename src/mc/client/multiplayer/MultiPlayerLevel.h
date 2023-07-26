#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiPlayerLevel {

public:
    // prevent constructor by default
    MultiPlayerLevel& operator=(MultiPlayerLevel const&) = delete;
    MultiPlayerLevel(MultiPlayerLevel const&)            = delete;
    MultiPlayerLevel()                                   = delete;
};
