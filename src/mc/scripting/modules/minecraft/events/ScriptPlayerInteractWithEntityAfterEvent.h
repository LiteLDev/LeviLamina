#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc41c67;
    ::ll::UntypedStorage<8, 40> mUnk73e1d3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityAfterEvent& operator=(ScriptPlayerInteractWithEntityAfterEvent const&);
    ScriptPlayerInteractWithEntityAfterEvent(ScriptPlayerInteractWithEntityAfterEvent const&);
    ScriptPlayerInteractWithEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
