#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"
#include "mc/scripting/diagnostics/DebuggerStatEvent.h"

namespace ScriptDebuggerMessages {

class ScriptDebuggerDiagnosticsPayload
: public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload>,
  public ::DebuggerStatEvent {};

} // namespace ScriptDebuggerMessages
