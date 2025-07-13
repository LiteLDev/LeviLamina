#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _processCreatedHandle(
        ::Actor const&                                                              actor,
        ::Scripting::WeakLifetimeScope const&                                       scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>& handle
    );

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>
    createHandle(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>
    getHandle(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>
    getHandle(::ScriptModuleMinecraft::ScriptActorData const& actorData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
