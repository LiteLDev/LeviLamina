#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptActorEventSignalOptions {

public:
    // prevent constructor by default
    ScriptActorEventSignalOptions() = delete;

public:
    /**
     * @symbol ??0ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptActorEventSignalOptions(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&); // NOLINT
    /**
     * @symbol ??0ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptActorEventSignalOptions(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&); // NOLINT
    /**
     * @symbol ??4ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&); // NOLINT
    /**
     * @symbol ??4ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&); // NOLINT
    /**
     * @symbol ??1ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorEventSignalOptions(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
