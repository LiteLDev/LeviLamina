#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UIControl {
public:
    // prevent constructor by default
    UIControl& operator=(UIControl const&);
    UIControl(UIControl const&);
    UIControl();
};
