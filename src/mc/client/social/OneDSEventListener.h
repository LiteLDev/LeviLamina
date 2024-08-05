#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/AggregationEventListener.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

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
    MCAPI std::vector<std::string>
        _buildEventPayloads(std::vector<class Social::Events::Event>, std::function<void(std::string const&, std::string const&)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void AddPartA(std::string const&, class Json::Value&, int64, bool);

    MCAPI void AddPartC(class Social::Events::Event const& event, class Json::Value&);

    MCAPI bool _sendBatch();

    MCAPI void _sendEvents(std::string const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const ENDPOINT_IDENTIFIER;

    MCAPI static std::string const ONEDS_URL;

    MCAPI static std::string const PARTA_IDENTIFIER;

    MCAPI static std::string const SAFETY_ENDPOINT_IDENTIFIER;

    MCAPI static std::string const SAFETY_PARTA_IDENTIFIER;

    // NOLINTEND
};

}; // namespace Social::Events
