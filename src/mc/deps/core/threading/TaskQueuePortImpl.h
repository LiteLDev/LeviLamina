#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"
#include "mc/deps/core/threading/LocklessQueue.h"
#include "mc/deps/core/threading/XTaskQueueDispatchMode.h"

// auto generated forward declare list
// clang-format off
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
    struct QueueEntry {
    public:
        // prevent constructor by default
        QueueEntry& operator=(QueueEntry const&);
        QueueEntry(QueueEntry const&);
        QueueEntry();
    };

    struct TerminationEntry {
    public:
        // prevent constructor by default
        TerminationEntry& operator=(TerminationEntry const&);
        TerminationEntry(TerminationEntry const&);
        TerminationEntry();
    };

    struct WaitRegistration {
    public:
        // prevent constructor by default
        WaitRegistration& operator=(WaitRegistration const&);
        WaitRegistration(WaitRegistration const&);
        WaitRegistration();
    };

public:
    // prevent constructor by default
    TaskQueuePortImpl& operator=(TaskQueuePortImpl const&);
    TaskQueuePortImpl(TaskQueuePortImpl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void __unk_vfn_0();

    // vIndex: 1
    virtual uint Release();

    // vIndex: 2
    virtual long QueryApi(::ApiId, void**);

    // vIndex: 3
    virtual struct XTaskQueuePortObject* GetHandle();

    // vIndex: 4
    virtual long QueueItem(struct ITaskQueuePortContext*, uint, void*, void (*)(void*, bool));

    // vIndex: 5
    virtual long
    RegisterWaitHandle(struct ITaskQueuePortContext*, void*, void*, void (*)(void*, bool), struct XTaskQueueRegistrationToken*);

    // vIndex: 6
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);

    // vIndex: 7
    virtual long PrepareTerminate(struct ITaskQueuePortContext*, void*, void (*)(void*), void**);

    // vIndex: 8
    virtual void CancelTermination(void*);

    // vIndex: 9
    virtual void Terminate(void*);

    // vIndex: 10
    virtual long Attach(struct ITaskQueuePortContext*);

    // vIndex: 11
    virtual void Detach(struct ITaskQueuePortContext*);

    // vIndex: 12
    virtual bool Dispatch(struct ITaskQueuePortContext*, uint);

    // vIndex: 13
    virtual bool IsEmpty();

    // vIndex: 14
    virtual long SuspendTermination(struct ITaskQueuePortContext*);

    // vIndex: 15
    virtual void ResumeTermination(struct ITaskQueuePortContext*);

    // vIndex: 16
    virtual void SuspendPort();

    // vIndex: 17
    virtual void ResumePort();

    // vIndex: 18
    virtual ~TaskQueuePortImpl();

    // vIndex: 19
    virtual void* QueryApiImpl(::ApiId);

    MCAPI long Initialize(::XTaskQueueDispatchMode);

    MCAPI TaskQueuePortImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const&, uint64);

    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration*);

    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext*, bool);

    MCAPI bool DrainOneItem(struct OS::ThreadPoolActionStatus&);

    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration*);

    MCAPI void NotifyItemQueued();

    MCAPI void ProcessThreadPoolCallback(struct OS::ThreadPoolActionStatus&);

    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry*);

    MCAPI void SubmitPendingCallback();

    MCAPI bool Wait(struct ITaskQueuePortContext*, uint);

    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry>*);

    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_WAIT*, ulong);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI long Attach$(struct ITaskQueuePortContext*);

    MCAPI void CancelTermination$(void*);

    MCAPI void Detach$(struct ITaskQueuePortContext*);

    MCAPI bool Dispatch$(struct ITaskQueuePortContext*, uint);

    MCAPI struct XTaskQueuePortObject* GetHandle$();

    MCAPI bool IsEmpty$();

    MCAPI long PrepareTerminate$(struct ITaskQueuePortContext*, void*, void (*)(void*), void**);

    MCAPI long QueryApi$(::ApiId, void**);

    MCAPI void* QueryApiImpl$(::ApiId);

    MCAPI long QueueItem$(struct ITaskQueuePortContext*, uint, void*, void (*)(void*, bool));

    MCAPI long
    RegisterWaitHandle$(struct ITaskQueuePortContext*, void*, void*, void (*)(void*, bool), struct XTaskQueueRegistrationToken*);

    MCAPI uint Release$();

    MCAPI void ResumePort$();

    MCAPI void ResumeTermination$(struct ITaskQueuePortContext*);

    MCAPI void SuspendPort$();

    MCAPI long SuspendTermination$(struct ITaskQueuePortContext*);

    MCAPI void Terminate$(void*);

    MCAPI void UnregisterWaitHandle$(struct XTaskQueueRegistrationToken);

    // NOLINTEND
};
