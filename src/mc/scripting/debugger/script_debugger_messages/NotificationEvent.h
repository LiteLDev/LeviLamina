#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct NotificationEvent : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::NotificationEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3158cd;
    ::ll::UntypedStorage<4, 4>  mUnk4af042;
    ::ll::UntypedStorage<8, 32> mUnk3062cf;
    // NOLINTEND

public:
    // prevent constructor by default
    NotificationEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NotificationEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NotificationEvent(::ScriptDebuggerMessages::NotificationEvent const&);

    MCNAPI ::ScriptDebuggerMessages::NotificationEvent& operator=(::ScriptDebuggerMessages::NotificationEvent&&);

    MCNAPI ::ScriptDebuggerMessages::NotificationEvent& operator=(::ScriptDebuggerMessages::NotificationEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::NotificationEvent const&);
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
