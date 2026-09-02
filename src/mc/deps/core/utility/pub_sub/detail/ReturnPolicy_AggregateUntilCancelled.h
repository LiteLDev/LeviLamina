#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

template <typename TReturnType>
struct ReturnPolicy_AggregateUntilCancelled {
    using ReturnType =
        std::conditional_t<std::is_default_constructible_v<TReturnType>, TReturnType, std::optional<TReturnType>>;

protected:
    ReturnType return_value_;
};

} // namespace Bedrock::PubSub::Detail
