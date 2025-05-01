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
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit CallbackHandle(::webrtc::scoped_refptr<::rtc::OperationsChain>);

        MCNAPI void OnOperationComplete();

        MCNAPI ~CallbackHandle();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::scoped_refptr<::rtc::OperationsChain>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::function<void()> CreateOperationsChainCallback();

    MCNAPI bool IsEmpty() const;

    MCNAPI void OnOperationComplete();

    MCNAPI OperationsChain();

    MCNAPI void SetOnChainEmptyCallback(::std::function<void()>);

    MCNAPI ~OperationsChain();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::rtc::OperationsChain> Create();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
