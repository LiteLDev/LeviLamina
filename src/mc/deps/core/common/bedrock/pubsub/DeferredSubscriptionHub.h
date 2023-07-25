#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class DeferredSubscriptionHub {
public:
    // DeferredSubscriptionHub inner types declare
    // clang-format off

    // clang-format on

    // DeferredSubscriptionHub inner types define
    enum class HubType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DEFERREDSUBSCRIPTIONHUB
public:
    DeferredSubscriptionHub& operator=(DeferredSubscriptionHub const&) = delete;
    DeferredSubscriptionHub(DeferredSubscriptionHub const&)            = delete;
    DeferredSubscriptionHub()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?makePriorityHub\@DeferredSubscriptionHub\@PubSub\@Bedrock\@\@SA?AV?$unique_ptr\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@U?$default_delete\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();
};

}; // namespace Bedrock::PubSub
