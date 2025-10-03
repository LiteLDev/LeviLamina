#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptItemChargeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke16171;
    ::ll::UntypedStorage<8, 32> mUnkf44225;
    ::ll::UntypedStorage<4, 4>  mUnkc9945b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemChargeAfterEvent& operator=(ScriptItemChargeAfterEvent const&);
    ScriptItemChargeAfterEvent(ScriptItemChargeAfterEvent const&);
    ScriptItemChargeAfterEvent();
};

} // namespace ScriptModuleMinecraft
