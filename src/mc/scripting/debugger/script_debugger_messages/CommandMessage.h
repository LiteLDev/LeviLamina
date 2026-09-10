#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct CommandMessage : public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::CommandMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9248ec;
    ::ll::UntypedStorage<8, 32> mUnkf6e024;
    ::ll::UntypedStorage<8, 32> mUnk9f7021;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandMessage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandMessage(::ScriptDebuggerMessages::CommandMessage const&);

    MCNAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage&&);

    MCNAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage const&);
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
    MCNAPI void* $ctor(::ScriptDebuggerMessages::CommandMessage const&);
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
