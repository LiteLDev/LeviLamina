#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct PerformanceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4801b1;
    ::ll::UntypedStorage<1, 1>  mUnk4e00bd;
    ::ll::UntypedStorage<4, 4>  mUnkd3dc83;
    ::ll::UntypedStorage<1, 1>  mUnk39d307;
    // NOLINTEND

public:
    // prevent constructor by default
    PerformanceContext& operator=(PerformanceContext const&);
    PerformanceContext(PerformanceContext const&);
    PerformanceContext();
};

} // namespace Bedrock::Profiling::Orchestrator
