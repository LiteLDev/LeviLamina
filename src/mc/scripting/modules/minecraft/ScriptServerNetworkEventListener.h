#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct ChatEvent;
struct MessageEvent;
struct ServerNetworkGameplayNotificationEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerNetworkEventListener {
public:
    // prevent constructor by default
    ScriptServerNetworkEventListener& operator=(ScriptServerNetworkEventListener const&);
    ScriptServerNetworkEventListener(ScriptServerNetworkEventListener const&);
    ScriptServerNetworkEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptServerNetworkEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptServerNetworkEventListener() = default;

    // vIndex: 1, symbol:
    // ?onEvent@?$EventListenerDispatcher@VServerNetworkEventListener@@@@MEAA?AW4EventResult@@AEBUServerNetworkGameplayNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const& event);

    // vIndex: 2, symbol:
    // ?onMessage@ScriptServerNetworkEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUMessageEvent@@@Z
    virtual ::EventResult onMessage(struct MessageEvent const&);

    // vIndex: 3, symbol:
    // ?onEvent@ScriptServerNetworkEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUChatEvent@@@Z
    virtual ::EventResult onEvent(struct ChatEvent const&);

    // symbol:
    // ??0ScriptServerNetworkEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptServerNetworkEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
