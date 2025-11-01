#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::Threading { class Mutex; }
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
    ::ll::UntypedStorage<8, 80> mUnk36537f;
    ::ll::UntypedStorage<8, 8>  mUnk956817;
    ::ll::UntypedStorage<8, 16> mUnk350063;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalReceiver& operator=(SignalReceiver const&);
    SignalReceiver(SignalReceiver const&);
    SignalReceiver();
};

} // namespace Bedrock
