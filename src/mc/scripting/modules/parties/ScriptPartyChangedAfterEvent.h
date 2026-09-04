#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyChangedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8b1124;
    ::ll::UntypedStorage<8, 48> mUnk25593a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyChangedAfterEvent& operator=(ScriptPartyChangedAfterEvent const&);
    ScriptPartyChangedAfterEvent(ScriptPartyChangedAfterEvent const&);
    ScriptPartyChangedAfterEvent();
};

} // namespace ScriptModuleParties
