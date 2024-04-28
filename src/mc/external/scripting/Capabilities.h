#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Capabilities {
public:
    // prevent constructor by default
    Capabilities& operator=(Capabilities const&);
    Capabilities(Capabilities const&);
    Capabilities();
};

}; // namespace Scripting
