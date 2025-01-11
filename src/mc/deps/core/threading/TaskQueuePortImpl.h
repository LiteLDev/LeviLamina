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
    MCAPI bool AppendEntry(::TaskQueuePortImpl::QueueEntry const&, uint64);

    MCAPI bool AppendWaitRegistrationEntry(::TaskQueuePortImpl::WaitRegistration*);

    MCAPI void CancelPendingEntries(::ITaskQueuePortContext*, bool);

    MCAPI bool DrainOneItem(::OS::ThreadPoolActionStatus&);

    MCAPI long Initialize(::XTaskQueueDispatchMode);

    MCAPI long InitializeWaitRegistration(::TaskQueuePortImpl::WaitRegistration*);

    MCAPI void NotifyItemQueued();

    MCAPI void ProcessThreadPoolCallback(::OS::ThreadPoolActionStatus&);

    MCAPI void ScheduleTermination(::TaskQueuePortImpl::TerminationEntry*);

    MCAPI void SubmitPendingCallback();

    MCAPI TaskQueuePortImpl();

    MCAPI bool Wait(::ITaskQueuePortContext*, uint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void EraseQueue(::LocklessQueue<::TaskQueuePortImpl::QueueEntry>*);

    MCAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE*, void*, ::_TP_WAIT*, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
