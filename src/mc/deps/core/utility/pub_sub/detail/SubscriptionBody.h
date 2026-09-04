#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/detail/ReturnPolicy.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBodyBase.h"
#include "mc/platform/brstd/move_only_function.h"


namespace Bedrock::PubSub::Detail {

template <typename Signature, ReturnPolicyType PolicyType>
class SubscriptionBody;

template <typename Return, typename... Xs, ReturnPolicyType PolicyType>
class SubscriptionBody<Return(Xs...), PolicyType> : public SubscriptionBodyBase {
public:
    using ReturnPolicy = ReturnPolicy<Return, PolicyType>;
    using ReturnType   = typename ReturnPolicy::ReturnType;
    using FunctionType = brstd::move_only_function<ReturnType(Xs...)>;

protected:
    FunctionType function_; // +64
};

} // namespace Bedrock::PubSub::Detail
