#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHub {
public:
    // DeferredSubscriptionHub inner types define
    enum class HubType : int {
        Priority      = 0,
        Fifo          = 1,
        RecursiveFIFO = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredSubscriptionHub() = default;

    virtual uint64 runDeferredEvents(uint64) = 0;

    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds) = 0;

    virtual void flushPendingEvents() = 0;

    virtual void clear() = 0;

    virtual uint64 erase(::Bedrock::PubSub::RawSubscription&) = 0;

    virtual uint64 size() const = 0;

    virtual bool empty() const = 0;

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;

    virtual void _join(::Bedrock::PubSub::DeferredSubscription&&) = 0;

    virtual void _enqueue(::std::function<void()>, ::Bedrock::PubSub::ConnectPosition, ::std::optional<int>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
