#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/SignalPublisher.h"
#include "mc/deps/core/utility/pub_sub/DeferredPublisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Bedrock::Detail {

class FastCopyableSignalPublisher : public ::Bedrock::Detail::SignalPublisher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk2e7d25;
    ::ll::UntypedStorage<8, 8>   mUnk5566e5;
    // NOLINTEND

public:
    // prevent constructor by default
    FastCopyableSignalPublisher& operator=(FastCopyableSignalPublisher const&);
    FastCopyableSignalPublisher(FastCopyableSignalPublisher const&);
    FastCopyableSignalPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void send(void const*) /*override*/;

    // vIndex: 2
    virtual ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    getConnectOp(::std::function<void(void const*)>&&) /*override*/;

    // vIndex: 0
    virtual ~FastCopyableSignalPublisher() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $send(void const*);

    MCAPI ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    $getConnectOp(::std::function<void(void const*)>&&);
    // NOLINTEND
};

} // namespace Bedrock::Detail
