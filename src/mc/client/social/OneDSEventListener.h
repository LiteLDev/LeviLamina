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
namespace Social::Events { class Event; }
namespace Social::Events { class SummaryEvent; }
// clang-format on

namespace Social::Events {

class OneDSEventListener : public ::Social::Events::AggregationEventListener {

public:
    // prevent constructor by default
    OneDSEventListener& operator=(OneDSEventListener const&) = delete;
    OneDSEventListener(OneDSEventListener const&)            = delete;
    OneDSEventListener()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol
     * ?recordSummaryEvent\@OneDSEventListener\@Events\@Social\@\@UEAAXAEBVSummaryEvent\@23\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void
    recordSummaryEvent(class Social::Events::SummaryEvent const&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);
    /**
     * @vftbl 4
     * @symbol ?getEventTagsFilter\@OneDSEventListener\@Events\@Social\@\@UEBAHXZ
     */
    virtual int getEventTagsFilter() const;
    /**
     * @vftbl 6
     * @symbol ?sendEvent\@OneDSEventListener\@Events\@Social\@\@UEAAXAEBVEvent\@23\@\@Z
     */
    virtual void sendEvent(class Social::Events::Event const&);
    /**
     * @vftbl 7
     * @symbol ?_flushEventQueue\@OneDSEventListener\@Events\@Social\@\@MEAAXXZ
     */
    virtual void _flushEventQueue();
    /**
     * @vftbl 8
     * @symbol ?_checkAgainstEventAllowlist\@OneDSEventListener\@Events\@Social\@\@MEBA_NAEBVEvent\@23\@\@Z
     */
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const&) const;
    /**
     * @symbol ??0OneDSEventListener\@Events\@Social\@\@QEAA\@VPath\@Core\@\@\@Z
     */
    MCAPI OneDSEventListener(class Core::Path);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?AddPartA\@OneDSEventListener\@Events\@Social\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@_N\@Z
     */
    MCAPI void AddPartA(std::string const&, class Json::Value&, bool);
    /**
     * @symbol ?AddPartC\@OneDSEventListener\@Events\@Social\@\@AEAAXAEBVSummaryEvent\@23\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI void AddPartC(class Social::Events::SummaryEvent const&, class Json::Value&);
    /**
     * @symbol ?AddPartC\@OneDSEventListener\@Events\@Social\@\@AEAAXAEBVEvent\@23\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI void AddPartC(class Social::Events::Event const&, class Json::Value&);
    /**
     * @symbol ?_sendBatch\@OneDSEventListener\@Events\@Social\@\@AEAA_NXZ
     */
    MCAPI bool _sendBatch();
    /**
     * @symbol
     * ?_sendEvents\@OneDSEventListener\@Events\@Social\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void _sendEvents(std::string const&, std::string const&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?ENDPOINT_IDENTIFIER\@OneDSEventListener\@Events\@Social\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENDPOINT_IDENTIFIER;
    /**
     * @symbol
     * ?ONEDS_URL\@OneDSEventListener\@Events\@Social\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ONEDS_URL;
    /**
     * @symbol
     * ?PARTA_IDENTIFIER\@OneDSEventListener\@Events\@Social\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PARTA_IDENTIFIER;
    /**
     * @symbol
     * ?SAFETY_ENDPOINT_IDENTIFIER\@OneDSEventListener\@Events\@Social\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SAFETY_ENDPOINT_IDENTIFIER;
    /**
     * @symbol
     * ?SAFETY_PARTA_IDENTIFIER\@OneDSEventListener\@Events\@Social\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SAFETY_PARTA_IDENTIFIER;
    // NOLINTEND
};

}; // namespace Social::Events
