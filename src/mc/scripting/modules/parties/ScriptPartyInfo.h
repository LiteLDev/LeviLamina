#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka7a094;
    ::ll::UntypedStorage<1, 1>  mUnkc30280;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyInfo& operator=(ScriptPartyInfo const&);
    ScriptPartyInfo(ScriptPartyInfo const&);
    ScriptPartyInfo();
};

} // namespace ScriptModuleParties
