#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct NotificationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke7838c;
    ::ll::UntypedStorage<4, 4>  mUnk4af042;
    ::ll::UntypedStorage<8, 32> mUnk9b4639;
    // NOLINTEND

public:
    // prevent constructor by default
    NotificationEvent(NotificationEvent const&);
    NotificationEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::NotificationEvent& operator=(::ScriptDebuggerMessages::NotificationEvent const&);

    MCNAPI ::ScriptDebuggerMessages::NotificationEvent& operator=(::ScriptDebuggerMessages::NotificationEvent&&);

    MCNAPI bool operator==(::ScriptDebuggerMessages::NotificationEvent const&) const;

    MCNAPI ~NotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
