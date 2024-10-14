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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
