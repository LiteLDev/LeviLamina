#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ITaskQueuePortContext.h"
#include "mc/enums/ApiId.h"
#include "mc/enums/TaskQueuePortStatus.h"
#include "mc/enums/XTaskQueuePort.h"

#pragma warning(push)
#pragma warning(disable : 5204)
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
};
#pragma warning(pop)
