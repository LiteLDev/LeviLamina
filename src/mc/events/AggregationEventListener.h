#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
namespace Social::Events { class Event; }
namespace Social::Events { class IEventListener; }
// clang-format on

namespace Social::Events {

class AggregationEventListener : public ::Social::Events::IEventListener {
public:
    // prevent constructor by default
    AggregationEventListener& operator=(AggregationEventListener const&);
    AggregationEventListener(AggregationEventListener const&);
    AggregationEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AggregationEventListener();

    // vIndex: 1
    virtual void recordEvent(
        class Social::Events::Event const&                       event,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform
    );

    // vIndex: 2
    virtual void sendEvents(bool forceSend);

    // vIndex: 4
    virtual void stopDebugEventLogging();

    // vIndex: 5
    virtual void sendEvent(class Social::Events::Event const& event) = 0;

    // vIndex: 6
    virtual void _flushEventQueue();

    // vIndex: 7
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const& event) const;

    // vIndex: 8
    virtual bool _isListenerReadyForEvents() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI explicit AggregationEventListener(class Core::Path const& logFileName);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _needToSendAggregatedEvents() const;

    MCAPI void _recordAggregatedEvent(
        class Social::Events::Event const&                                        event,
        std::unordered_map<std::string, std::deque<class Social::Events::Event>>& eventQueue
    );

    MCAPI void _sendCustomAggregatedEvents(bool forceSend);

    MCAPI void _sendEvents(std::unordered_map<std::string, std::deque<class Social::Events::Event>>& queueToSend);

    MCAPI void _sendNextEvent(std::unordered_map<std::string, std::deque<class Social::Events::Event>>& queueToSend);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Core::Path const& logFileName);

    MCAPI void dtor$();

    MCAPI bool _checkAgainstEventAllowlist$(class Social::Events::Event const& event) const;

    MCAPI void _flushEventQueue$();

    MCAPI bool _isListenerReadyForEvents$() const;

    MCAPI void recordEvent$(
        class Social::Events::Event const&                       event,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform
    );

    MCAPI void sendEvents$(bool forceSend);

    MCAPI void stopDebugEventLogging$();

    // NOLINTEND
};

}; // namespace Social::Events
