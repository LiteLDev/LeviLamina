#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptSystemLevelEventListener {

public:
    // prevent constructor by default
    ScriptSystemLevelEventListener& operator=(ScriptSystemLevelEventListener const&) = delete;
    ScriptSystemLevelEventListener(ScriptSystemLevelEventListener const&)            = delete;
    ScriptSystemLevelEventListener()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?onRunSystemTick\@ScriptSystemLevelEventListener\@ScriptModuleMinecraft\@\@UEAA_NXZ
     */
    virtual bool onRunSystemTick(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
