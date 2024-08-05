#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFactory {
public:
    // prevent constructor by default
    ScriptActorFactory& operator=(ScriptActorFactory const&);
    ScriptActorFactory(ScriptActorFactory const&);
    ScriptActorFactory();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    createHandle(class Actor const& actor, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    getHandle(class Actor const& actor, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _processCreatedHandle(class Actor const&, class Scripting::WeakLifetimeScope const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
