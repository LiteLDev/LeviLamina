#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/SubscriptionContext.h"
#include "mc/platform/brstd/move_only_function.h"


namespace Bedrock::PubSub {

using ContextType = std::unique_ptr<SubscriptionContext>;

template <typename Signature>
class Connector {
public:
    using FunctionType = brstd::move_only_function<Signature>;

    template <typename Fn>
    Subscription connect(Fn const& fn, ConnectPosition at, ContextType&& context) {
        return _connectInternal(fn, at, std::move(context), std::nullopt);
    }

protected:
    Connector()          = default;
    virtual ~Connector() = default;

private:
    virtual Subscription
    _connectInternal(FunctionType&& fn, ConnectPosition at, ContextType&& context, std::optional<int> group) = 0;
};

} // namespace Bedrock::PubSub
