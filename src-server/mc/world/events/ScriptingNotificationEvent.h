#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
struct ScriptCommandMessageEvent;
struct ScriptModuleShutdownEvent;
struct ScriptModuleStartupEvent;
// clang-format on

struct ScriptingNotificationEvent : public ::EventVariantImpl<
                                        ::BeforeWatchdogTerminateEvent const,
                                        ::ScriptCommandMessageEvent const,
                                        ::ScriptModuleStartupEvent const,
                                        ::ScriptModuleShutdownEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptingNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
