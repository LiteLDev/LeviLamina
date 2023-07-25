#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPISTONACTIONAFTEREVENT
public:
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&) = delete;
    ScriptPistonActionAfterEvent()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUPistonActionEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptPistonActionAfterEvent(struct PistonActionEvent const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??4ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent const&);
    /**
     * @symbol ??4ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&&);
    /**
     * @symbol ??1ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPistonActionAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPistonActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
