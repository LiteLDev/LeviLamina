#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptChatSendBeforeEvent {
public:
    // prevent constructor by default
    ScriptChatSendBeforeEvent& operator=(ScriptChatSendBeforeEvent const&);
    ScriptChatSendBeforeEvent(ScriptChatSendBeforeEvent const&);
    ScriptChatSendBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptChatSendBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptChatSendBeforeEvent(struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent&&);

    // symbol: ??4ScriptChatSendBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent&&);

    // symbol:
    // ?bind@ScriptChatSendBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent> bind();

    // symbol:
    // ?bindV010@ScriptChatSendBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptChatSendBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
