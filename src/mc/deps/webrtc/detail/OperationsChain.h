#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

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
        // NOLINTBEGIN
        // symbol: ??0CallbackHandle@OperationsChain@rtc@@QEAA@V?$scoped_refptr@VOperationsChain@rtc@@@2@@Z
        MCAPI explicit CallbackHandle(class rtc::scoped_refptr<class rtc::OperationsChain>);

        // symbol: ?OnOperationComplete@CallbackHandle@OperationsChain@rtc@@QEAAXXZ
        MCAPI void OnOperationComplete();

        // symbol: ??1CallbackHandle@OperationsChain@rtc@@QEAA@XZ
        MCAPI ~CallbackHandle();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OperationsChain& operator=(OperationsChain const&);
    OperationsChain(OperationsChain const&);

public:
    // NOLINTBEGIN
    // symbol: ?IsEmpty@OperationsChain@rtc@@QEBA_NXZ
    MCAPI bool IsEmpty() const;

    // symbol: ?SetOnChainEmptyCallback@OperationsChain@rtc@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void SetOnChainEmptyCallback(std::function<void(void)>);

    // symbol: ??1OperationsChain@rtc@@QEAA@XZ
    MCAPI ~OperationsChain();

    // symbol: ?Create@OperationsChain@rtc@@SA?AV?$scoped_refptr@VOperationsChain@rtc@@@2@XZ
    MCAPI static class rtc::scoped_refptr<class rtc::OperationsChain> Create();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CreateOperationsChainCallback@OperationsChain@rtc@@AEAA?AV?$function@$$A6AXXZ@std@@XZ
    MCAPI std::function<void(void)> CreateOperationsChainCallback();

    // symbol: ?OnOperationComplete@OperationsChain@rtc@@AEAAXXZ
    MCAPI void OnOperationComplete();

    // symbol: ??0OperationsChain@rtc@@AEAA@XZ
    MCAPI OperationsChain();

    // NOLINTEND
};

}; // namespace rtc
