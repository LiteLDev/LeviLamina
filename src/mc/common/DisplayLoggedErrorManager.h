#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DisplayLoggedErrorManager {
public:
    // prevent constructor by default
    DisplayLoggedErrorManager& operator=(DisplayLoggedErrorManager const&);
    DisplayLoggedErrorManager(DisplayLoggedErrorManager const&);
    DisplayLoggedErrorManager();
};
