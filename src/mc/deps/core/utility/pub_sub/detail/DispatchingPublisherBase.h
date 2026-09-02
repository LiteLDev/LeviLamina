#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/detail/ThreadingPublisherBase.h"

namespace Bedrock::PubSub::Detail {

template <typename ThreadingModel, typename SubscriptionBody>
class DispatchingPublisherBase : public ThreadingPublisherBase<ThreadingModel> {
public:
    using ReturnType = SubscriptionBody::ReturnType;

    template <typename... Args>
    MCAPI void dispatch() const;

protected:
    DispatchingPublisherBase()                                    = default;
    DispatchingPublisherBase(DispatchingPublisherBase&&) noexcept = default;
};

} // namespace Bedrock::PubSub::Detail
