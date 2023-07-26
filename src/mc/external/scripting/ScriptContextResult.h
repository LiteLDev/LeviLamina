#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptContextResult {

public:
    // prevent constructor by default
    ScriptContextResult& operator=(ScriptContextResult const&) = delete;
    ScriptContextResult(ScriptContextResult const&)            = delete;
    ScriptContextResult()                                      = delete;
};

}; // namespace Scripting
