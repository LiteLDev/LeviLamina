#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling { class ProfilingOrchestrator; }
// clang-format on

namespace Bedrock::Profiling {

struct IProfilingOrchestratorProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProfilingOrchestratorProvider() = default;

    virtual ::Bedrock::Profiling::ProfilingOrchestrator const* getProfilingOrchestrator() const = 0;

    virtual ::Bedrock::Profiling::ProfilingOrchestrator* getMutableProfilingOrchestrator() = 0;
    // NOLINTEND
};

} // namespace Bedrock::Profiling
