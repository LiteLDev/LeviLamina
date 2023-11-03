#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
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
    MCAPI void copyTo(struct ChatEvent&, class Scripting::WeakLifetimeScope const&) const;

    // symbol: ??4ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&&);

    // symbol: ??4ScriptChatSendAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

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
