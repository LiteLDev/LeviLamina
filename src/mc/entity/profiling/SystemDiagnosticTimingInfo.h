#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct SystemDiagnosticTimingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk715bb0;
    ::ll::UntypedStorage<8, 8>  mUnk8edfc5;
    ::ll::UntypedStorage<8, 8>  mUnk7b35b7;
    ::ll::UntypedStorage<1, 1>  mUnkaae32a;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemDiagnosticTimingInfo& operator=(SystemDiagnosticTimingInfo const&);
    SystemDiagnosticTimingInfo(SystemDiagnosticTimingInfo const&);
    SystemDiagnosticTimingInfo();
};

} // namespace ECS::Profiling::Diagnostics
