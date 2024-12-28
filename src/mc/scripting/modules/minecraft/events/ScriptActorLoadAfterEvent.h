#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorLoadAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk701682;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorLoadAfterEvent& operator=(ScriptActorLoadAfterEvent const&);
    ScriptActorLoadAfterEvent(ScriptActorLoadAfterEvent const&);
    ScriptActorLoadAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
