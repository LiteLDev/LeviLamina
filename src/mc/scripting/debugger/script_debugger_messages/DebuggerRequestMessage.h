#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct DebuggerRequestMessage
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::DebuggerRequestMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaffbb3;
    ::ll::UntypedStorage<4, 4>  mUnkcf195f;
    ::ll::UntypedStorage<8, 32> mUnkabfe5a;
    ::ll::UntypedStorage<8, 80> mUnkaccc32;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerRequestMessage& operator=(DebuggerRequestMessage const&);
    DebuggerRequestMessage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebuggerRequestMessage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerRequestMessage(::ScriptDebuggerMessages::DebuggerRequestMessage const&);

    MCNAPI ::ScriptDebuggerMessages::DebuggerRequestMessage&
    operator=(::ScriptDebuggerMessages::DebuggerRequestMessage&&);
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
    MCNAPI void* $ctor(::ScriptDebuggerMessages::DebuggerRequestMessage const&);
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
