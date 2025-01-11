#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4162a1;
    ::ll::UntypedStorage<8, 32> mUnk7283f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEvent& operator=(ScriptBlockExplodedAfterEvent const&);
    ScriptBlockExplodedAfterEvent(ScriptBlockExplodedAfterEvent const&);
    ScriptBlockExplodedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
