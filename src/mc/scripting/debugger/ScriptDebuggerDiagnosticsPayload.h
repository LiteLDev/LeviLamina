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
    MCAPI std::string serialize(struct cereal::ReflectionCtx const& ctx) const;

    MCAPI ~ScriptDebuggerDiagnosticsPayload();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
