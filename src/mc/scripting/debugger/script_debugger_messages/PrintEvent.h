#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

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
    PrintEvent& operator=(PrintEvent const&);
    PrintEvent(PrintEvent const&);
    PrintEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrintEvent() /*override*/;
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
