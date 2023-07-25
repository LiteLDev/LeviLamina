#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ScriptEngine {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_SCRIPTENGINE
public:
    ScriptEngine& operator=(ScriptEngine const&) = delete;
    ScriptEngine(ScriptEngine const&)            = delete;
    ScriptEngine()                               = delete;
#endif

public:
};

}; // namespace Scripting
