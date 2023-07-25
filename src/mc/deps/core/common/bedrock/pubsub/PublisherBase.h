#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { enum class ConnectPosition; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class PublisherBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DETAIL_PUBLISHERBASE
public:
    PublisherBase& operator=(PublisherBase const&) = delete;
    PublisherBase(PublisherBase const&)            = delete;
#endif

public:
    /**
     * @symbol ?empty\@PublisherBase\@Detail\@PubSub\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;

    // protected:
    /**
     * @symbol ??0PublisherBase\@Detail\@PubSub\@Bedrock\@\@IEAA\@XZ
     */
    MCAPI PublisherBase();
    /**
     * @symbol ?_clear\@PublisherBase\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _clear();
    /**
     * @symbol
     * ?_insertConnection\@PublisherBase\@Detail\@PubSub\@Bedrock\@\@IEAAXAEBV?$shared_ptr\@VSubscriptionBodyBase\@Detail\@PubSub\@Bedrock\@\@\@std\@\@W4ConnectPosition\@34\@V?$optional\@H\@6\@\@Z
     */
    MCAPI void
    _insertConnection(class std::shared_ptr<class Bedrock::PubSub::Detail::SubscriptionBodyBase> const&, enum class Bedrock::PubSub::ConnectPosition, class std::optional<int>);

protected:
};

}; // namespace Bedrock::PubSub::Detail
