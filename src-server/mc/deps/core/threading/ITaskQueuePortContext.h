#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/IApi.h"
#include "mc/deps/core/threading/TaskQueuePortStatus.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueue;
struct ITaskQueuePort;
// clang-format on

struct ITaskQueuePortContext : public ::IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::XTaskQueuePort GetType() = 0;

    virtual ::TaskQueuePortStatus GetStatus() = 0;

    virtual ::ITaskQueue* GetQueue() = 0;

    virtual ::ITaskQueuePort* GetPort() = 0;

    virtual bool TrySetStatus(::TaskQueuePortStatus, ::TaskQueuePortStatus) = 0;

    virtual void SetStatus(::TaskQueuePortStatus) = 0;

    virtual void ItemQueued() = 0;

    virtual bool AddSuspend() = 0;

    virtual bool RemoveSuspend() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
