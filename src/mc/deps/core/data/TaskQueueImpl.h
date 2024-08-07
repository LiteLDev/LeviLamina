#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ApiId.h"
#include "mc/enums/XTaskQueueDispatchMode.h"
#include "mc/enums/XTaskQueuePort.h"

class TaskQueueImpl {
public:
    // prevent constructor by default
    TaskQueueImpl& operator=(TaskQueueImpl const&);
    TaskQueueImpl(TaskQueueImpl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void __unk_vfn_0();

    // vIndex: 1
    virtual uint Release();

    // vIndex: 2
    virtual long QueryApi(::ApiId, void**);

    // vIndex: 3
    virtual struct XTaskQueueObject* GetHandle();

    // vIndex: 4
    virtual long GetPortContext(::XTaskQueuePort, struct ITaskQueuePortContext**);

    // vIndex: 5
    virtual long
    RegisterWaitHandle(::XTaskQueuePort, void*, void*, void (*)(void*, bool), struct XTaskQueueRegistrationToken*);

    // vIndex: 6
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);

    // vIndex: 7
    virtual long
    RegisterSubmitCallback(void*, void (*)(void*, struct XTaskQueueObject*, ::XTaskQueuePort), struct XTaskQueueRegistrationToken*);

    // vIndex: 8
    virtual void UnregisterSubmitCallback(struct XTaskQueueRegistrationToken);

    // vIndex: 9
    virtual bool CanTerminate();

    // vIndex: 10
    virtual bool CanClose();

    // vIndex: 11
    virtual long Terminate(bool, void*, void (*)(void*));

    // vIndex: 12
    virtual ~TaskQueueImpl() = default;

    // vIndex: 13
    virtual void* QueryApiImpl(::ApiId);

    // vIndex: 14
    virtual void RundownObject();

    MCAPI long Initialize(struct XTaskQueuePortObject*, struct XTaskQueuePortObject*);

    MCAPI long Initialize(::XTaskQueueDispatchMode, ::XTaskQueueDispatchMode, bool, bool);

    MCAPI TaskQueueImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void OnTerminationCallback(void*);

    // NOLINTEND
};
