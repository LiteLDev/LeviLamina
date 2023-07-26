#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {

public:
    // prevent constructor by default
    IDebuggerController& operator=(IDebuggerController const&) = delete;
    IDebuggerController(IDebuggerController const&)            = delete;
    IDebuggerController()                                      = delete;
};

}; // namespace Scripting
