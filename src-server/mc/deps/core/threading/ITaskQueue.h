#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/IApi.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueuePortContext;
struct XTaskQueueObject;
struct XTaskQueueRegistrationToken;
// clang-format on

struct ITaskQueue : public ::IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::XTaskQueueObject* GetHandle() = 0;

    virtual HRESULT GetPortContext(::XTaskQueuePort port, ::ITaskQueuePortContext** portContext) = 0;

    virtual HRESULT RegisterWaitHandle(
        ::XTaskQueuePort port,
        void*            waitHandle,
        void*            callbackContext,
        void (*callback)(void*, bool),
        ::XTaskQueueRegistrationToken* token
    ) = 0;

    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken token) = 0;

    virtual HRESULT RegisterSubmitCallback(
        void* context,
        void (*callback)(void*, ::XTaskQueueObject*, ::XTaskQueuePort),
        ::XTaskQueueRegistrationToken* token
    ) = 0;

    virtual void UnregisterSubmitCallback(::XTaskQueueRegistrationToken token) = 0;

    virtual bool CanTerminate() = 0;

    virtual bool CanClose() = 0;

    virtual HRESULT Terminate(bool wait, void* callbackContext, void (*callback)(void*)) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
