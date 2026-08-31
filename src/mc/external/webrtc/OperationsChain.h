#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

namespace webrtc {

class OperationsChain : public ::webrtc::RefCountedNonVirtual<::webrtc::OperationsChain> {
public:
    // OperationsChain inner types declare
    // clang-format off
    class CallbackHandle;
    // clang-format on

    // OperationsChain inner types define
    class CallbackHandle : public ::webrtc::RefCountedNonVirtual<::webrtc::OperationsChain::CallbackHandle> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka4c477;
        // NOLINTEND

    public:
        // prevent constructor by default
        CallbackHandle& operator=(CallbackHandle const&);
        CallbackHandle(CallbackHandle const&);
        CallbackHandle();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void OnOperationComplete();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7ed641;
    ::ll::UntypedStorage<8, 40> mUnkcfbab4;
    ::ll::UntypedStorage<8, 72> mUnk43ed96;
    // NOLINTEND

public:
    // prevent constructor by default
    OperationsChain& operator=(OperationsChain const&);
    OperationsChain(OperationsChain const&);
    OperationsChain();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::function<void()> CreateOperationsChainCallback();

    MCNAPI bool IsEmpty() const;

    MCNAPI void SetOnChainEmptyCallback(::std::function<void()> on_chain_empty_callback);

    MCNAPI ~OperationsChain();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::OperationsChain> Create();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
