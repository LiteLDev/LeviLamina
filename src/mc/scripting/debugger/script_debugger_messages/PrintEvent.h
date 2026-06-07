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
    PrintEvent& operator=(PrintEvent const&);
    PrintEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrintEvent(::ScriptDebuggerMessages::PrintEvent const&);

    MCNAPI ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent&&);

    MCNAPI ~PrintEvent();
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
};

} // namespace ScriptDebuggerMessages
