#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/detail/FastDispatchPublisherBase_MultiThreaded.h"
#include "mc/deps/core/utility/pub_sub/detail/FastDispatchPublisherBase_SingleThreaded.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

namespace Bedrock::PubSub::Detail {

template <typename ThreadModel>
struct FastDispatchBaseSelector;

template <>
struct FastDispatchBaseSelector<ThreadModel::SingleThreaded> {
    using type = FastDispatchPublisherBase_SingleThreaded;
};

template <>
struct FastDispatchBaseSelector<ThreadModel::MultiThreaded> {
    using type = FastDispatchPublisherBase_MultiThreaded;
};

template <typename ThreadModel>
using FastDispatchPublisherBase = FastDispatchBaseSelector<ThreadModel>::type;

template <typename ThreadingModel>
class ThreadingPublisherBase : public FastDispatchPublisherBase<ThreadingModel> {
protected:
    void _disconnect(SubscriptionBodyBase&) override;
};

} // namespace Bedrock::PubSub::Detail
