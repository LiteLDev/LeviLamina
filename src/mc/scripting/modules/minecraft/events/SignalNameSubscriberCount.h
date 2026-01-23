#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct SignalNameSubscriberCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 8, uint64>         count;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignalNameSubscriberCount(::ScriptModuleMinecraft::SignalNameSubscriberCount&&);

    MCAPI ~SignalNameSubscriberCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::SignalNameSubscriberCount&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
