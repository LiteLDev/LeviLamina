#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Detail { class SignalPublisher; }
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock {

class SignalReceiver {
public:
    // SignalReceiver inner types declare
    // clang-format off
    struct ConnectionRecord;
    // clang-format on

    // SignalReceiver inner types define
    struct ConnectionRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk40edcb;
        ::ll::UntypedStorage<4, 4>  mUnk5bd792;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionRecord& operator=(ConnectionRecord const&);
        ConnectionRecord(ConnectionRecord const&);
        ConnectionRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk434e13;
    ::ll::UntypedStorage<8, 8>  mUnk3a0287;
    ::ll::UntypedStorage<8, 16> mUnk350063;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalReceiver& operator=(SignalReceiver const&);
    SignalReceiver(SignalReceiver const&);
    SignalReceiver();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool _connectSignal(
        ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)> const&
                                            connectOp,
        ::Bedrock::Detail::SignalPublisher* signalID,
        int                                 priority
    );
#endif
    // NOLINTEND
};

} // namespace Bedrock
