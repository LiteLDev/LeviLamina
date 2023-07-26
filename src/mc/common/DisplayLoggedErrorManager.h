#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DisplayLoggedErrorManager {

public:
    // prevent constructor by default
    DisplayLoggedErrorManager& operator=(DisplayLoggedErrorManager const&) = delete;
    DisplayLoggedErrorManager(DisplayLoggedErrorManager const&)            = delete;
    DisplayLoggedErrorManager()                                            = delete;
};
