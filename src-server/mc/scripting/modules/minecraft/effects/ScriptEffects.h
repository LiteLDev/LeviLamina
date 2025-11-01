#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffects {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8a793a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEffects& operator=(ScriptEffects const&);
    ScriptEffects(ScriptEffects const&);
    ScriptEffects();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateAllEffectsHandles(::Scripting::WeakLifetimeScope& scope);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> get(::Scripting::WeakLifetimeScope& scope, ::std::string const& effectName);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> getAllEffectTypes(::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static void bindV010(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

};

}
