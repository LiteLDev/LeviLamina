#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class DeferredSubscriptionHub {
public:
    // DeferredSubscriptionHub inner types define
    enum class HubType {};

public:
    // prevent constructor by default
    DeferredSubscriptionHub& operator=(DeferredSubscriptionHub const&) = delete;
    DeferredSubscriptionHub(DeferredSubscriptionHub const&)            = delete;
    DeferredSubscriptionHub()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?makePriorityHub\@DeferredSubscriptionHub\@PubSub\@Bedrock\@\@SA?AV?$unique_ptr\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@U?$default_delete\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();
    // NOLINTEND
};

}; // namespace Bedrock::PubSub
