#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
struct ChatEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
    // prevent constructor by default
    ScriptChatSendAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptChatSendAfterEvent(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    // symbol: ??0ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptChatSendAfterEvent(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    // symbol:
    // ??0ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUChatEvent@@AEBVPlayer@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptChatSendAfterEvent(struct ChatEvent const&, class Player const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?copyTo@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEBAXAEAUChatEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI void copyTo(struct ChatEvent&, class Scripting::WeakLifetimeScope const& scope) const;

    // symbol:
    // ?getSendToTargets_V010@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getSendToTargets_V010();

    // symbol:
    // ?getTargets_V010@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@U?$TypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@U?$TypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    // symbol: ??4ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    // symbol: ??4ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    // symbol:
    // ?setSendToTargets_V010@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setSendToTargets_V010(bool);

    // symbol:
    // ?setTargets_V010@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$vector@U?$TypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@U?$TypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@Z
    MCAPI class Scripting::Result<void>
        setTargets_V010(std::vector<struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>);

    // symbol: ??1ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptChatSendAfterEvent();

    // symbol:
    // ?bind@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptChatSendAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent> bind();

    // symbol:
    // ?bindV010@ScriptChatSendAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptChatSendAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
