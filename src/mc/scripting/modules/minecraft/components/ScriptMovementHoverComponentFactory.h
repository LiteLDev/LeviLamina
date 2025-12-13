#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/IComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementHoverComponentFactory : public ::ScriptModuleMinecraft::IComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMovementHoverComponentFactory() /*override*/ = default;

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
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>
    $createComponent(::WeakEntityRef entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);

    MCNAPI bool $hasComponent(::WeakEntityRef entity) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
