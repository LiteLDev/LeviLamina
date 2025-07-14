#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct SignalNameSubscriberCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf469ef;
    ::ll::UntypedStorage<8, 8>  mUnk79fb51;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalNameSubscriberCount(::ScriptModuleMinecraft::SignalNameSubscriberCount&&);

    MCNAPI ~SignalNameSubscriberCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::SignalNameSubscriberCount&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
