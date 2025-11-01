#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/Api.h"
#include "mc/deps/core/threading/ITaskQueuePort.h"
#include "mc/deps/core/threading/LocklessQueue.h"
#include "mc/deps/core/threading/XTaskQueueDispatchMode.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueuePortContext;
struct XTaskQueuePortObject;
struct XTaskQueueRegistrationToken;
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

class TaskQueuePortImpl : public ::Api<1, ::ITaskQueuePort> {
public:
    // TaskQueuePortImpl inner types declare
    // clang-format off
    struct QueueEntry;
    struct TerminationEntry;
    struct WaitRegistration;
    // clang-format on
    
    // TaskQueuePortImpl inner types define
    struct WaitRegistration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9c4ca3;
        ::ll::UntypedStorage<8, 8> mUnk93cc78;
        ::ll::UntypedStorage<8, 8> mUnkf8cd32;
        ::ll::UntypedStorage<8, 8> mUnk8aeb0a;
        ::ll::UntypedStorage<8, 48> mUnk2d35dc;
        ::ll::UntypedStorage<4, 4> mUnk8d0460;
        ::ll::UntypedStorage<4, 4> mUnk303c8b;
        ::ll::UntypedStorage<1, 1> mUnkb34bd1;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        WaitRegistration& operator=(WaitRegistration const&);
        WaitRegistration(WaitRegistration const&);
        WaitRegistration();
    
    };
    
    struct QueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkbf6054;
        ::ll::UntypedStorage<8, 8> mUnk2fd3c6;
        ::ll::UntypedStorage<8, 8> mUnkbfe41b;
        ::ll::UntypedStorage<8, 8> mUnk28c06a;
        ::ll::UntypedStorage<8, 8> mUnkeffd76;
        ::ll::UntypedStorage<8, 8> mUnkf64fb0;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        QueueEntry& operator=(QueueEntry const&);
        QueueEntry(QueueEntry const&);
        QueueEntry();
    
    };
    
    struct TerminationEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdacf6c;
        ::ll::UntypedStorage<8, 8> mUnk7d5495;
        ::ll::UntypedStorage<8, 8> mUnkfaaf35;
        ::ll::UntypedStorage<8, 8> mUnkff496d;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TerminationEntry& operator=(TerminationEntry const&);
        TerminationEntry(TerminationEntry const&);
        TerminationEntry();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk934f42;
    ::ll::UntypedStorage<4, 4> mUnk769562;
    ::ll::UntypedStorage<8, 136> mUnkfa4e09;
    ::ll::UntypedStorage<4, 4> mUnk500b9b;
    ::ll::UntypedStorage<8, 72> mUnk7302f0;
    ::ll::UntypedStorage<8, 80> mUnke94bfc;
    ::ll::UntypedStorage<8, 8> mUnk233445;
    ::ll::UntypedStorage<8, 8> mUnk929b5d;
    ::ll::UntypedStorage<8, 8> mUnk279d00;
    ::ll::UntypedStorage<8, 8> mUnk3bba68;
    ::ll::UntypedStorage<8, 8> mUnk89a610;
    ::ll::UntypedStorage<8, 8> mUnk8c66f0;
    ::ll::UntypedStorage<8, 8> mUnk3df8d0;
    ::ll::UntypedStorage<8, 8> mUnkb70277;
    ::ll::UntypedStorage<1, 1> mUnk67421d;
    ::ll::UntypedStorage<8, 488> mUnkf3d0e8;
    ::ll::UntypedStorage<8, 496> mUnk8c2eb0;
    ::ll::UntypedStorage<8, 8> mUnk92e0b4;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueuePortImpl& operator=(TaskQueuePortImpl const&);
    TaskQueuePortImpl(TaskQueuePortImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 19
    virtual ~TaskQueuePortImpl() /*override*/;

    // vIndex: 3
    virtual ::XTaskQueuePortObject* GetHandle() /*override*/;

    // vIndex: 4
    virtual HRESULT QueueItem(::ITaskQueuePortContext* portContext, uint waitMs, void* callbackContext, void(*callback) (void*, bool)) /*override*/;

    // vIndex: 5
    virtual HRESULT RegisterWaitHandle(::ITaskQueuePortContext* portContext, void* waitHandle, void* callbackContext, void(*callback) (void*, bool), ::XTaskQueueRegistrationToken* token) /*override*/;

    // vIndex: 6
    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken token) /*override*/;

    // vIndex: 7
    virtual HRESULT PrepareTerminate(::ITaskQueuePortContext* portContext, void* callbackContext, void(*callback) (void*), void** token) /*override*/;

    // vIndex: 8
    virtual void CancelTermination(void* token) /*override*/;

    // vIndex: 9
    virtual void Terminate(void* token) /*override*/;

    // vIndex: 10
    virtual HRESULT Attach(::ITaskQueuePortContext* portContext) /*override*/;

    // vIndex: 11
    virtual void Detach(::ITaskQueuePortContext* portContext) /*override*/;

    // vIndex: 12
    virtual bool Dispatch(::ITaskQueuePortContext* portContext, uint timeoutInMs) /*override*/;

    // vIndex: 13
    virtual bool IsEmpty() /*override*/;

    // vIndex: 14
    virtual void WaitForUnwind() /*override*/;

    // vIndex: 15
    virtual HRESULT SuspendTermination(::ITaskQueuePortContext* portContext) /*override*/;

    // vIndex: 16
    virtual void ResumeTermination(::ITaskQueuePortContext* portContext) /*override*/;

    // vIndex: 17
    virtual void SuspendPort() /*override*/;

    // vIndex: 18
    virtual void ResumePort() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AppendEntry(::TaskQueuePortImpl::QueueEntry const& entry, uint64 node);

    MCNAPI bool AppendWaitRegistrationEntry(::TaskQueuePortImpl::WaitRegistration* waitReg);

    MCNAPI void CancelPendingEntries(::ITaskQueuePortContext* portContext, bool appendToQueue);

    MCNAPI bool DrainOneItem(::OS::ThreadPoolActionStatus& status);

    MCNAPI long Initialize(::XTaskQueueDispatchMode mode);

    MCNAPI long InitializeWaitRegistration(::TaskQueuePortImpl::WaitRegistration* waitReg);

    MCNAPI void NotifyItemQueued();

    MCNAPI void ProcessThreadPoolCallback(::OS::ThreadPoolActionStatus& status);

    MCNAPI void ScheduleTermination(::TaskQueuePortImpl::TerminationEntry* term);

    MCNAPI void SubmitPendingCallback();

    MCNAPI TaskQueuePortImpl();

    MCNAPI bool Wait(::ITaskQueuePortContext* portContext, uint timeout);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void EraseQueue(::LocklessQueue<::TaskQueuePortImpl::QueueEntry>* queue);

    MCNAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE* instance, void* context, ::_TP_WAIT* wait, ulong waitResult);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::XTaskQueuePortObject* $GetHandle();

    MCNAPI HRESULT $QueueItem(::ITaskQueuePortContext* portContext, uint waitMs, void* callbackContext, void(*callback) (void*, bool));

    MCNAPI HRESULT $RegisterWaitHandle(::ITaskQueuePortContext* portContext, void* waitHandle, void* callbackContext, void(*callback) (void*, bool), ::XTaskQueueRegistrationToken* token);

    MCNAPI void $UnregisterWaitHandle(::XTaskQueueRegistrationToken token);

    MCNAPI HRESULT $PrepareTerminate(::ITaskQueuePortContext* portContext, void* callbackContext, void(*callback) (void*), void** token);

    MCNAPI void $CancelTermination(void* token);

    MCNAPI void $Terminate(void* token);

    MCNAPI HRESULT $Attach(::ITaskQueuePortContext* portContext);

    MCNAPI void $Detach(::ITaskQueuePortContext* portContext);

    MCNAPI bool $Dispatch(::ITaskQueuePortContext* portContext, uint timeoutInMs);

    MCNAPI bool $IsEmpty();

    MCNAPI void $WaitForUnwind();

    MCNAPI HRESULT $SuspendTermination(::ITaskQueuePortContext* portContext);

    MCNAPI void $ResumeTermination(::ITaskQueuePortContext* portContext);

    MCNAPI void $SuspendPort();

    MCNAPI void $ResumePort();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
