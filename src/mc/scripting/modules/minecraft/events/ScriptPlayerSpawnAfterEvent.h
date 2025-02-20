#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerSpawnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk585cf2;
    ::ll::UntypedStorage<1, 1>  mUnk5293b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSpawnAfterEvent& operator=(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
