#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"
#include "mc/deps/core/threading/ITaskQueuePortContext.h"
#include "mc/deps/core/threading/TaskQueuePortStatus.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

class TaskQueuePortContextImpl : public ::ITaskQueuePortContext {
public:
    // prevent constructor by default
    TaskQueuePortContextImpl& operator=(TaskQueuePortContextImpl const&);
    TaskQueuePortContextImpl(TaskQueuePortContextImpl const&);
    TaskQueuePortContextImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual uint AddRef();

    // vIndex: 1
    virtual uint Release();

    // vIndex: 2
    virtual long QueryApi(::ApiId, void**);

    // vIndex: 3
    virtual ::XTaskQueuePort GetType();

    // vIndex: 4
    virtual ::TaskQueuePortStatus GetStatus();

    // vIndex: 5
    virtual struct ITaskQueue* GetQueue();

    // vIndex: 6
    virtual struct ITaskQueuePort* GetPort();

    // vIndex: 7
    virtual bool TrySetStatus(::TaskQueuePortStatus, ::TaskQueuePortStatus);

    // vIndex: 8
    virtual void SetStatus(::TaskQueuePortStatus);

    // vIndex: 9
    virtual void ItemQueued();

    // vIndex: 10
    virtual bool AddSuspend();

    // vIndex: 11
    virtual bool RemoveSuspend();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI uint AddRef$();

    MCAPI bool AddSuspend$();

    MCAPI struct ITaskQueuePort* GetPort$();

    MCAPI struct ITaskQueue* GetQueue$();

    MCAPI ::TaskQueuePortStatus GetStatus$();

    MCAPI ::XTaskQueuePort GetType$();

    MCAPI void ItemQueued$();

    MCAPI long QueryApi$(::ApiId, void**);

    MCAPI uint Release$();

    MCAPI bool RemoveSuspend$();

    MCAPI void SetStatus$(::TaskQueuePortStatus);

    MCAPI bool TrySetStatus$(::TaskQueuePortStatus, ::TaskQueuePortStatus);

    // NOLINTEND
};
