#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {
public:
    // prevent constructor by default
    IDebuggerController& operator=(IDebuggerController const&);
    IDebuggerController(IDebuggerController const&);
    IDebuggerController();
};

}; // namespace Scripting
