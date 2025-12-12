#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

namespace rtc {

class OperationsChain : public ::rtc::RefCountedNonVirtual<::rtc::OperationsChain> {
public:
    // OperationsChain inner types declare
    // clang-format off
    class CallbackHandle;
    // clang-format on

    // OperationsChain inner types define
    class CallbackHandle : public ::rtc::RefCountedNonVirtual<::rtc::OperationsChain::CallbackHandle> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk17319a;
        // NOLINTEND

    public:
        // prevent constructor by default
        CallbackHandle& operator=(CallbackHandle const&);
        CallbackHandle(CallbackHandle const&);
        CallbackHandle();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit CallbackHandle(::webrtc::scoped_refptr<::rtc::OperationsChain> operations_chain);

        MCNAPI void OnOperationComplete();

        MCNAPI ~CallbackHandle();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::scoped_refptr<::rtc::OperationsChain> operations_chain);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk91764b;
    ::ll::UntypedStorage<8, 40> mUnk7a63cc;
    ::ll::UntypedStorage<8, 72> mUnke278af;
    // NOLINTEND

public:
    // prevent constructor by default
    OperationsChain& operator=(OperationsChain const&);
    OperationsChain(OperationsChain const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::function<void()> CreateOperationsChainCallback();

    MCNAPI bool IsEmpty() const;

    MCNAPI void OnOperationComplete();

    MCNAPI OperationsChain();

    MCNAPI void SetOnChainEmptyCallback(::std::function<void()> on_chain_empty_callback);

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
