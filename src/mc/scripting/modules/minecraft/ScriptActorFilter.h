#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorFilter {
public:
    // NOLINTBEGIN
    MCAPI ScriptActorFilter();

    MCAPI ScriptActorFilter(class ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI ScriptActorFilter(class ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI class ScriptModuleMinecraft::ScriptActorFilter& operator=(class ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI class ScriptModuleMinecraft::ScriptActorFilter&
    operator=(class ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI ~ScriptActorFilter();

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptActorFilter> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
