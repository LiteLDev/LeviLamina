#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSYSTEM
public:
    ScriptSystem& operator=(ScriptSystem const&) = delete;
    ScriptSystem(ScriptSystem const&)            = delete;
    ScriptSystem()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptSystem\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVServerLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI ScriptSystem(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class ServerLevel*>);
    /**
     * @symbol ?clearRun\@ScriptSystem\@ScriptModuleMinecraft\@\@QEAAXI\@Z
     */
    MCAPI void clearRun(unsigned int);
    /**
     * @symbol
     * ?getSystemAfterEvents\@ScriptSystem\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents>
    getSystemAfterEvents();
    /**
     * @symbol
     * ?getSystemBeforeEvents\@ScriptSystem\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    getSystemBeforeEvents();
    /**
     * @symbol
     * ?runInterval\@ScriptSystem\@ScriptModuleMinecraft\@\@QEAAIV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@V?$optional\@I\@std\@\@\@Z
     */
    MCAPI unsigned int runInterval(class Scripting::Closure<void(void)>, class std::optional<unsigned int>);
    /**
     * @symbol ?runSafe\@ScriptSystem\@ScriptModuleMinecraft\@\@QEAAIV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@\@Z
     */
    MCAPI unsigned int runSafe(class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?runTimeout\@ScriptSystem\@ScriptModuleMinecraft\@\@QEAAIV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@V?$optional\@I\@std\@\@\@Z
     */
    MCAPI unsigned int runTimeout(class Scripting::Closure<void(void)>, class std::optional<unsigned int>);
    /**
     * @symbol ??1ScriptSystem\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSystem();
    /**
     * @symbol
     * ?bind\@ScriptSystem\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptSystem\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSystem> bind();
};

}; // namespace ScriptModuleMinecraft
