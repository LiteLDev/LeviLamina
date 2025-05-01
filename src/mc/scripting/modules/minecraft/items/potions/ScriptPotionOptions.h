#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPotionLiquidType; }
namespace ScriptModuleMinecraft { class ScriptPotionModifierType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPotionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk797e47;
    ::ll::UntypedStorage<8, 48> mUnkd3c0ec;
    ::ll::UntypedStorage<8, 48> mUnk1ae9cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionOptions& operator=(ScriptPotionOptions const&);
    ScriptPotionOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPotionOptions(::ScriptModuleMinecraft::ScriptPotionOptions const&);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    getLiquid(::Scripting::WeakLifetimeScope& scope) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    getModifier(::Scripting::WeakLifetimeScope& scope) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptPotionOptions> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotionOptions const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
