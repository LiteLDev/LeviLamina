#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbb873a;
    ::ll::UntypedStorage<8, 16> mUnk991d59;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyListener& operator=(ScriptPartyListener const&);
    ScriptPartyListener(ScriptPartyListener const&);
    ScriptPartyListener();
};

} // namespace ScriptModuleParties
