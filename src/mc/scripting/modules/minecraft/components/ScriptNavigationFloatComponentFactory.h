#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/IComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNavigationFloatComponentFactory : public ::ScriptModuleMinecraft::IComponentFactory {
public:
    // prevent constructor by default
    ScriptNavigationFloatComponentFactory& operator=(ScriptNavigationFloatComponentFactory const&);
    ScriptNavigationFloatComponentFactory(ScriptNavigationFloatComponentFactory const&);
    ScriptNavigationFloatComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptNavigationFloatComponentFactory() /*override*/;

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent> createComponent(
        ::WeakEntityRef                       entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    ) /*override*/;

    // vIndex: 2
    virtual bool hasComponent(::WeakEntityRef entity) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
