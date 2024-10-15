#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffects {
public:
    // prevent constructor by default
    ScriptEffects& operator=(ScriptEffects const&);
    ScriptEffects(ScriptEffects const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptEffects();

    MCAPI void _generateAllEffectsHandles(class Scripting::WeakLifetimeScope& scope);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>>
          get(class Scripting::WeakLifetimeScope& scope, std::string const& effectName);

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static void bindV010(class Scripting::ModuleBindingBuilder& moduleBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
