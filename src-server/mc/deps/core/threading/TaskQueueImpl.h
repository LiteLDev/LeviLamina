#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/Api.h"
#include "mc/deps/core/threading/ITaskQueue.h"
#include "mc/deps/core/threading/XTaskQueueDispatchMode.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueuePortContext;
struct XTaskQueueObject;
struct XTaskQueuePortObject;
struct XTaskQueueRegistrationToken;
// clang-format on

class TaskQueueImpl : public ::Api<2, ::ITaskQueue> {
public:
    // TaskQueueImpl inner types declare
    // clang-format off
    struct TerminationEntry;
    struct TerminationData;
    // clang-format on

    // TaskQueueImpl inner types define
    enum class TerminationLevel : int {
        None       = 0,
        Work       = 1,
        Completion = 2,
    };

    struct TerminationEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf53b4a;
        ::ll::UntypedStorage<4, 4> mUnk369a01;
        ::ll::UntypedStorage<8, 8> mUnk643c26;
        ::ll::UntypedStorage<8, 8> mUnke0684a;
        ::ll::UntypedStorage<8, 8> mUnk286c7a;
        // NOLINTEND

    public:
        // prevent constructor by default
        TerminationEntry& operator=(TerminationEntry const&);
        TerminationEntry(TerminationEntry const&);
        TerminationEntry();
    };

    struct TerminationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkd13164;
        ::ll::UntypedStorage<1, 1>  mUnk809a2c;
        ::ll::UntypedStorage<8, 80> mUnk684968;
        ::ll::UntypedStorage<8, 72> mUnkbbdbec;
        // NOLINTEND

    public:
        // prevent constructor by default
        TerminationData& operator=(TerminationData const&);
        TerminationData(TerminationData const&);
        TerminationData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mUnkb063f3;
    ::ll::UntypedStorage<8, 1656> mUnk3ef46e;
    ::ll::UntypedStorage<8, 2976> mUnk765306;
    ::ll::UntypedStorage<8, 160>  mUnka865be;
    ::ll::UntypedStorage<8, 56>   mUnkf550d3;
    ::ll::UntypedStorage<8, 56>   mUnkead70c;
    ::ll::UntypedStorage<1, 1>    mUnka16436;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueueImpl& operator=(TaskQueueImpl const&);
    TaskQueueImpl(TaskQueueImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TaskQueueImpl() /*override*/ = default;

    virtual ::XTaskQueueObject* GetHandle() /*override*/;

    virtual HRESULT GetPortContext(::XTaskQueuePort port, ::ITaskQueuePortContext** portContext) /*override*/;

    virtual HRESULT RegisterWaitHandle(
        ::XTaskQueuePort port,
        void*            waitHandle,
        void*            callbackContext,
        void (*callback)(void*, bool),
        ::XTaskQueueRegistrationToken* token
    ) /*override*/;

    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken token) /*override*/;

    virtual HRESULT RegisterSubmitCallback(
        void* context,
        void (*callback)(void*, ::XTaskQueueObject*, ::XTaskQueuePort),
        ::XTaskQueueRegistrationToken* token
    ) /*override*/;

    virtual void UnregisterSubmitCallback(::XTaskQueueRegistrationToken token) /*override*/;

    virtual bool CanTerminate() /*override*/;

    virtual bool CanClose() /*override*/;

    virtual HRESULT Terminate(bool wait, void* callbackContext, void (*callback)(void*)) /*override*/;

    virtual void RundownObject() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Initialize(::XTaskQueuePortObject* workPort, ::XTaskQueuePortObject* completionPort);

    MCNAPI long Initialize(
        ::XTaskQueueDispatchMode workMode,
        ::XTaskQueueDispatchMode completionMode,
        bool                     allowTermination,
        bool                     allowClose
    );

    MCNAPI TaskQueueImpl();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void OnTerminationCallback(void* context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::XTaskQueueObject* $GetHandle();

    MCNAPI HRESULT $GetPortContext(::XTaskQueuePort port, ::ITaskQueuePortContext** portContext);

    MCNAPI HRESULT $RegisterWaitHandle(
        ::XTaskQueuePort port,
        void*            waitHandle,
        void*            callbackContext,
        void (*callback)(void*, bool),
        ::XTaskQueueRegistrationToken* token
    );

    MCNAPI void $UnregisterWaitHandle(::XTaskQueueRegistrationToken token);

    MCNAPI HRESULT $RegisterSubmitCallback(
        void* context,
        void (*callback)(void*, ::XTaskQueueObject*, ::XTaskQueuePort),
        ::XTaskQueueRegistrationToken* token
    );

    MCNAPI void $UnregisterSubmitCallback(::XTaskQueueRegistrationToken token);

    MCNAPI bool $CanTerminate();

    MCNAPI bool $CanClose();

    MCNAPI HRESULT $Terminate(bool wait, void* callbackContext, void (*callback)(void*));

    MCNAPI void $RundownObject();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
