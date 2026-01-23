#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct CounterConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk58980c;
    ::ll::UntypedStorage<1, 1> mUnka72c8c;
    ::ll::UntypedStorage<1, 1> mUnk46bba8;
    ::ll::UntypedStorage<1, 1> mUnk5e129b;
    // NOLINTEND

public:
    // prevent constructor by default
    CounterConfig& operator=(CounterConfig const&);
    CounterConfig(CounterConfig const&);
    CounterConfig();
};

} // namespace Bedrock::Profiler::details
