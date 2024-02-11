#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Generator.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptAsyncJobCoordinator {
public:
    // prevent constructor by default
    ScriptAsyncJobCoordinator(ScriptAsyncJobCoordinator const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptAsyncJobCoordinator@@QEAA@XZ
    MCAPI ScriptAsyncJobCoordinator();

    // symbol: ?addGenerator@ScriptAsyncJobCoordinator@@QEAAI$$QEAV?$Generator@XXX@Scripting@@@Z
    MCAPI uint addGenerator(class Scripting::Generator<void, void, void>&&);

    // symbol: ?clear@ScriptAsyncJobCoordinator@@QEAAXXZ
    MCAPI void clear();

    // symbol: ??4ScriptAsyncJobCoordinator@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ScriptAsyncJobCoordinator& operator=(class ScriptAsyncJobCoordinator const&);

    // symbol:
    // ?process@ScriptAsyncJobCoordinator@@QEAAXV?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@PEAVIScriptGeneratorStats@@@Z
    MCAPI void process(std::chrono::microseconds, class IScriptGeneratorStats*);

    // symbol: ?removeGenerator@ScriptAsyncJobCoordinator@@QEAAXUContextId@Scripting@@I@Z
    MCAPI void removeGenerator(struct Scripting::ContextId, uint);

    // symbol: ??1ScriptAsyncJobCoordinator@@QEAA@XZ
    MCAPI ~ScriptAsyncJobCoordinator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addPendingGenerators@ScriptAsyncJobCoordinator@@AEAAXPEAVIScriptGeneratorStats@@@Z
    MCAPI void _addPendingGenerators(class IScriptGeneratorStats*);

    // symbol: ?_removeExpiredGenerators@ScriptAsyncJobCoordinator@@AEAAXPEAVIScriptGeneratorStats@@@Z
    MCAPI void _removeExpiredGenerators(class IScriptGeneratorStats*);

    // NOLINTEND
};
