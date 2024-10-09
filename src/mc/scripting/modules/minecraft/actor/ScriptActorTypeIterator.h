#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorTypeIterator {
public:
    // prevent constructor by default
    ScriptActorTypeIterator& operator=(ScriptActorTypeIterator const&);
    ScriptActorTypeIterator(ScriptActorTypeIterator const&);
    ScriptActorTypeIterator();

public:
    // NOLINTBEGIN
    MCAPI class ScriptModuleMinecraft::ScriptActorTypeIterator&
    operator=(class ScriptModuleMinecraft::ScriptActorTypeIterator&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorTypeIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
