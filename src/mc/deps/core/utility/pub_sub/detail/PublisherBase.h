#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list.h"
#include "mc/deps/core/container/list_base_hook.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class PublisherBase : public ::Bedrock::PubSub::Detail::PublisherDisconnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk43b2a1;
    ::ll::UntypedStorage<4, 4>  mUnk1135b7;
    // NOLINTEND

public:
    // prevent constructor by default
    PublisherBase& operator=(PublisherBase const&);
    PublisherBase(PublisherBase const&);
    PublisherBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PublisherBase() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clear();

    MCNAPI void _insertConnection(
        ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase> const& body,
        ::Bedrock::PubSub::ConnectPosition                                        at,
        ::std::optional<int>                                                      group
    );
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
