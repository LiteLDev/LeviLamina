#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct StaticProfLabel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka09dc8;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticProfLabel& operator=(StaticProfLabel const&);
    StaticProfLabel(StaticProfLabel const&);
    StaticProfLabel();
};

} // namespace Bedrock::Profiler::details
