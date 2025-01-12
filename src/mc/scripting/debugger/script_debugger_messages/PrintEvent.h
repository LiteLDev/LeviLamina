#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct PrintEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk91ac67;
    ::ll::UntypedStorage<4, 4>  mUnk746bb5;
    ::ll::UntypedStorage<8, 32> mUnk95c32f;
    // NOLINTEND

public:
    // prevent constructor by default
    PrintEvent(PrintEvent const&);
    PrintEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent const&);

    MCFOLD ::ScriptDebuggerMessages::PrintEvent& operator=(::ScriptDebuggerMessages::PrintEvent&&);

    MCFOLD bool operator==(::ScriptDebuggerMessages::PrintEvent const&) const;

    MCAPI ~PrintEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
