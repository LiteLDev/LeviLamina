#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/GenericScriptActorComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptTypeFamilyComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTypeFamilyComponentFactory : public ::ScriptModuleMinecraft::GenericScriptActorComponentFactory<
                                             ::ScriptModuleMinecraft::ScriptTypeFamilyComponent> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTypeFamilyComponentFactory() /*override*/ = default;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent> createComponent(
        ::WeakEntityRef                       entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    ) /*override*/;

    virtual bool hasComponent(::WeakEntityRef entity) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>
    $createComponent(::WeakEntityRef entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);

    MCAPI bool $hasComponent(::WeakEntityRef entity) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
