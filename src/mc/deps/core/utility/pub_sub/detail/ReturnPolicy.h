#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/detail/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/detail/ReturnPolicy_AggregateUntilCancelled.h"
#include "mc/deps/core/utility/pub_sub/detail/ReturnPolicy_NoReturn.h"

namespace Bedrock::PubSub::Detail {

template <typename ReturnType, ReturnPolicyType PolicyType>
struct ReturnPolicy;

template <typename ReturnType>
struct ReturnPolicy<ReturnType, ReturnPolicyType::Aggregate> : ReturnPolicy_AggregateUntilCancelled<ReturnType> {};

template <>
struct ReturnPolicy<void, ReturnPolicyType::Aggregate> : ReturnPolicy_NoReturn {};

} // namespace Bedrock::PubSub::Detail
