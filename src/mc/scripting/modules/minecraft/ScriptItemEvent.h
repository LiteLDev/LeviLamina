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
    // vIndex: 0, symbol: ??1ScriptItemEvent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemEvent();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
