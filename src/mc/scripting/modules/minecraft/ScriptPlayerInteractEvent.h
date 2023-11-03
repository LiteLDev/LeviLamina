#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractEvent(ScriptPlayerInteractEvent const&);
    ScriptPlayerInteractEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptPlayerInteractEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractEvent&&);

    // symbol: ??4ScriptPlayerInteractEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractEvent const&);

    // symbol: ??1ScriptPlayerInteractEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptPlayerInteractEvent();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
