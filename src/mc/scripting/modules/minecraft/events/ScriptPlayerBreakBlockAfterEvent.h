#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka28136;
    ::ll::UntypedStorage<8, 32> mUnk4947a8;
    ::ll::UntypedStorage<8, 40> mUnka29e34;
    ::ll::UntypedStorage<8, 40> mUnk4f7293;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEvent& operator=(ScriptPlayerBreakBlockAfterEvent const&);
    ScriptPlayerBreakBlockAfterEvent(ScriptPlayerBreakBlockAfterEvent const&);
    ScriptPlayerBreakBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
