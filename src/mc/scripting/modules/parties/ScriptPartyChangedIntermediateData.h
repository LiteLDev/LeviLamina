#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyChangedIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk47106d;
    ::ll::UntypedStorage<8, 48> mUnk1ca3fa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyChangedIntermediateData& operator=(ScriptPartyChangedIntermediateData const&);
    ScriptPartyChangedIntermediateData(ScriptPartyChangedIntermediateData const&);
    ScriptPartyChangedIntermediateData();
};

} // namespace ScriptModuleParties
