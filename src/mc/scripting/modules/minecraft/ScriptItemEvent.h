#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptItemEvent {
public:
    // prevent constructor by default
    ScriptItemEvent& operator=(ScriptItemEvent const&);
    ScriptItemEvent(ScriptItemEvent const&);
    ScriptItemEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemEvent();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
