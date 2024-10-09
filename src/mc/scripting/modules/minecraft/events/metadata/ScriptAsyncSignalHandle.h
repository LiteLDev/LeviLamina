#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptAsyncSignalHandle {
public:
    // prevent constructor by default
    ScriptAsyncSignalHandle& operator=(ScriptAsyncSignalHandle const&);
    ScriptAsyncSignalHandle(ScriptAsyncSignalHandle const&);
    ScriptAsyncSignalHandle();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptAsyncSignalHandle();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
