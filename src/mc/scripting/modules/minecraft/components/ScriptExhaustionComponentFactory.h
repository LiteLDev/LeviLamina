#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/GenericScriptActorComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptExhaustionComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptExhaustionComponentFactory : public ::ScriptModuleMinecraft::GenericScriptActorComponentFactory<
                                             ::ScriptModuleMinecraft::ScriptExhaustionComponent> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptExhaustionComponentFactory() /*override*/ = default;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, ::std::string const&) /*override*/;

    virtual bool hasComponent(::WeakEntityRef) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
