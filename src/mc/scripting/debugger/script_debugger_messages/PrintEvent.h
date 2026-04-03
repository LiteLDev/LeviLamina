#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct PrintEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6fb0e;
    ::ll::UntypedStorage<4, 4>  mUnk746bb5;
    ::ll::UntypedStorage<8, 32> mUnk113cd1;
    // NOLINTEND

public:
    // prevent constructor by default
    PrintEvent(PrintEvent const&);
    PrintEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent&&);

    MCNAPI ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent const&);

    MCNAPI bool operator==(::ScriptDebuggerMessages::PrintEvent const&) const;

    MCNAPI ~PrintEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
