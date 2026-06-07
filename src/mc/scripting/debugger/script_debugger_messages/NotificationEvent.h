#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct NotificationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3158cd;
    ::ll::UntypedStorage<4, 4>  mUnk4af042;
    ::ll::UntypedStorage<8, 32> mUnk3062cf;
    // NOLINTEND

public:
    // prevent constructor by default
    NotificationEvent& operator=(NotificationEvent const&);
    NotificationEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NotificationEvent(::ScriptDebuggerMessages::NotificationEvent const&);

    MCNAPI ::ScriptDebuggerMessages::NotificationEvent& operator=(::ScriptDebuggerMessages::NotificationEvent&&);

    MCNAPI ~NotificationEvent();
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
};

} // namespace ScriptDebuggerMessages
