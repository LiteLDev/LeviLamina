#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/BeforeWatchdogTerminateEvent.h"
#include "mc/world/events/ScriptCommandMessageEvent.h"
#include "mc/world/events/ScriptModuleShutdownEvent.h"
#include "mc/world/events/ScriptModuleStartupEvent.h"

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
    MCNAPI ~ScriptingNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
