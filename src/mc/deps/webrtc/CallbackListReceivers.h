#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/FunctionView.h"

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
        // prevent constructor by default
        Callback& operator=(Callback const&);
        Callback(Callback const&);
        Callback();

    public:
        // NOLINTBEGIN
        // symbol: ??1Callback@CallbackListReceivers@callback_list_impl@webrtc@@QEAA@XZ
        MCAPI ~Callback();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CallbackListReceivers& operator=(CallbackListReceivers const&);
    CallbackListReceivers(CallbackListReceivers const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CallbackListReceivers@callback_list_impl@webrtc@@QEAA@XZ
    MCAPI CallbackListReceivers();

    // symbol:
    // ?Foreach@CallbackListReceivers@callback_list_impl@webrtc@@QEAAXV?$FunctionView@$$A6AXAEAVUntypedFunction@webrtc@@@Z@rtc@@@Z
    MCAPI void Foreach(class rtc::FunctionView<void(class webrtc::UntypedFunction&)>);

    // symbol: ?RemoveReceivers@CallbackListReceivers@callback_list_impl@webrtc@@QEAAXPEBX@Z
    MCAPI void RemoveReceivers(void const*);

    // symbol: ??1CallbackListReceivers@callback_list_impl@webrtc@@QEAA@XZ
    MCAPI ~CallbackListReceivers();

    // NOLINTEND
};

}; // namespace webrtc::callback_list_impl
