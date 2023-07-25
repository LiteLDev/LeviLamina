#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTENTITYRAYCASTHIT
public:
    ScriptEntityRaycastHit& operator=(ScriptEntityRaycastHit const&) = delete;
    ScriptEntityRaycastHit(ScriptEntityRaycastHit const&)            = delete;
    ScriptEntityRaycastHit()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@MAEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptEntityRaycastHit(class WeakEntityRef const&, float, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??1ScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptEntityRaycastHit();
    /**
     * @symbol
     * ?bind\@ScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptEntityRaycastHit> bind();
};

}; // namespace ScriptModuleMinecraft
