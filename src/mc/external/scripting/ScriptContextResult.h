#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptContextResult {
public:
    // prevent constructor by default
    ScriptContextResult& operator=(ScriptContextResult const&);
    ScriptContextResult(ScriptContextResult const&);
    ScriptContextResult();
};

}; // namespace Scripting
