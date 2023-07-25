#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCOREBOARDLISTENER
public:
    ScriptScoreboardListener& operator=(ScriptScoreboardListener const&) = delete;
    ScriptScoreboardListener(ScriptScoreboardListener const&)            = delete;
    ScriptScoreboardListener()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol
     * ?onObjectiveRemoved\@ScriptScoreboardListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual enum class EventResult onObjectiveRemoved(std::string const&);
    /**
     * @vftbl 3
     * @symbol
     * ?onScoreboardIdentityRemoved\@ScriptScoreboardListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@\@Z
     */
    virtual enum class EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&);
    /**
     * @symbol
     * ??0ScriptScoreboardListener\@ScriptModuleMinecraft\@\@QEAA\@V?$WeakTypedObjectHandle\@VScriptScoreboard\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI
        ScriptScoreboardListener(class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard>);
};

}; // namespace ScriptModuleMinecraft
