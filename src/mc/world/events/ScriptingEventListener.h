#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ScriptingNotificationEvent;
// clang-format on

class ScriptingEventListener {
public:
    // ScriptingEventListener inner types define
    using EventType = ::ScriptingNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptingEventListener();

    virtual ::EventResult onEvent(::ScriptingNotificationEvent const& event);
    // NOLINTEND
};
