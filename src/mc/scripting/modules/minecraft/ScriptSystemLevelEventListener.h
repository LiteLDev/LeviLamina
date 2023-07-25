#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptSystemLevelEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSYSTEMLEVELEVENTLISTENER
public:
    ScriptSystemLevelEventListener& operator=(ScriptSystemLevelEventListener const&) = delete;
    ScriptSystemLevelEventListener(ScriptSystemLevelEventListener const&)            = delete;
    ScriptSystemLevelEventListener()                                                 = delete;
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
     * @symbol ?onRunSystemTick\@ScriptSystemLevelEventListener\@ScriptModuleMinecraft\@\@UEAA_NXZ
     */
    virtual bool onRunSystemTick();
};

}; // namespace ScriptModuleMinecraft
