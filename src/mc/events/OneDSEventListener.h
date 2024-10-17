#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
namespace Json { class Value; }
namespace Social::Events { class AggregationEventListener; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class OneDSEventListener : public ::Social::Events::AggregationEventListener {
public:
    // prevent constructor by default
    OneDSEventListener& operator=(OneDSEventListener const&);
    OneDSEventListener(OneDSEventListener const&);
    OneDSEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OneDSEventListener();

    // vIndex: 3
    virtual int getEventTagsFilter() const;

    // vIndex: 5
    virtual void sendEvent(class Social::Events::Event const& event);

    // vIndex: 6
    virtual void _flushEventQueue();

    // vIndex: 7
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const& event) const;

    MCAPI explicit OneDSEventListener(class Core::Path logFileName);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::vector<std::string> _buildEventPayloads(
        std::vector<class Social::Events::Event>                    events,
        std::function<void(std::string const&, std::string const&)> onEventSerialized
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    AddPartA(std::string const& eventName, class Json::Value& eventBody, int64 eventTimestamp, bool isSafetyEvent);

    MCAPI void AddPartC(class Social::Events::Event const& event, class Json::Value& eventBody);

    MCAPI bool _sendBatch();

    MCAPI void _sendEvents(std::string const& eventPayload, std::string const& endpoint);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Core::Path logFileName);

    MCAPI void dtor$();

    MCAPI bool _checkAgainstEventAllowlist$(class Social::Events::Event const& event) const;

    MCAPI void _flushEventQueue$();

    MCAPI int getEventTagsFilter$() const;

    MCAPI void sendEvent$(class Social::Events::Event const& event);

    MCAPI static std::string const& ENDPOINT_IDENTIFIER();

    MCAPI static std::string const& ONEDS_URL();

    MCAPI static std::string const& PARTA_IDENTIFIER();

    MCAPI static std::string const& SAFETY_ENDPOINT_IDENTIFIER();

    MCAPI static std::string const& SAFETY_PARTA_IDENTIFIER();

    // NOLINTEND
};

}; // namespace Social::Events
