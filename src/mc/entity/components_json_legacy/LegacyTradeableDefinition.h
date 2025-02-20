#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyTradeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke07e5e;
    ::ll::UntypedStorage<8, 32> mUnk13d64f;
    ::ll::UntypedStorage<1, 1>  mUnke96949;
    ::ll::UntypedStorage<1, 1>  mUnke6009a;
    ::ll::UntypedStorage<1, 1>  mUnk771b18;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableDefinition& operator=(LegacyTradeableDefinition const&);
    LegacyTradeableDefinition(LegacyTradeableDefinition const&);
    LegacyTradeableDefinition();
};
