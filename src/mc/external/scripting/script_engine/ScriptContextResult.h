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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
