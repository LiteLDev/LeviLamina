#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalPlayer {

public:
    // prevent constructor by default
    LocalPlayer& operator=(LocalPlayer const&) = delete;
    LocalPlayer(LocalPlayer const&)            = delete;
    LocalPlayer()                              = delete;
};
