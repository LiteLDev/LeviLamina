#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct DiagnosticsSetActiveMessage
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::DiagnosticsSetActiveMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk30fe84;
    ::ll::UntypedStorage<8, 24> mUnk49bf99;
    ::ll::UntypedStorage<1, 1>  mUnk496900;
    // NOLINTEND

public:
    // prevent constructor by default
    DiagnosticsSetActiveMessage& operator=(DiagnosticsSetActiveMessage const&);
    DiagnosticsSetActiveMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiagnosticsSetActiveMessage(::ScriptDebuggerMessages::DiagnosticsSetActiveMessage const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::DiagnosticsSetActiveMessage const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
