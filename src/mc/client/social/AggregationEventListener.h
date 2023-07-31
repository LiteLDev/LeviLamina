#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
namespace Social::Events { class Event; }
namespace Social::Events { class SummaryEvent; }
// clang-format on

namespace Social::Events {

class AggregationEventListener {

public:
    // prevent constructor by default
    AggregationEventListener& operator=(AggregationEventListener const&) = delete;
    AggregationEventListener(AggregationEventListener const&)            = delete;
    AggregationEventListener()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?recordEvent\@AggregationEventListener\@Events\@Social\@\@UEAAXAEBVEvent\@23\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void
    recordEvent(class Social::Events::Event const&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);
    /**
     * @vftbl 2
     * @symbol
     * ?recordSummaryEvent\@OneDSEventListener\@Events\@Social\@\@UEAAXAEBVSummaryEvent\@23\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void
    recordSummaryEvent(class Social::Events::SummaryEvent const&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);
    /**
     * @vftbl 3
     * @symbol ?sendEvents\@AggregationEventListener\@Events\@Social\@\@UEAAX_N\@Z
     */
    virtual void sendEvents(bool);
    /**
     * @vftbl 4
     * @symbol ?getEventTagsFilter\@OneDSEventListener\@Events\@Social\@\@UEBAHXZ
     */
    virtual int getEventTagsFilter() const = 0;
    /**
     * @vftbl 5
     * @symbol ?stopDebugEventLogging\@AggregationEventListener\@Events\@Social\@\@UEAAXXZ
     */
    virtual void stopDebugEventLogging();
    /**
     * @vftbl 6
     * @symbol ?sendEvent\@OneDSEventListener\@Events\@Social\@\@UEAAXAEBVEvent\@23\@\@Z
     */
    virtual void sendEvent(class Social::Events::Event const&) = 0;
    /**
     * @vftbl 7
     * @symbol ?_flushEventQueue\@AggregationEventListener\@Events\@Social\@\@MEAAXXZ
     */
    virtual void _flushEventQueue();
    /**
     * @vftbl 8
     * @symbol ?_checkAgainstEventAllowlist\@AggregationEventListener\@Events\@Social\@\@MEBA_NAEBVEvent\@23\@\@Z
     */
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const&) const;
    /**
     * @vftbl 9
     * @symbol ?_isListenerReadyForEvents\@AggregationEventListener\@Events\@Social\@\@MEBA_NXZ
     */
    virtual bool _isListenerReadyForEvents() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_EVENTS_AGGREGATIONEVENTLISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AggregationEventListener();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0AggregationEventListener\@Events\@Social\@\@IEAA\@IIIAEBVPath\@Core\@\@\@Z
     */
    MCAPI AggregationEventListener(unsigned int, unsigned int, unsigned int, class Core::Path const&);
    /**
     * @symbol ??0AggregationEventListener\@Events\@Social\@\@IEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI AggregationEventListener(class Core::Path const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_needToSendAggregatedEvents\@AggregationEventListener\@Events\@Social\@\@AEBA_NXZ
     */
    MCAPI bool _needToSendAggregatedEvents() const;
    /**
     * @symbol
     * ?_recordAggregatedEvent\@AggregationEventListener\@Events\@Social\@\@AEAAXAEBVEvent\@23\@AEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$deque\@VEvent\@Events\@Social\@\@V?$allocator\@VEvent\@Events\@Social\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$deque\@VEvent\@Events\@Social\@\@V?$allocator\@VEvent\@Events\@Social\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
    _recordAggregatedEvent(class Social::Events::Event const&, std::unordered_map<std::string, std::deque<class Social::Events::Event>>&);
    /**
     * @symbol ?_sendCustomAggregatedEvents\@AggregationEventListener\@Events\@Social\@\@AEAAX_N\@Z
     */
    MCAPI void _sendCustomAggregatedEvents(bool);
    /**
     * @symbol
     * ?_sendEvents\@AggregationEventListener\@Events\@Social\@\@AEAAXAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$deque\@VEvent\@Events\@Social\@\@V?$allocator\@VEvent\@Events\@Social\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$deque\@VEvent\@Events\@Social\@\@V?$allocator\@VEvent\@Events\@Social\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendEvents(std::unordered_map<std::string, std::deque<class Social::Events::Event>>&);
    /**
     * @symbol
     * ?_sendNextEvent\@AggregationEventListener\@Events\@Social\@\@AEAAXAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$deque\@VEvent\@Events\@Social\@\@V?$allocator\@VEvent\@Events\@Social\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$deque\@VEvent\@Events\@Social\@\@V?$allocator\@VEvent\@Events\@Social\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendNextEvent(std::unordered_map<std::string, std::deque<class Social::Events::Event>>&);
    // NOLINTEND
};

}; // namespace Social::Events
