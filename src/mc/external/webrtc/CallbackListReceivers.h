#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class UntypedFunction; }
// clang-format on

namespace webrtc::callback_list_impl {

class CallbackListReceivers {
public:
    // CallbackListReceivers inner types declare
    // clang-format off
    struct Callback;
    // clang-format on

    // CallbackListReceivers inner types define
    struct Callback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkba1869;
        ::ll::UntypedStorage<8, 48> mUnk55fc13;
        // NOLINTEND

    public:
        // prevent constructor by default
        Callback& operator=(Callback const&);
        Callback(Callback const&);
        Callback();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Callback();
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
    ::ll::UntypedStorage<8, 24> mUnk33341b;
    ::ll::UntypedStorage<1, 1>  mUnkc29813;
    // NOLINTEND

public:
    // prevent constructor by default
    CallbackListReceivers& operator=(CallbackListReceivers const&);
    CallbackListReceivers(CallbackListReceivers const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallbackListReceivers();

    MCNAPI void Foreach(::rtc::FunctionView<void(::webrtc::UntypedFunction&)>);

    MCNAPI void RemoveReceivers(void const*);

    MCNAPI ~CallbackListReceivers();
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

} // namespace webrtc::callback_list_impl
