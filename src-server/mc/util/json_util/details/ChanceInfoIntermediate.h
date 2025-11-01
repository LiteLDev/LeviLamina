#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil::details {

struct ChanceInfoIntermediate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk40cefe;
    ::ll::UntypedStorage<4, 4> mUnk325a98;
    // NOLINTEND

public:
    // prevent constructor by default
    ChanceInfoIntermediate& operator=(ChanceInfoIntermediate const&);
    ChanceInfoIntermediate(ChanceInfoIntermediate const&);
    ChanceInfoIntermediate();
};

} // namespace JsonUtil::details
