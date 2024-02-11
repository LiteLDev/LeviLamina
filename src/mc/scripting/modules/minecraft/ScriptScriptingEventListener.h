#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
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

    // symbol:
    // ??0ScriptScriptingEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptScriptingEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
