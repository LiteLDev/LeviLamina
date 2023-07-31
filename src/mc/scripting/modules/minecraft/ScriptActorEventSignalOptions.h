#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptActorEventSignalOptions {

public:
    // prevent constructor by default
    ScriptActorEventSignalOptions() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptActorEventSignalOptions(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&);
    /**
     * @symbol ??0ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptActorEventSignalOptions(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&);
    /**
     * @symbol ??4ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions const&);
    /**
     * @symbol ??4ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorEventSignalOptions&&);
    /**
     * @symbol ??1ScriptActorEventSignalOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorEventSignalOptions();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
