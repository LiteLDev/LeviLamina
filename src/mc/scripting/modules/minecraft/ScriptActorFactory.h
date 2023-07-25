#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORFACTORY
public:
    ScriptActorFactory& operator=(ScriptActorFactory const&) = delete;
    ScriptActorFactory(ScriptActorFactory const&)            = delete;
    ScriptActorFactory()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?createHandle\@ScriptActorFactory\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@PEBVActor\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    createHandle(class Actor const*, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?getHandle\@ScriptActorFactory\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@PEBVActor\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    getHandle(class Actor const*, class Scripting::WeakLifetimeScope const&);
};

}; // namespace ScriptModuleMinecraft
