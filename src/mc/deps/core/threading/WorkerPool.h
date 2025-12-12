#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class Scheduler;
namespace Bedrock::Threading { class Mutex; }
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class WorkerPool : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkc24dea;
    ::ll::UntypedStorage<8, 24>  mUnk727e41;
    ::ll::UntypedStorage<8, 32>  mUnka40a93;
    ::ll::UntypedStorage<8, 64>  mUnk66023e;
    ::ll::UntypedStorage<8, 8>   mUnk462341;
    ::ll::UntypedStorage<8, 8>   mUnk5991a5;
    ::ll::UntypedStorage<8, 80>  mUnk7be3ee;
    ::ll::UntypedStorage<4, 4>   mUnkda7062;
    ::ll::UntypedStorage<4, 4>   mUnk853032;
    ::ll::UntypedStorage<8, 32>  mUnkceb84a;
    ::ll::UntypedStorage<8, 24>  mUnk6b6c7b;
    ::ll::UntypedStorage<8, 8>   mUnk5695b7;
    ::ll::UntypedStorage<8, 360> mUnk40c061;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPool& operator=(WorkerPool const&);
    WorkerPool(WorkerPool const&);
    WorkerPool();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkerPool() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorkerPool(::std::string name, ::Scheduler& owner);

    MCNAPI WorkerPool(
        ::std::string                                 name,
        uint64                                        threadCount,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64>                       coreAffinityMask,
        bool                                          suppressWorkerProfiling,
        ::std::optional<int>                          idealCore
    );

    MCNAPI bool _checkPendingWork();

    MCNAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCNAPI ::std::shared_ptr<::BackgroundTaskBase> tryPop(int minPriority);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _registerPool(::WorkerPool& pool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::brstd::flat_set<::WorkerPool*, ::std::less<::WorkerPool*>, ::std::vector<::WorkerPool*>>&
    sAllPools();

    MCNAPI static ::Bedrock::Threading::Mutex& sAllPoolsMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name, ::Scheduler& owner);

    MCNAPI void* $ctor(
        ::std::string                                 name,
        uint64                                        threadCount,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64>                       coreAffinityMask,
        bool                                          suppressWorkerProfiling,
        ::std::optional<int>                          idealCore
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
