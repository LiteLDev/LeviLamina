#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4a17dd;
    ::ll::UntypedStorage<8, 32> mUnk259794;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeverActionAfterEvent& operator=(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
