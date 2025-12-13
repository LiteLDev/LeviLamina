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

    virtual HRESULT GetPortContext(::XTaskQueuePort, ::ITaskQueuePortContext**) = 0;

    virtual HRESULT
    RegisterWaitHandle(::XTaskQueuePort, void*, void*, void (*)(void*, bool), ::XTaskQueueRegistrationToken*) = 0;

    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken) = 0;

    virtual HRESULT RegisterSubmitCallback(
        void*,
        void (*)(void*, ::XTaskQueueObject*, ::XTaskQueuePort),
        ::XTaskQueueRegistrationToken*
    ) = 0;

    virtual void UnregisterSubmitCallback(::XTaskQueueRegistrationToken) = 0;

    virtual bool CanTerminate() = 0;

    virtual bool CanClose() = 0;

    virtual HRESULT Terminate(bool, void*, void (*)(void*)) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
