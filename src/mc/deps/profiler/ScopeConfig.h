#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct ScopeConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3ab78a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeConfig& operator=(ScopeConfig const&);
    ScopeConfig(ScopeConfig const&);
    ScopeConfig();
};

} // namespace Bedrock::Profiler::details
