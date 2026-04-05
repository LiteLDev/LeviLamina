#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

namespace Bedrock::Threading::Burst {

struct QueueConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mName;
    ::ll::TypedStorage<4, 4, uint>                                                   mPriority;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                           mScheduler;
    ::ll::TypedStorage<8, 8, ::WorkerPool&>                                          mPrimaryWorkerPool;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::WorkerPool>>> mSecondaryWorkerPools;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::thread::id>>                      mAffinities;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueConfig& operator=(QueueConfig const&);
    QueueConfig(QueueConfig const&);
    QueueConfig();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI QueueConfig(
        ::std::string_view                                              name,
        uint                                                            priority,
        ::Scheduler&                                                    scheduler,
        ::WorkerPool&                                                   primaryWorkerPool,
        ::std::initializer_list<::std::reference_wrapper<::WorkerPool>> secondaryWorkerPools,
        ::gsl::span<::std::thread::id const>                            affinities
    );

    MCAPI ~QueueConfig();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string_view                                              name,
        uint                                                            priority,
        ::Scheduler&                                                    scheduler,
        ::WorkerPool&                                                   primaryWorkerPool,
        ::std::initializer_list<::std::reference_wrapper<::WorkerPool>> secondaryWorkerPools,
        ::gsl::span<::std::thread::id const>                            affinities
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst
