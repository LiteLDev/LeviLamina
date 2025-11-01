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
    // vIndex: 3
    virtual ::XTaskQueuePort GetType() = 0;

    // vIndex: 4
    virtual ::TaskQueuePortStatus GetStatus() = 0;

    // vIndex: 5
    virtual ::ITaskQueue* GetQueue() = 0;

    // vIndex: 6
    virtual ::ITaskQueuePort* GetPort() = 0;

    // vIndex: 7
    virtual bool TrySetStatus(::TaskQueuePortStatus, ::TaskQueuePortStatus) = 0;

    // vIndex: 8
    virtual void SetStatus(::TaskQueuePortStatus) = 0;

    // vIndex: 9
    virtual void ItemQueued() = 0;

    // vIndex: 10
    virtual bool AddSuspend() = 0;

    // vIndex: 11
    virtual bool RemoveSuspend() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
