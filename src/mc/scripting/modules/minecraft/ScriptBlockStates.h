#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockStateType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStates {
public:
    // prevent constructor by default
    ScriptBlockStates& operator=(ScriptBlockStates const&);
    ScriptBlockStates(ScriptBlockStates const&);
    ScriptBlockStates();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockStates> bind();

    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockStateType>>
    get(class Scripting::WeakLifetimeScope const& scope, std::string const& name);

    MCAPI static std::vector<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockStateType>>
    getAll(class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
