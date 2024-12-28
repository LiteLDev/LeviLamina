#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

namespace rtc {

class OperationsChain {
public:
    // OperationsChain inner types declare
    // clang-format off
    class CallbackHandle;
    // clang-format on

    // OperationsChain inner types define
    class CallbackHandle {
    public:
        // prevent constructor by default
        CallbackHandle& operator=(CallbackHandle const&);
        CallbackHandle(CallbackHandle const&);
        CallbackHandle();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit CallbackHandle(::webrtc::scoped_refptr<::rtc::OperationsChain>);

        MCAPI void OnOperationComplete();

        MCAPI ~CallbackHandle();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::scoped_refptr<::rtc::OperationsChain>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    OperationsChain& operator=(OperationsChain const&);
    OperationsChain(OperationsChain const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::function<void()> CreateOperationsChainCallback();

    MCAPI bool IsEmpty() const;

    MCAPI void OnOperationComplete();

    MCAPI OperationsChain();

    MCAPI void SetOnChainEmptyCallback(::std::function<void()>);

    MCAPI ~OperationsChain();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::rtc::OperationsChain> Create();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
