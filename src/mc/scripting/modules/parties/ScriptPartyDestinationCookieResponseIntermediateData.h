#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyDestinationCookieResponseIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk41b4b6;
    ::ll::UntypedStorage<1, 1>  mUnkbd4c77;
    ::ll::UntypedStorage<8, 96> mUnk51f458;
    ::ll::UntypedStorage<8, 40> mUnk993e9b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyDestinationCookieResponseIntermediateData&
    operator=(ScriptPartyDestinationCookieResponseIntermediateData const&);
    ScriptPartyDestinationCookieResponseIntermediateData(ScriptPartyDestinationCookieResponseIntermediateData const&);
    ScriptPartyDestinationCookieResponseIntermediateData();
};

} // namespace ScriptModuleParties
