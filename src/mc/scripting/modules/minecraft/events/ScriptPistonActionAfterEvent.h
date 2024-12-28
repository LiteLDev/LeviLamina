#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf83ed5;
    ::ll::UntypedStorage<1, 1>  mUnk71f088;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent& operator=(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
