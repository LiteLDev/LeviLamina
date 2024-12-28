#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mBody;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionBase& operator=(SubscriptionBase const&);
    SubscriptionBase(SubscriptionBase const&);
    SubscriptionBase();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void disconnect();

    MCAPI void disconnect_async();

    MCAPI bool operator==(::Bedrock::PubSub::SubscriptionBase const& other) const;
    // NOLINTEND
};

} // namespace Bedrock::PubSub
