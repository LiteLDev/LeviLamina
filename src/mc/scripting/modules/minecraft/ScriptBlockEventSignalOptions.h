#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockEventSignalOptions {
public:
    // prevent constructor by default
    ScriptBlockEventSignalOptions& operator=(ScriptBlockEventSignalOptions const&);
    ScriptBlockEventSignalOptions();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockEventSignalOptions@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptBlockEventSignalOptions(struct ScriptModuleMinecraft::ScriptBlockEventSignalOptions&&);

    // symbol: ??0ScriptBlockEventSignalOptions@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptBlockEventSignalOptions(struct ScriptModuleMinecraft::ScriptBlockEventSignalOptions const&);

    // symbol: ??4ScriptBlockEventSignalOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockEventSignalOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockEventSignalOptions&&);

    // symbol: ??1ScriptBlockEventSignalOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockEventSignalOptions();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
