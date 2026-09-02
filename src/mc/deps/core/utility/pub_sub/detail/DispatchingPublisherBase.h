#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/detail/ThreadingPublisherBase.h"

namespace Bedrock::PubSub::Detail {

template <typename ThreadingModel, typename SubscriptionBody>
class DispatchingPublisherBase : public ThreadingPublisherBase<ThreadingModel> {
    using ReturnType = SubscriptionBody::ReturnType;

protected:
    DispatchingPublisherBase()                                    = default;
    DispatchingPublisherBase(DispatchingPublisherBase&&) noexcept = default;
};

} // namespace Bedrock::PubSub::Detail
