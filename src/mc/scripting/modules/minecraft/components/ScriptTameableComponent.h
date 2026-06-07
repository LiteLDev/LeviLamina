#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class TameableComponent;
class TameableDefinition;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTameableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::TameableComponent, ::TameableDefinition> {
public:
    // prevent constructor by default
    ScriptTameableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTameableComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    );

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getTameItems() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getTameItems_010() const;

    MCAPI ::Scripting::Result_deprecated<bool> isTamed() const;

    MCAPI ::Scripting::Result_deprecated<bool> tame(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer) const;

    MCAPI ::Scripting::Result_deprecated<bool> tame_010() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    tamedToPlayer() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> tamedToPlayerId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::WeakEntityRef const& entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
