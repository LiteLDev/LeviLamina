#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHub.h"
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHubBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub { enum class ConnectPosition; }
// clang-format on

namespace Bedrock::PubSub {

class PriorityDeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // PriorityDeferredSubscriptionHub inner types declare
    // clang-format off
    struct DequeuedEntry;
    struct QueueEntry;
    // clang-format on

    // PriorityDeferredSubscriptionHub inner types define
    struct DequeuedEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_PRIORITYDEFERREDSUBSCRIPTIONHUB_DEQUEUEDENTRY
    public:
        DequeuedEntry& operator=(DequeuedEntry const&) = delete;
        DequeuedEntry(DequeuedEntry const&)            = delete;
        DequeuedEntry()                                = delete;
#endif

    public:
        /**
         * @symbol ??1DequeuedEntry\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~DequeuedEntry();
    };

    struct QueueEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_PRIORITYDEFERREDSUBSCRIPTIONHUB_QUEUEENTRY
    public:
        QueueEntry& operator=(QueueEntry const&) = delete;
        QueueEntry(QueueEntry const&)            = delete;
        QueueEntry()                             = delete;
#endif

    public:
        /**
         * @symbol ??1QueueEntry\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~QueueEntry();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_PRIORITYDEFERREDSUBSCRIPTIONHUB
public:
    PriorityDeferredSubscriptionHub& operator=(PriorityDeferredSubscriptionHub const&) = delete;
    PriorityDeferredSubscriptionHub(PriorityDeferredSubscriptionHub const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?flushPendingEvents\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@UEAAXXZ
     */
    virtual void flushPendingEvents();
    /**
     * @vftbl 8
     * @symbol
     * ?getHubType\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@UEBA?AW4HubType\@DeferredSubscriptionHub\@23\@XZ
     */
    virtual enum class Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;
    /**
     * @vftbl 10
     * @symbol
     * ?_enqueue\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@EEAAXV?$function\@$$A6AXXZ\@std\@\@W4ConnectPosition\@23\@V?$optional\@H\@5\@\@Z
     */
    virtual void
        _enqueue(class std::function<void(void)>, enum class Bedrock::PubSub::ConnectPosition, class std::optional<int>);
    /**
     * @vftbl 11
     * @symbol ?_runOneEvent\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@EEAA_NXZ
     */
    virtual bool _runOneEvent();
    /**
     * @vftbl 12
     * @symbol ?_runDequeuedEntry\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@MEAAXAEBUDequeuedEntry\@123\@\@Z
     */
    virtual void _runDequeuedEntry(struct Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const&);
    /**
     * @symbol ??0PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI PriorityDeferredSubscriptionHub();
};

}; // namespace Bedrock::PubSub
