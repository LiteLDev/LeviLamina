#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptChatSendAfterEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptChatSendBeforeEvent : public ::ScriptModuleMinecraft::ScriptChatSendAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk920bb0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendBeforeEvent& operator=(ScriptChatSendBeforeEvent const&);
    ScriptChatSendBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptChatSendBeforeEvent(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptChatSendBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendBeforeEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
