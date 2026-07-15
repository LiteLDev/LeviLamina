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
    NotificationEvent(NotificationEvent const&);
    NotificationEvent();
};

} // namespace ScriptDebuggerMessages
