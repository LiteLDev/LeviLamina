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
    // vIndex: 0
    virtual ~ScriptScriptingEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(struct ScriptCommandMessageEvent const& scriptCommandMessageEvent);

    // vIndex: 2
    virtual ::EventResult onEvent(struct ScriptingNotificationEvent const& event);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
