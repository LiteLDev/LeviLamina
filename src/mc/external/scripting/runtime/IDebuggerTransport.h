#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerTransport {
public:
    // prevent constructor by default
    IDebuggerTransport& operator=(IDebuggerTransport const&);
    IDebuggerTransport(IDebuggerTransport const&);
    IDebuggerTransport();
};

}; // namespace Scripting
