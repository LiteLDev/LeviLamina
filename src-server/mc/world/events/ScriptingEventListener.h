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
    // vIndex: 0
    virtual ~ScriptingEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(::ScriptingNotificationEvent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onEvent(::ScriptingNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
