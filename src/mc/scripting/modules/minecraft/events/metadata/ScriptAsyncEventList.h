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
    MCAPI bool deferredFlush();

    MCAPI void postFlush();

    MCAPI void preFlush();

    MCAPI ~ScriptAsyncEventList();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
