#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerLastPosComponent {

public:
    // prevent constructor by default
    LocalPlayerLastPosComponent& operator=(LocalPlayerLastPosComponent const&) = delete;
    LocalPlayerLastPosComponent(LocalPlayerLastPosComponent const&)            = delete;
    LocalPlayerLastPosComponent()                                              = delete;
};
