#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorCreateEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8ed79a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorCreateEvent& operator=(ScriptActorCreateEvent const&);
    ScriptActorCreateEvent(ScriptActorCreateEvent const&);
    ScriptActorCreateEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorCreateEvent> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
