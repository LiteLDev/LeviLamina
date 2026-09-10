#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"
#include "mc/scripting/diagnostics/ScriptStatEvent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

class ScriptDebuggerDiagnosticsPayload
: public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload>,
  public ::ScriptStatEvent {
public:
    // prevent constructor by default
    ScriptDebuggerDiagnosticsPayload& operator=(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerDiagnosticsPayload(::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
