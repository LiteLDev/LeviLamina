#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling::Control { struct ProfilerControlRequest; }
namespace Bedrock::Profiling::Control { struct ProfilerControlResult; }
// clang-format on

class LocalProfilerControlBroker {
public:
    // LocalProfilerControlBroker inner types define
    enum class ResultResponse : int {
        SkipResult   = 0,
        RemoveResult = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkc64841;
    ::ll::UntypedStorage<8, 24> mUnk26bc3f;
    ::ll::UntypedStorage<8, 80> mUnkd1b2ba;
    ::ll::UntypedStorage<8, 24> mUnk954e2a;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalProfilerControlBroker& operator=(LocalProfilerControlBroker const&);
    LocalProfilerControlBroker(LocalProfilerControlBroker const&);
    LocalProfilerControlBroker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void enqueueRequest(::Bedrock::Profiling::Control::ProfilerControlRequest request);

#ifdef LL_PLAT_C
    MCNAPI void enqueueResult(::Bedrock::Profiling::Control::ProfilerControlResult result);
#endif

    MCNAPI void forEachPendingResult(
        ::std::function<::LocalProfilerControlBroker::ResultResponse const(
            ::Bedrock::Profiling::Control::ProfilerControlResult const&
        )> callback
    );
    // NOLINTEND
};
