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
    // vIndex: 3
    virtual ::XTaskQueuePortObject* GetHandle() = 0;

    // vIndex: 4
    virtual HRESULT QueueItem(::ITaskQueuePortContext*, uint, void*, void(*) (void*, bool)) = 0;

    // vIndex: 5
    virtual HRESULT RegisterWaitHandle(::ITaskQueuePortContext*, void*, void*, void(*) (void*, bool), ::XTaskQueueRegistrationToken*) = 0;

    // vIndex: 6
    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken) = 0;

    // vIndex: 7
    virtual HRESULT PrepareTerminate(::ITaskQueuePortContext*, void*, void(*) (void*), void**) = 0;

    // vIndex: 8
    virtual void CancelTermination(void*) = 0;

    // vIndex: 9
    virtual void Terminate(void*) = 0;

    // vIndex: 10
    virtual HRESULT Attach(::ITaskQueuePortContext*) = 0;

    // vIndex: 11
    virtual void Detach(::ITaskQueuePortContext*) = 0;

    // vIndex: 12
    virtual bool Dispatch(::ITaskQueuePortContext*, uint) = 0;

    // vIndex: 13
    virtual bool IsEmpty() = 0;

    // vIndex: 14
    virtual void WaitForUnwind() = 0;

    // vIndex: 15
    virtual HRESULT SuspendTermination(::ITaskQueuePortContext*) = 0;

    // vIndex: 16
    virtual void ResumeTermination(::ITaskQueuePortContext*) = 0;

    // vIndex: 17
    virtual void SuspendPort() = 0;

    // vIndex: 18
    virtual void ResumePort() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
