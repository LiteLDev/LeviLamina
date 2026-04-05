#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/IApi.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueuePortContext;
struct XTaskQueuePortObject;
struct XTaskQueueRegistrationToken;
// clang-format on

struct ITaskQueuePort : public ::IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::XTaskQueuePortObject* GetHandle() = 0;

    virtual HRESULT QueueItem(
        ::ITaskQueuePortContext* portContext,
        uint                     waitMs,
        void*                    callbackContext,
        void (*callback)(void*, bool)
    ) = 0;

    virtual HRESULT RegisterWaitHandle(
        ::ITaskQueuePortContext* portContext,
        void*                    waitHandle,
        void*                    callbackContext,
        void (*callback)(void*, bool),
        ::XTaskQueueRegistrationToken* token
    ) = 0;

    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken token) = 0;

    virtual HRESULT PrepareTerminate(
        ::ITaskQueuePortContext* portContext,
        void*                    callbackContext,
        void (*callback)(void*),
        void** token
    ) = 0;

    virtual void CancelTermination(void* token) = 0;

    virtual void Terminate(void* token) = 0;

    virtual HRESULT Attach(::ITaskQueuePortContext* portContext) = 0;

    virtual void Detach(::ITaskQueuePortContext* portContext) = 0;

    virtual bool Dispatch(::ITaskQueuePortContext* portContext, uint timeoutInMs) = 0;

    virtual bool IsEmpty() = 0;

    virtual void WaitForUnwind() = 0;

    virtual HRESULT SuspendTermination(::ITaskQueuePortContext* portContext) = 0;

    virtual void ResumeTermination(::ITaskQueuePortContext* portContext) = 0;

    virtual void SuspendPort() = 0;

    virtual void ResumePort() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
