#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptContextResult {
public:
    // prevent constructor by default
    ScriptContextResult& operator=(ScriptContextResult const&);
    ScriptContextResult(ScriptContextResult const&);
    ScriptContextResult();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptContextResult();

    // NOLINTEND
};

}; // namespace Scripting
