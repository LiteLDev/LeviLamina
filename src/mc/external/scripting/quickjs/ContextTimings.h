#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class ContextTimings {
public:
    // prevent constructor by default
    ContextTimings& operator=(ContextTimings const&);
    ContextTimings(ContextTimings const&);
    ContextTimings();
};

}; // namespace Scripting::QuickJS
