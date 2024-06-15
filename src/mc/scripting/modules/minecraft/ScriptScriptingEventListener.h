#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ScriptCommandMessageEvent;
struct ScriptingNotificationEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScriptingEventListener {
public:
    // prevent constructor by default
    ScriptScriptingEventListener& operator=(ScriptScriptingEventListener const&);
    ScriptScriptingEventListener(ScriptScriptingEventListener const&);
    ScriptScriptingEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptScriptingEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptScriptingEventListener() = default;

    // vIndex: 1, symbol:
    // ?onEvent@ScriptScriptingEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUScriptCommandMessageEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptCommandMessageEvent const&);

    // vIndex: 2, symbol:
    // ?onEvent@?$EventListenerDispatcher@VScriptingEventListener@@@@MEAA?AW4EventResult@@AEBUScriptingNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptingNotificationEvent const& event);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
