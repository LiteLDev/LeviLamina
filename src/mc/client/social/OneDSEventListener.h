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
    // vIndex: 0, symbol: ??1OneDSEventListener@Events@Social@@UEAA@XZ
    virtual ~OneDSEventListener();

    // vIndex: 3, symbol: ?getEventTagsFilter@OneDSEventListener@Events@Social@@UEBAHXZ
    virtual int getEventTagsFilter() const;

    // vIndex: 5, symbol: ?sendEvent@OneDSEventListener@Events@Social@@UEAAXAEBVEvent@23@@Z
    virtual void sendEvent(class Social::Events::Event const& event);

    // vIndex: 6, symbol: ?_flushEventQueue@OneDSEventListener@Events@Social@@MEAAXXZ
    virtual void _flushEventQueue();

    // vIndex: 7, symbol: ?_checkAgainstEventAllowlist@OneDSEventListener@Events@Social@@MEBA_NAEBVEvent@23@@Z
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const& event) const;

    // symbol: ??0OneDSEventListener@Events@Social@@QEAA@VPath@Core@@@Z
    MCAPI explicit OneDSEventListener(class Core::Path logFileName);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_buildEventPayloads@OneDSEventListener@Events@Social@@IEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$vector@VEvent@Events@Social@@V?$allocator@VEvent@Events@Social@@@std@@@5@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z@5@@Z
    MCAPI std::vector<std::string>
        _buildEventPayloads(std::vector<class Social::Events::Event>, std::function<void(std::string const&, std::string const&)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddPartA@OneDSEventListener@Events@Social@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@_J_N@Z
    MCAPI void AddPartA(std::string const&, class Json::Value&, int64, bool);

    // symbol: ?AddPartC@OneDSEventListener@Events@Social@@AEAAXAEBVEvent@23@AEAVValue@Json@@@Z
    MCAPI void AddPartC(class Social::Events::Event const& event, class Json::Value&);

    // symbol: ?_sendBatch@OneDSEventListener@Events@Social@@AEAA_NXZ
    MCAPI bool _sendBatch();

    // symbol:
    // ?_sendEvents@OneDSEventListener@Events@Social@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void _sendEvents(std::string const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ENDPOINT_IDENTIFIER@OneDSEventListener@Events@Social@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ENDPOINT_IDENTIFIER;

    // symbol:
    // ?ONEDS_URL@OneDSEventListener@Events@Social@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ONEDS_URL;

    // symbol:
    // ?PARTA_IDENTIFIER@OneDSEventListener@Events@Social@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PARTA_IDENTIFIER;

    // symbol:
    // ?SAFETY_ENDPOINT_IDENTIFIER@OneDSEventListener@Events@Social@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SAFETY_ENDPOINT_IDENTIFIER;

    // symbol:
    // ?SAFETY_PARTA_IDENTIFIER@OneDSEventListener@Events@Social@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SAFETY_PARTA_IDENTIFIER;

    // NOLINTEND
};

}; // namespace Social::Events
