#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/SubscriptionBodyBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionBase : public ::Bedrock::PubSub::Detail::SubscriptionBodyBase {
public:
    // prevent constructor by default
    DeferredSubscriptionBase& operator=(DeferredSubscriptionBase const&);
    DeferredSubscriptionBase(DeferredSubscriptionBase const&);
    DeferredSubscriptionBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeferredSubscriptionBase@PubSub@Bedrock@@UEAA@XZ
    virtual ~DeferredSubscriptionBase() = default;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
