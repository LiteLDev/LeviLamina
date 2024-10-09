#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptChatSendBeforeEvent {
public:
    // prevent constructor by default
    ScriptChatSendBeforeEvent& operator=(ScriptChatSendBeforeEvent const&);
    ScriptChatSendBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptChatSendBeforeEvent(struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptChatSendBeforeEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
