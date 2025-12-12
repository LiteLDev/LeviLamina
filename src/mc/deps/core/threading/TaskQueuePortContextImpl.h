#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"
#include "mc/deps/core/threading/ITaskQueuePortContext.h"
#include "mc/deps/core/threading/TaskQueuePortStatus.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueue;
struct ITaskQueuePort;
// clang-format on

class TaskQueuePortContextImpl : public ::ITaskQueuePortContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkee6bb2;
    ::ll::UntypedStorage<8, 8> mUnkeeafcd;
    ::ll::UntypedStorage<8, 8> mUnk6a9c40;
    ::ll::UntypedStorage<4, 4> mUnkcee1c4;
    ::ll::UntypedStorage<8, 8> mUnkc19027;
    ::ll::UntypedStorage<4, 4> mUnka242e0;
    ::ll::UntypedStorage<4, 4> mUnk4b4b60;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueuePortContextImpl& operator=(TaskQueuePortContextImpl const&);
    TaskQueuePortContextImpl(TaskQueuePortContextImpl const&);
    TaskQueuePortContextImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual uint AddRef() /*override*/;

    // vIndex: 1
    virtual uint Release() /*override*/;

    // vIndex: 2
    virtual HRESULT QueryApi(::ApiId id, void** ptr) /*override*/;

    // vIndex: 3
    virtual ::XTaskQueuePort GetType() /*override*/;

    // vIndex: 4
    virtual ::TaskQueuePortStatus GetStatus() /*override*/;

    // vIndex: 5
    virtual ::ITaskQueue* GetQueue() /*override*/;

    // vIndex: 6
    virtual ::ITaskQueuePort* GetPort() /*override*/;

    // vIndex: 7
    virtual bool TrySetStatus(::TaskQueuePortStatus expectedStatus, ::TaskQueuePortStatus status) /*override*/;

    // vIndex: 8
    virtual void SetStatus(::TaskQueuePortStatus status) /*override*/;

    // vIndex: 9
    virtual void ItemQueued() /*override*/;

    // vIndex: 10
    virtual bool AddSuspend() /*override*/;

    // vIndex: 11
    virtual bool RemoveSuspend() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $AddRef();

    MCNAPI uint $Release();

    MCNAPI HRESULT $QueryApi(::ApiId id, void** ptr);

    MCNAPI ::XTaskQueuePort $GetType();

    MCNAPI ::TaskQueuePortStatus $GetStatus();

    MCNAPI ::ITaskQueue* $GetQueue();

    MCNAPI ::ITaskQueuePort* $GetPort();

    MCNAPI bool $TrySetStatus(::TaskQueuePortStatus expectedStatus, ::TaskQueuePortStatus status);

    MCNAPI void $SetStatus(::TaskQueuePortStatus status);

    MCNAPI void $ItemQueued();

    MCNAPI bool $AddSuspend();

    MCNAPI bool $RemoveSuspend();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
