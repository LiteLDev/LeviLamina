#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class Scheduler;
struct WorkerPoolConfig;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class WorkerPool : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkc24dea;
    ::ll::UntypedStorage<8, 24>  mUnkd8a69f;
    ::ll::UntypedStorage<8, 32>  mUnk7789a2;
    ::ll::UntypedStorage<8, 64>  mUnk66023e;
    ::ll::UntypedStorage<8, 8>   mUnk462341;
    ::ll::UntypedStorage<8, 8>   mUnk5991a5;
    ::ll::UntypedStorage<8, 80>  mUnk7be3ee;
    ::ll::UntypedStorage<4, 4>   mUnkda7062;
    ::ll::UntypedStorage<4, 4>   mUnk853032;
    ::ll::UntypedStorage<8, 24>  mUnkceb84a;
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
    MCNAPI WorkerPool(::std::string_view name, ::Scheduler& owner);

    MCNAPI
    WorkerPool(::std::string_view name, ::Core::Profile::ThreadFrameType frameType, ::WorkerPoolConfig const& config);

    MCNAPI bool _checkPendingWork();

#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::std::thread::id> getThreadIds() const;
#endif

    MCNAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCNAPI uint64 size() const;

    MCNAPI ::std::shared_ptr<::BackgroundTaskBase> tryPop(int minPriority);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _registerPool(::WorkerPool& pool);

    MCNAPI static void _unregisterPool(::WorkerPool& pool);
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
    MCNAPI void* $ctor(::std::string_view name, ::Scheduler& owner);

    MCNAPI void*
    $ctor(::std::string_view name, ::Core::Profile::ThreadFrameType frameType, ::WorkerPoolConfig const& config);
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
