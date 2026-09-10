#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct ProtocolEvent : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ProtocolEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk554323;
    ::ll::UntypedStorage<8, 24> mUnk9ba916;
    ::ll::UntypedStorage<1, 1>  mUnk32b407;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolEvent& operator=(ProtocolEvent const&);
    ProtocolEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProtocolEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProtocolEvent(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCNAPI ProtocolEvent(::std::vector<::Scripting::ModuleDescriptor>&& pluginDescriptors, bool requirePasscode);

    MCNAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCNAPI void* $ctor(::std::vector<::Scripting::ModuleDescriptor>&& pluginDescriptors, bool requirePasscode);
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
