#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke04ec3;
    ::ll::UntypedStorage<8, 40> mUnk979963;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockAfterEvent& operator=(ScriptPlayerInteractWithBlockAfterEvent const&);
    ScriptPlayerInteractWithBlockAfterEvent(ScriptPlayerInteractWithBlockAfterEvent const&);
    ScriptPlayerInteractWithBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
