#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OptionSaveDeferral {
public:
    // prevent constructor by default
    OptionSaveDeferral& operator=(OptionSaveDeferral const&);
    OptionSaveDeferral(OptionSaveDeferral const&);
    OptionSaveDeferral();
};
