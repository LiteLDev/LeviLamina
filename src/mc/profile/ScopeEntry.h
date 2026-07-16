#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::WhiskerLists {

struct ScopeEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfb7fbb;
    ::ll::UntypedStorage<8, 16> mUnkfa95ab;
    ::ll::UntypedStorage<8, 16> mUnk9330ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeEntry& operator=(ScopeEntry const&);
    ScopeEntry(ScopeEntry const&);
    ScopeEntry();
};

} // namespace Bedrock::Profiling::WhiskerLists
