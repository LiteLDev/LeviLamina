#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct BlockQueryResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb4afae;
    ::ll::UntypedStorage<8, 8>  mUnkaf9152;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueryResult& operator=(BlockQueryResult const&);
    BlockQueryResult(BlockQueryResult const&);
    BlockQueryResult();
};

} // namespace AgentComponents
