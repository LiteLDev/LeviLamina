#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDataDrivenTriggerEventSignalOptions {

public:
    // prevent constructor by default
    ScriptActorDataDrivenTriggerEventSignalOptions&
    operator=(ScriptActorDataDrivenTriggerEventSignalOptions const&) = delete;
    ScriptActorDataDrivenTriggerEventSignalOptions()                 = delete;

public:
    /**
     * @symbol ??0ScriptActorDataDrivenTriggerEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI
    ScriptActorDataDrivenTriggerEventSignalOptions(struct ScriptModuleMinecraft::
                                                       ScriptActorDataDrivenTriggerEventSignalOptions const&); // NOLINT
    /**
     * @symbol ??4ScriptActorDataDrivenTriggerEventSignalOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorDataDrivenTriggerEventSignalOptions&&); // NOLINT
    /**
     * @symbol ??1ScriptActorDataDrivenTriggerEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorDataDrivenTriggerEventSignalOptions(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
