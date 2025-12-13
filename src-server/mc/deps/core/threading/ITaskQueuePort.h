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

    virtual HRESULT QueueItem(::ITaskQueuePortContext*, uint, void*, void (*)(void*, bool)) = 0;

    virtual HRESULT RegisterWaitHandle(
        ::ITaskQueuePortContext*,
        void*,
        void*,
        void (*)(void*, bool),
        ::XTaskQueueRegistrationToken*
    ) = 0;

    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken) = 0;

    virtual HRESULT PrepareTerminate(::ITaskQueuePortContext*, void*, void (*)(void*), void**) = 0;

    virtual void CancelTermination(void*) = 0;

    virtual void Terminate(void*) = 0;

    virtual HRESULT Attach(::ITaskQueuePortContext*) = 0;

    virtual void Detach(::ITaskQueuePortContext*) = 0;

    virtual bool Dispatch(::ITaskQueuePortContext*, uint) = 0;

    virtual bool IsEmpty() = 0;

    virtual void WaitForUnwind() = 0;

    virtual HRESULT SuspendTermination(::ITaskQueuePortContext*) = 0;

    virtual void ResumeTermination(::ITaskQueuePortContext*) = 0;

    virtual void SuspendPort() = 0;

    virtual void ResumePort() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
