#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"
#include "mc/platform/container/list.h"
#include "mc/platform/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class PublisherBase : public ::Bedrock::PubSub::Detail::PublisherDisconnector {
public:
    // PublisherBase inner types define
    using ConnectionList = ::Bedrock::Intrusive::list<
        ::Bedrock::PubSub::Detail::SubscriptionBodyBase,
        ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>,
        ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Intrusive::list<
            ::Bedrock::PubSub::Detail::SubscriptionBodyBase,
            ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>,
            ::Bedrock::Intrusive::list_base_hook<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>>
                                   mSubscriptions;
    ::ll::TypedStorage<4, 4, uint> mSubscriberCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PublisherBase() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _clear();

    MCAPI void _insertConnection(
        ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase> const& body,
        ::Bedrock::PubSub::ConnectPosition                                        at,
        ::std::optional<int>                                                      group
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
