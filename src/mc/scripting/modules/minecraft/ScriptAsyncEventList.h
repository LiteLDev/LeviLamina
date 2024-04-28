#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAsyncSignalHandle; }
// clang-format on

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

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?getAllSignalsByEventType@ScriptAsyncEventList@ScriptModuleMinecraft@@AEBA?AV?$vector@PEBUScriptAsyncSignalHandle@ScriptModuleMinecraft@@V?$allocator@PEBUScriptAsyncSignalHandle@ScriptModuleMinecraft@@@std@@@std@@_K@Z
    MCAPI std::vector<struct ScriptModuleMinecraft::ScriptAsyncSignalHandle const*> getAllSignalsByEventType(uint64
    ) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
