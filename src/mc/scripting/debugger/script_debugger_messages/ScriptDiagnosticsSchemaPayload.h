#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

namespace ScriptDebuggerMessages {

class ScriptDiagnosticsSchemaPayload
: public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2dac32;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsSchemaPayload& operator=(ScriptDiagnosticsSchemaPayload const&);
    ScriptDiagnosticsSchemaPayload(ScriptDiagnosticsSchemaPayload const&);
    ScriptDiagnosticsSchemaPayload();
};

} // namespace ScriptDebuggerMessages
