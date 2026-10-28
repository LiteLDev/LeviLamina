#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ProfilerUsageEventing;
namespace Bedrock::Profiling { class ProfilingOrchestrator; }
// clang-format on

struct GameModuleClientArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsConnectedToRemoteServer;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                             mSubClientId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker>> mLocalProfilerControlBroker;
    ::ll::TypedStorage<8, 64, ::brstd::copyable_function<::Bedrock::Profiling::ProfilingOrchestrator*()>>
                                                                                   mGetProfilingOrchestrator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ProfilerUsageEventing>> mProfilerUsageEventing;
    // NOLINTEND
};
