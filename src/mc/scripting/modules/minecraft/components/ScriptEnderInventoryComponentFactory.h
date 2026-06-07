#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/GenericScriptActorComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptEnderInventoryComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEnderInventoryComponentFactory : public ::ScriptModuleMinecraft::GenericScriptActorComponentFactory<
                                                 ::ScriptModuleMinecraft::ScriptEnderInventoryComponent> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptEnderInventoryComponentFactory() /*override*/ = default;

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

    MCFOLD bool $hasComponent(::WeakEntityRef entity) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
