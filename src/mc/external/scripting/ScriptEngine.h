#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ScriptEngine {
public:
    // prevent constructor by default
    ScriptEngine& operator=(ScriptEngine const&);
    ScriptEngine(ScriptEngine const&);
    ScriptEngine();
};

}; // namespace Scripting
