#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/block/block_events/BlockEventBlockTypeExecutor.h"

namespace BlockEvents::Detail {

template <class T0, class T1 = void>
class BlockEventPublishingExecutor : public BlockEvents::Detail::BlockEventBlockTypeExecutor {
public:
    Bedrock::PubSub::
        Publisher<void(T0&), Bedrock::PubSub::ThreadModel::SingleThreaded, Bedrock::PubSub::ReturnPolicyType::Aggregate>
            mPublisher;

    virtual ~BlockEventPublishingExecutor() = default;

    virtual ::BlockEvents::EventType getEventType() const;

    virtual void dispatch(T0& event);
};

} // namespace BlockEvents::Detail
