#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

class ScriptDiagnosticsSchemaPayload
: public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1f2082;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsSchemaPayload& operator=(ScriptDiagnosticsSchemaPayload const&);
    ScriptDiagnosticsSchemaPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDiagnosticsSchemaPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDiagnosticsSchemaPayload(::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload const&);

    MCNAPI ::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload&
    operator=(::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
