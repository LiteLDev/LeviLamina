#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ScriptEngine {

public:
    // prevent constructor by default
    ScriptEngine& operator=(ScriptEngine const&) = delete;
    ScriptEngine(ScriptEngine const&)            = delete;
    ScriptEngine()                               = delete;
};

}; // namespace Scripting
