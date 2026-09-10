#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct PrintEvent : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::PrintEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6fb0e;
    ::ll::UntypedStorage<4, 4>  mUnk746bb5;
    ::ll::UntypedStorage<8, 32> mUnk113cd1;
    // NOLINTEND

public:
    // prevent constructor by default
    PrintEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrintEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrintEvent(::ScriptDebuggerMessages::PrintEvent const&);

    MCNAPI ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent&&);

    MCNAPI ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::PrintEvent const&);
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
