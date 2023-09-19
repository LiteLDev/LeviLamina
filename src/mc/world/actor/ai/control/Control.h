#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Control {
public:
    // prevent constructor by default
    Control& operator=(Control const&);
    Control(Control const&);
    Control();
};
