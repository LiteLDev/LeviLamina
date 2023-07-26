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

class MaelstromEventLogger : public ::Social::Events::AggregationEventListener {

public:
    // prevent constructor by default
    MaelstromEventLogger& operator=(MaelstromEventLogger const&) = delete;
    MaelstromEventLogger(MaelstromEventLogger const&)            = delete;
    MaelstromEventLogger()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getEventTagsFilter\@MaelstromEventLogger\@Events\@Social\@\@UEBAHXZ
     */
    virtual int getEventTagsFilter() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?sendEvent\@MaelstromEventLogger\@Events\@Social\@\@UEAAXAEBVEvent\@23\@\@Z
     */
    virtual void sendEvent(class Social::Events::Event const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?_flushEventQueue\@MaelstromEventLogger\@Events\@Social\@\@MEAAXXZ
     */
    virtual void _flushEventQueue(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?_checkAgainstEventAllowlist\@MaelstromEventLogger\@Events\@Social\@\@MEBA_NAEBVEvent\@23\@\@Z
     */
    virtual bool _checkAgainstEventAllowlist(class Social::Events::Event const&) const; // NOLINT
    /**
     * @symbol
     * ??0MaelstromEventLogger\@Events\@Social\@\@QEAA\@VPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI MaelstromEventLogger(class Core::Path, std::string const&); // NOLINT

    // private:
    /**
     * @symbol ?_sendBatch\@MaelstromEventLogger\@Events\@Social\@\@AEAA_NXZ
     */
    MCAPI bool _sendBatch(); // NOLINT
    /**
     * @symbol ?_storeEventInBatch\@MaelstromEventLogger\@Events\@Social\@\@AEAAXAEBVEvent\@23\@\@Z
     */
    MCAPI void _storeEventInBatch(class Social::Events::Event const&); // NOLINT
    /**
     * @symbol
     * ?getMaelstromEventBody\@MaelstromEventLogger\@Events\@Social\@\@AEAA?AVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@1\@Z
     */
    MCAPI class Json::Value
    getMaelstromEventBody(std::string const&, class Json::Value const&, class Json::Value const&); // NOLINT

private:
};

}; // namespace Social::Events
