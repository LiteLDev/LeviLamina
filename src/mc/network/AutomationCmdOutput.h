#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AutomationCmdOutput {

public:
    // prevent constructor by default
    AutomationCmdOutput& operator=(AutomationCmdOutput const&) = delete;
    AutomationCmdOutput(AutomationCmdOutput const&)            = delete;
    AutomationCmdOutput()                                      = delete;
};
