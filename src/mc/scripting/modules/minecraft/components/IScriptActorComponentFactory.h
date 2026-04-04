#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptActorComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptActorComponentFactory() = default;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(::WeakEntityRef entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id) = 0;

    virtual bool hasComponent(::WeakEntityRef entity) const = 0;

    virtual ::std::vector<::Scripting::ClassBinding> bind() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
