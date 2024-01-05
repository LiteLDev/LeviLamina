#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/ConnectPosition.h"
#include "mc/deps/core/common/bedrock/pubsub/PublisherDisconnector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class PublisherDisconnector; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class PublisherBase : public ::Bedrock::PubSub::Detail::PublisherDisconnector {
public:
    // prevent constructor by default
    PublisherBase& operator=(PublisherBase const&);
    PublisherBase(PublisherBase const&);
    PublisherBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PublisherBase@Detail@PubSub@Bedrock@@UEAA@XZ
    virtual ~PublisherBase() = default;

    // symbol: ?empty@PublisherBase@Detail@PubSub@Bedrock@@QEBA_NXZ
    MCAPI bool empty() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_clear@PublisherBase@Detail@PubSub@Bedrock@@IEAAXXZ
    MCAPI void _clear();

    // symbol:
    // ?_insertConnection@PublisherBase@Detail@PubSub@Bedrock@@IEAAXAEBV?$shared_ptr@VSubscriptionBodyBase@Detail@PubSub@Bedrock@@@std@@W4ConnectPosition@34@V?$optional@H@6@@Z
    MCAPI void _insertConnection(
        std::shared_ptr<class Bedrock::PubSub::Detail::SubscriptionBodyBase> const& body,
        ::Bedrock::PubSub::ConnectPosition                                          at,
        std::optional<int>                                                          group
    );

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
