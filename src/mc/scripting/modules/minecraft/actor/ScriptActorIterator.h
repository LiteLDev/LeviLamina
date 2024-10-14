#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator {
public:
    // prevent constructor by default
    ScriptActorIterator& operator=(ScriptActorIterator const&);
    ScriptActorIterator(ScriptActorIterator const&);
    ScriptActorIterator();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptActorIterator(
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>&& scriptActors
    );

    MCAPI class ScriptModuleMinecraft::ScriptActorIterator&
    operator=(class ScriptModuleMinecraft::ScriptActorIterator&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorIterator> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
