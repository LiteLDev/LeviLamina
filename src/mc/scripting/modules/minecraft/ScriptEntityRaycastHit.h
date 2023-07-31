#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {

public:
    // prevent constructor by default
    ScriptEntityRaycastHit& operator=(ScriptEntityRaycastHit const&) = delete;
    ScriptEntityRaycastHit(ScriptEntityRaycastHit const&)            = delete;
    ScriptEntityRaycastHit()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@MAEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptEntityRaycastHit(class WeakEntityRef const&, float, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?bind\@ScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptEntityRaycastHit> bind();
    /**
     * @symbol ??1ScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptEntityRaycastHit();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
