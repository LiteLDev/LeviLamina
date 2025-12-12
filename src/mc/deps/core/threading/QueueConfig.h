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
    ::ll::UntypedStorage<8, 32> mUnkb55726;
    ::ll::UntypedStorage<4, 4>  mUnk2500c7;
    ::ll::UntypedStorage<8, 8>  mUnk25f13d;
    ::ll::UntypedStorage<8, 8>  mUnk90c92e;
    ::ll::UntypedStorage<8, 24> mUnk323b5c;
    ::ll::UntypedStorage<8, 24> mUnkb6bb39;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueConfig& operator=(QueueConfig const&);
    QueueConfig(QueueConfig const&);
    QueueConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C QueueConfig(
        ::std::string_view                                              name,
        uint                                                            priority,
        ::Scheduler&                                                    scheduler,
        ::WorkerPool&                                                   primaryWorkerPool,
        ::std::initializer_list<::std::reference_wrapper<::WorkerPool>> secondaryWorkerPools,
        ::gsl::span<::std::thread::id const>                            affinities
    );

    MCNAPI_C ~QueueConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::string_view                                              name,
        uint                                                            priority,
        ::Scheduler&                                                    scheduler,
        ::WorkerPool&                                                   primaryWorkerPool,
        ::std::initializer_list<::std::reference_wrapper<::WorkerPool>> secondaryWorkerPools,
        ::gsl::span<::std::thread::id const>                            affinities
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst
