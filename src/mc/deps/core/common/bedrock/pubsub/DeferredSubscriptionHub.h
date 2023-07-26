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

public:
    // prevent constructor by default
    DeferredSubscriptionHub& operator=(DeferredSubscriptionHub const&) = delete;
    DeferredSubscriptionHub(DeferredSubscriptionHub const&)            = delete;
    DeferredSubscriptionHub()                                          = delete;

public:
    /**
     * @symbol
     * ?makePriorityHub\@DeferredSubscriptionHub\@PubSub\@Bedrock\@\@SA?AV?$unique_ptr\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@U?$default_delete\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub(); // NOLINT
};

}; // namespace Bedrock::PubSub
