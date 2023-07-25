#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptContextResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_SCRIPTCONTEXTRESULT
public:
    ScriptContextResult& operator=(ScriptContextResult const&) = delete;
    ScriptContextResult(ScriptContextResult const&)            = delete;
    ScriptContextResult()                                      = delete;
#endif

public:
};

}; // namespace Scripting
