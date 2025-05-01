#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub { class SubscriptionContext; }
namespace Bedrock::PubSub::Detail { class PublisherDisconnector; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class SubscriptionBodyBase
: public ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase> {
public:
    // SubscriptionBodyBase inner types declare
    // clang-format off
    struct CompareEntries;
    // clang-format on

    // SubscriptionBodyBase inner types define
    using ListHookType = ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;

    using SubscriptionType = ::Bedrock::PubSub::Subscription;

    struct CompareEntries {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mStrongSelf;
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Detail::PublisherDisconnector*>                   mDisconnector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PubSub::SubscriptionContext>>           mContext;
    ::ll::TypedStorage<4, 4, int>                                                                 mGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubscriptionBodyBase() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
