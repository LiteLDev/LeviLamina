#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"

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
    // vIndex: 0
    virtual ~PublisherBase() = default;

    MCAPI bool empty() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI PublisherBase(class Bedrock::PubSub::Detail::PublisherBase&& other);

    MCAPI void _clear();

    MCAPI void _insertConnection(
        std::shared_ptr<class Bedrock::PubSub::Detail::SubscriptionBodyBase> const& body,
        ::Bedrock::PubSub::ConnectPosition                                          at,
        std::optional<int>                                                          group
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Bedrock::PubSub::Detail::PublisherBase&& other);

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
