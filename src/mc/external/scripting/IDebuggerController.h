#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_IDEBUGGERCONTROLLER
public:
    IDebuggerController& operator=(IDebuggerController const&) = delete;
    IDebuggerController(IDebuggerController const&)            = delete;
    IDebuggerController()                                      = delete;
#endif

public:
};

}; // namespace Scripting
