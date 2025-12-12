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

class GeneralSignalPublisher : public ::Bedrock::Detail::SignalPublisher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk20b89b;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneralSignalPublisher& operator=(GeneralSignalPublisher const&);
    GeneralSignalPublisher(GeneralSignalPublisher const&);
    GeneralSignalPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void send(void const* data) /*override*/;

    virtual ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    getConnectOp(::std::function<void(void const*)>&& handler) /*override*/;

    virtual ~GeneralSignalPublisher() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $send(void const* data);

    MCNAPI ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    $getConnectOp(::std::function<void(void const*)>&& handler);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Detail
