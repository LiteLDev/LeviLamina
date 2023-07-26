#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { enum class ConnectPosition; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class PublisherBase {

public:
    // prevent constructor by default
    PublisherBase& operator=(PublisherBase const&) = delete;
    PublisherBase(PublisherBase const&)            = delete;

public:
    /**
     * @symbol ?empty\@PublisherBase\@Detail\@PubSub\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool empty() const; // NOLINT

    // protected:
    /**
     * @symbol ??0PublisherBase\@Detail\@PubSub\@Bedrock\@\@IEAA\@XZ
     */
    MCAPI PublisherBase(); // NOLINT
    /**
     * @symbol ?_clear\@PublisherBase\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _clear(); // NOLINT
    /**
     * @symbol
     * ?_insertConnection\@PublisherBase\@Detail\@PubSub\@Bedrock\@\@IEAAXAEBV?$shared_ptr\@VSubscriptionBodyBase\@Detail\@PubSub\@Bedrock\@\@\@std\@\@W4ConnectPosition\@34\@V?$optional\@H\@6\@\@Z
     */
    MCAPI void
    _insertConnection(class std::shared_ptr<class Bedrock::PubSub::Detail::SubscriptionBodyBase> const&, enum class Bedrock::PubSub::ConnectPosition, class std::optional<int>); // NOLINT

protected:
};

}; // namespace Bedrock::PubSub::Detail
