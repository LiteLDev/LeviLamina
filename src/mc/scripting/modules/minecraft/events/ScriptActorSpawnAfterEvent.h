#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6038c5;
    ::ll::UntypedStorage<1, 1>  mUnk77abaa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorSpawnAfterEvent& operator=(ScriptActorSpawnAfterEvent const&);
    ScriptActorSpawnAfterEvent(ScriptActorSpawnAfterEvent const&);
    ScriptActorSpawnAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
