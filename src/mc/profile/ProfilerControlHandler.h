#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ProfilerUsageEventing;
namespace ECS::Profiling { class EntitySystemProfiler; }
// clang-format on

class ProfilerControlHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke8d3cf;
    ::ll::UntypedStorage<8, 16> mUnka97f2c;
    ::ll::UntypedStorage<8, 16> mUnk251810;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlHandler& operator=(ProfilerControlHandler const&);
    ProfilerControlHandler(ProfilerControlHandler const&);
    ProfilerControlHandler();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ProfilerControlHandler(::Bedrock::NonOwnerPointer<::ProfilerUsageEventing> profilerUsageEventing);

    MCNAPI void _tickLocalProfilerControlBroker(
        ::Bedrock::NotNullNonOwnerPtr<::LocalProfilerControlBroker>           profilerControlBroker,
        ::Bedrock::NotNullNonOwnerPtr<::ECS::Profiling::EntitySystemProfiler> entitySystemProfiler,
        bool                                                                  isServerboundDiagnosticsEnabled
    );

    MCNAPI void tick(
        ::Bedrock::NotNullNonOwnerPtr<::LocalProfilerControlBroker>           profilerControlBroker,
        ::Bedrock::NotNullNonOwnerPtr<::ECS::Profiling::EntitySystemProfiler> entitySystemProfiler,
        bool                                                                  isServerboundDiagnosticsEnabled
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::ProfilerUsageEventing> profilerUsageEventing);
#endif
    // NOLINTEND
};
