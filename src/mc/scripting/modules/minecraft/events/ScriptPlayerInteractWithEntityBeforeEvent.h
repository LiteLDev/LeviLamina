#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc52d6b;
    ::ll::UntypedStorage<1, 1>  mUnkb6ad5b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent& operator=(ScriptPlayerInteractWithEntityBeforeEvent const&);
    ScriptPlayerInteractWithEntityBeforeEvent(ScriptPlayerInteractWithEntityBeforeEvent const&);
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
