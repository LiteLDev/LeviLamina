#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptAsyncEventList {
public:
    // prevent constructor by default
    ScriptAsyncEventList& operator=(ScriptAsyncEventList const&);
    ScriptAsyncEventList(ScriptAsyncEventList const&);
    ScriptAsyncEventList();

public:
    // NOLINTBEGIN
    // symbol: ?deferredFlush@ScriptAsyncEventList@ScriptModuleMinecraft@@QEAA_NXZ
    MCAPI bool deferredFlush();

    // symbol: ?postFlush@ScriptAsyncEventList@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void postFlush();

    // symbol: ?preFlush@ScriptAsyncEventList@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void preFlush();

    // symbol: ??1ScriptAsyncEventList@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptAsyncEventList();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
