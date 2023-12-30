#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCStats; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCStatsReport {
public:
    // RTCStatsReport inner types declare
    // clang-format off
    class ConstIterator;
    // clang-format on

    // RTCStatsReport inner types define
    class ConstIterator {
    public:
        // prevent constructor by default
        ConstIterator& operator=(ConstIterator const&);
        ConstIterator(ConstIterator const&);
        ConstIterator();

    public:
        // NOLINTBEGIN
        // symbol: ??9ConstIterator@RTCStatsReport@webrtc@@QEBA_NAEBV012@@Z
        MCAPI bool operator!=(class webrtc::RTCStatsReport::ConstIterator const&) const;

        // symbol: ??DConstIterator@RTCStatsReport@webrtc@@QEBAAEBVRTCStats@2@XZ
        MCAPI class webrtc::RTCStats const& operator*() const;

        // symbol: ??EConstIterator@RTCStatsReport@webrtc@@QEAAAEAV012@XZ
        MCAPI class webrtc::RTCStatsReport::ConstIterator& operator++();

        // symbol: ??CConstIterator@RTCStatsReport@webrtc@@QEBAPEBVRTCStats@2@XZ
        MCAPI class webrtc::RTCStats const* operator->() const;

        // symbol: ??8ConstIterator@RTCStatsReport@webrtc@@QEBA_NAEBV012@@Z
        MCAPI bool operator==(class webrtc::RTCStatsReport::ConstIterator const&) const;

        // symbol: ??1ConstIterator@RTCStatsReport@webrtc@@QEAA@XZ
        MCAPI ~ConstIterator();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ??0ConstIterator@RTCStatsReport@webrtc@@AEAA@AEBV?$scoped_refptr@$$CBVRTCStatsReport@webrtc@@@rtc@@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@$$CBVRTCStats@webrtc@@U?$default_delete@$$CBVRTCStats@webrtc@@@std@@@2@@std@@@std@@@std@@@std@@@Z
        MCAPI
        ConstIterator(class rtc::scoped_refptr<class webrtc::RTCStatsReport const> const&, std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const, std::unique_ptr<class webrtc::RTCStats const>>>>>);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTCStatsReport& operator=(RTCStatsReport const&);
    RTCStatsReport(RTCStatsReport const&);
    RTCStatsReport();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddStats@RTCStatsReport@webrtc@@QEAAXV?$unique_ptr@$$CBVRTCStats@webrtc@@U?$default_delete@$$CBVRTCStats@webrtc@@@std@@@std@@@Z
    MCAPI void AddStats(std::unique_ptr<class webrtc::RTCStats const>);

    // symbol: ?Copy@RTCStatsReport@webrtc@@QEBA?AV?$scoped_refptr@VRTCStatsReport@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::RTCStatsReport> Copy() const;

    // symbol:
    // ?Get@RTCStatsReport@webrtc@@QEBAPEBVRTCStats@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class webrtc::RTCStats const* Get(std::string const&) const;

    // symbol: ??0RTCStatsReport@webrtc@@QEAA@VTimestamp@1@@Z
    MCAPI explicit RTCStatsReport(class webrtc::Timestamp);

    // symbol:
    // ?Take@RTCStatsReport@webrtc@@QEAA?AV?$unique_ptr@$$CBVRTCStats@webrtc@@U?$default_delete@$$CBVRTCStats@webrtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::unique_ptr<class webrtc::RTCStats const> Take(std::string const&);

    // symbol: ?TakeMembersFrom@RTCStatsReport@webrtc@@QEAAXV?$scoped_refptr@VRTCStatsReport@webrtc@@@rtc@@@Z
    MCAPI void TakeMembersFrom(class rtc::scoped_refptr<class webrtc::RTCStatsReport>);

    // symbol: ?ToJson@RTCStatsReport@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToJson() const;

    // symbol: ?begin@RTCStatsReport@webrtc@@QEBA?AVConstIterator@12@XZ
    MCAPI class webrtc::RTCStatsReport::ConstIterator begin() const;

    // symbol: ?end@RTCStatsReport@webrtc@@QEBA?AVConstIterator@12@XZ
    MCAPI class webrtc::RTCStatsReport::ConstIterator end() const;

    // symbol: ?Create@RTCStatsReport@webrtc@@SA?AV?$scoped_refptr@VRTCStatsReport@webrtc@@@rtc@@VTimestamp@2@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::RTCStatsReport> Create(class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
