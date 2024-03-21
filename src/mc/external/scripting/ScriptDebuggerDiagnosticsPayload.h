#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDebuggerDiagnosticsPayload {
public:
    // prevent constructor by default
    ScriptDebuggerDiagnosticsPayload& operator=(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload();

public:
    // NOLINTBEGIN
    // symbol:
    // ?serialize@ScriptDebuggerDiagnosticsPayload@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI std::string serialize(struct cereal::ReflectionCtx const&) const;

    // symbol: ??1ScriptDebuggerDiagnosticsPayload@@QEAA@XZ
    MCAPI ~ScriptDebuggerDiagnosticsPayload();

    // symbol: ?bindType@ScriptDebuggerDiagnosticsPayload@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
