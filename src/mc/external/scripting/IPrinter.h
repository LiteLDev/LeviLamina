#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IPrinter {
public:
    // prevent constructor by default
    IPrinter& operator=(IPrinter const&);
    IPrinter(IPrinter const&);
    IPrinter();
};

}; // namespace Scripting
