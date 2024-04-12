#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/IEventListener.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

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
    // vIndex: 0, symbol: ??1AggregationEventListener@Events@Social@@UEAA@XZ
    virtual ~AggregationEventListener();

    // vIndex: 1, symbol:
    // ?recordEvent@AggregationEventListener@Events@Social@@UEAAXAEBVEvent@23@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void recordEvent(
        class Social::Events::Event const&                       event,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform
    );

    // vIndex: 2, symbol: ?sendEvents@AggregationEventListener@Events@Social@@UEAAX_N@Z
    virtual void sendEvents(bool forceSend);

    // vIndex: 4, symbol: ?stopDebugEventLogging@AggregationEventListener@Events@Social@@UEAAXXZ
    virtual void stopDebugEventLogging();

    // vIndex: 5, symbol: ?sendEvent@OneDSEventListener@Events@Social@@UEAAXAEBVEvent@23@@Z
    virtual void sendEvent(class Social::Events::Event const& event) = 0;

    // vIndex: 6, symbol: ?_flushEventQueue@AggregationEventListener@Events@Social@@MEAAXXZ
    virtual void _flushEventQueue();

    // vIndex: 7, symbol: ?_checkAgainstEventAllowlist@AggregationEventListener@Events@Social@@MEBA_NAEBVEvent@23@@Z
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const& event) const;

    // vIndex: 8, symbol: ?_isListenerReadyForEvents@AggregationEventListener@Events@Social@@MEBA_NXZ
    virtual bool _isListenerReadyForEvents() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0AggregationEventListener@Events@Social@@IEAA@AEBVPath@Core@@@Z
    MCAPI explicit AggregationEventListener(class Core::Path const& logFileName);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_needToSendAggregatedEvents@AggregationEventListener@Events@Social@@AEBA_NXZ
    MCAPI bool _needToSendAggregatedEvents() const;

    // symbol:
    // ?_recordAggregatedEvent@AggregationEventListener@Events@Social@@AEAAXAEBVEvent@23@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@2@@std@@@2@@std@@@Z
    MCAPI void _recordAggregatedEvent(
        class Social::Events::Event const&                                        event,
        std::unordered_map<std::string, std::deque<class Social::Events::Event>>& eventQueue
    );

    // symbol: ?_sendCustomAggregatedEvents@AggregationEventListener@Events@Social@@AEAAX_N@Z
    MCAPI void _sendCustomAggregatedEvents(bool forceSend);

    // symbol:
    // ?_sendEvents@AggregationEventListener@Events@Social@@AEAAXAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@2@@std@@@2@@std@@@Z
    MCAPI void _sendEvents(std::unordered_map<std::string, std::deque<class Social::Events::Event>>&);

    // symbol:
    // ?_sendNextEvent@AggregationEventListener@Events@Social@@AEAAXAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@2@@std@@@2@@std@@@Z
    MCAPI void _sendNextEvent(std::unordered_map<std::string, std::deque<class Social::Events::Event>>&);

    // NOLINTEND
};

}; // namespace Social::Events
