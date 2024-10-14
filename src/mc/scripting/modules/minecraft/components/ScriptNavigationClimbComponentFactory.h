#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/IComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNavigationClimbComponentFactory : public ::ScriptModuleMinecraft::IComponentFactory {
public:
    // prevent constructor by default
    ScriptNavigationClimbComponentFactory& operator=(ScriptNavigationClimbComponentFactory const&);
    ScriptNavigationClimbComponentFactory(ScriptNavigationClimbComponentFactory const&);
    ScriptNavigationClimbComponentFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptNavigationClimbComponentFactory() = default;

    // vIndex: 1
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(class WeakEntityRef entity, class Scripting::WeakLifetimeScope const& scope, std::string const& id);

    // vIndex: 2
    virtual bool hasComponent(class WeakEntityRef entity) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent> createComponent$(
        class WeakEntityRef                       entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI bool hasComponent$(class WeakEntityRef entity) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
