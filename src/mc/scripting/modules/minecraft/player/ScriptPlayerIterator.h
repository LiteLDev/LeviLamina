#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator {
public:
    // prevent constructor by default
    ScriptPlayerIterator& operator=(ScriptPlayerIterator const&);
    ScriptPlayerIterator(ScriptPlayerIterator const&);
    ScriptPlayerIterator();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerIterator(
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>&& scriptPlayers
    );

    MCAPI class ScriptModuleMinecraft::ScriptPlayerIterator&
    operator=(class ScriptModuleMinecraft::ScriptPlayerIterator&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerIterator> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>&& scriptPlayers
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
