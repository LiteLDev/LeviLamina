#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbe7620;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptButtonPushAfterEvent& operator=(ScriptButtonPushAfterEvent const&);
    ScriptButtonPushAfterEvent(ScriptButtonPushAfterEvent const&);
    ScriptButtonPushAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
