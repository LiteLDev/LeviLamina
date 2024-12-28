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
    MCAPI ~SignalNameSubscriberCount();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
