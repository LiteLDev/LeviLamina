#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServicesManager {

public:
    // prevent constructor by default
    ServicesManager& operator=(ServicesManager const&) = delete;
    ServicesManager(ServicesManager const&)            = delete;
    ServicesManager()                                  = delete;
};
