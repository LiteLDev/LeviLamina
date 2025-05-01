#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd262ca;
    ::ll::UntypedStorage<4, 4> mUnke83056;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePopAfterEvent& operator=(ScriptPressurePlatePopAfterEvent const&);
    ScriptPressurePlatePopAfterEvent(ScriptPressurePlatePopAfterEvent const&);
    ScriptPressurePlatePopAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
