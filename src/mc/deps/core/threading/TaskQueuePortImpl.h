#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/LocklessQueue.h"
#include "mc/deps/core/threading/XTaskQueueDispatchMode.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueuePortContext;
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

class TaskQueuePortImpl {
public:
    // TaskQueuePortImpl inner types declare
    // clang-format off
    struct QueueEntry;
    struct TerminationEntry;
    struct WaitRegistration;
    // clang-format on

    // TaskQueuePortImpl inner types define
    struct QueueEntry {};

    struct TerminationEntry {};

    struct WaitRegistration {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AppendEntry(::TaskQueuePortImpl::QueueEntry const&, uint64);

    MCNAPI bool AppendWaitRegistrationEntry(::TaskQueuePortImpl::WaitRegistration*);

    MCNAPI void CancelPendingEntries(::ITaskQueuePortContext*, bool);

    MCNAPI bool DrainOneItem(::OS::ThreadPoolActionStatus&);

    MCNAPI long Initialize(::XTaskQueueDispatchMode);

    MCNAPI long InitializeWaitRegistration(::TaskQueuePortImpl::WaitRegistration*);

    MCNAPI void NotifyItemQueued();

    MCNAPI void ProcessThreadPoolCallback(::OS::ThreadPoolActionStatus&);

    MCNAPI void ScheduleTermination(::TaskQueuePortImpl::TerminationEntry*);

    MCNAPI void SubmitPendingCallback();

    MCNAPI TaskQueuePortImpl();

    MCNAPI bool Wait(::ITaskQueuePortContext*, uint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void EraseQueue(::LocklessQueue<::TaskQueuePortImpl::QueueEntry>*);

    MCNAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE*, void*, ::_TP_WAIT*, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
