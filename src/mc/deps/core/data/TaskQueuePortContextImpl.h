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
    // vIndex: 0, symbol: ?AddRef@TaskQueuePortContextImpl@@UEAAIXZ
    virtual uint AddRef();

    // vIndex: 1, symbol: ?Release@TaskQueuePortContextImpl@@UEAAIXZ
    virtual uint Release();

    // vIndex: 2, symbol: ?QueryApi@TaskQueuePortContextImpl@@UEAAJW4ApiId@@PEAPEAX@Z
    virtual long QueryApi(::ApiId, void**);

    // vIndex: 3, symbol: ?GetType@TaskQueuePortContextImpl@@UEAA?AW4XTaskQueuePort@@XZ
    virtual ::XTaskQueuePort GetType();

    // vIndex: 4, symbol: ?GetStatus@TaskQueuePortContextImpl@@UEAA?AW4TaskQueuePortStatus@@XZ
    virtual ::TaskQueuePortStatus GetStatus();

    // vIndex: 5, symbol: ?GetQueue@TaskQueuePortContextImpl@@UEAAPEAUITaskQueue@@XZ
    virtual struct ITaskQueue* GetQueue();

    // vIndex: 6, symbol: ?GetPort@TaskQueuePortContextImpl@@UEAAPEAUITaskQueuePort@@XZ
    virtual struct ITaskQueuePort* GetPort();

    // vIndex: 7, symbol: ?TrySetStatus@TaskQueuePortContextImpl@@UEAA_NW4TaskQueuePortStatus@@0@Z
    virtual bool TrySetStatus(::TaskQueuePortStatus, ::TaskQueuePortStatus);

    // vIndex: 8, symbol: ?SetStatus@TaskQueuePortContextImpl@@UEAAXW4TaskQueuePortStatus@@@Z
    virtual void SetStatus(::TaskQueuePortStatus);

    // vIndex: 9, symbol: ?ItemQueued@TaskQueuePortContextImpl@@UEAAXXZ
    virtual void ItemQueued();

    // vIndex: 10, symbol: ?AddSuspend@TaskQueuePortContextImpl@@UEAA_NXZ
    virtual bool AddSuspend();

    // vIndex: 11, symbol: ?RemoveSuspend@TaskQueuePortContextImpl@@UEAA_NXZ
    virtual bool RemoveSuspend();

    // NOLINTEND
};
#pragma warning(pop)
