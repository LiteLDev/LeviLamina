#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub { enum class ConnectPosition; }
// clang-format on

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?runDeferredEvents\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAA_K_K\@Z
     */
    virtual uint64_t runDeferredEvents(uint64_t) = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?runDeferredEventsForDuration\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAA_KV?$duration\@_JU?$ratio\@$00$0DOI\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual uint64_t runDeferredEventsForDuration(std::chrono::milliseconds) = 0;
    /**
     * @vftbl 3
     * @symbol ?flushPendingEvents\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@UEAAXXZ
     */
    virtual void flushPendingEvents() = 0;
    /**
     * @vftbl 4
     * @symbol ?clear\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAAXXZ
     */
    virtual void clear() = 0;
    /**
     * @vftbl 5
     * @symbol ?erase\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAA_KAEAVRawSubscription\@23\@\@Z
     */
    virtual uint64_t erase(class Bedrock::PubSub::RawSubscription&) = 0;
    /**
     * @vftbl 6
     * @symbol ?size\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEBA_KXZ
     */
    virtual uint64_t size() const = 0;
    /**
     * @vftbl 7
     * @symbol ?empty\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEBA_NXZ
     */
    virtual bool empty() const = 0;
    /**
     * @vftbl 8
     * @symbol
     * ?getHubType\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@UEBA?AW4HubType\@DeferredSubscriptionHub\@23\@XZ
     */
    virtual enum class Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;
    /**
     * @vftbl 9
     * @symbol ?_join\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@EEAAX$$QEAVDeferredSubscription\@23\@\@Z
     */
    virtual void _join(class Bedrock::PubSub::DeferredSubscription&&) = 0;
    /**
     * @vftbl 10
     * @symbol
     * ?_enqueue\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@EEAAXV?$function\@$$A6AXXZ\@std\@\@W4ConnectPosition\@23\@V?$optional\@H\@5\@\@Z
     */
    virtual void
        _enqueue(std::function<void(void)>, enum class Bedrock::PubSub::ConnectPosition, std::optional<int>) = 0;
    /**
     * @symbol
     * ?makePriorityHub\@DeferredSubscriptionHub\@PubSub\@Bedrock\@\@SA?AV?$unique_ptr\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@U?$default_delete\@VDeferredSubscriptionHub\@PubSub\@Bedrock\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();
    // NOLINTEND
};

}; // namespace Bedrock::PubSub
