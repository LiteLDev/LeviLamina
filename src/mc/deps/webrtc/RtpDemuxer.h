#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpPacketSinkInterface; }
// clang-format on

namespace webrtc {

class RtpDemuxer {
public:
    // prevent constructor by default
    RtpDemuxer& operator=(RtpDemuxer const&);
    RtpDemuxer(RtpDemuxer const&);
    RtpDemuxer();

public:
    // NOLINTBEGIN
    // symbol: ?AddSink@RtpDemuxer@webrtc@@QEAA_NAEBVRtpDemuxerCriteria@2@PEAVRtpPacketSinkInterface@2@@Z
    MCAPI bool AddSink(class webrtc::RtpDemuxerCriteria const&, class webrtc::RtpPacketSinkInterface*);

    // symbol: ?OnRtpPacket@RtpDemuxer@webrtc@@QEAA_NAEBVRtpPacketReceived@2@@Z
    MCAPI bool OnRtpPacket(class webrtc::RtpPacketReceived const&);

    // symbol: ?RemoveSink@RtpDemuxer@webrtc@@QEAA_NPEBVRtpPacketSinkInterface@2@@Z
    MCAPI bool RemoveSink(class webrtc::RtpPacketSinkInterface const*);

    // symbol: ??0RtpDemuxer@webrtc@@QEAA@_N@Z
    MCAPI explicit RtpDemuxer(bool);

    // symbol: ??1RtpDemuxer@webrtc@@QEAA@XZ
    MCAPI ~RtpDemuxer();

    // symbol:
    // ?DescribePacket@RtpDemuxer@webrtc@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVRtpPacketReceived@2@@Z
    MCAPI static std::string DescribePacket(class webrtc::RtpPacketReceived const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddSsrcSinkBinding@RtpDemuxer@webrtc@@AEAAXIPEAVRtpPacketSinkInterface@2@@Z
    MCAPI void AddSsrcSinkBinding(uint, class webrtc::RtpPacketSinkInterface*);

    // symbol: ?CriteriaWouldConflict@RtpDemuxer@webrtc@@AEBA_NAEBVRtpDemuxerCriteria@2@@Z
    MCAPI bool CriteriaWouldConflict(class webrtc::RtpDemuxerCriteria const&) const;

    // symbol: ?RefreshKnownMids@RtpDemuxer@webrtc@@AEAAXXZ
    MCAPI void RefreshKnownMids();

    // symbol: ?ResolveSink@RtpDemuxer@webrtc@@AEAAPEAVRtpPacketSinkInterface@2@AEBVRtpPacketReceived@2@@Z
    MCAPI class webrtc::RtpPacketSinkInterface* ResolveSink(class webrtc::RtpPacketReceived const&);

    // symbol:
    // ?ResolveSinkByMid@RtpDemuxer@webrtc@@AEAAPEAVRtpPacketSinkInterface@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@I@Z
    MCAPI class webrtc::RtpPacketSinkInterface* ResolveSinkByMid(std::string_view, uint);

    // symbol:
    // ?ResolveSinkByMidRsid@RtpDemuxer@webrtc@@AEAAPEAVRtpPacketSinkInterface@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0I@Z
    MCAPI class webrtc::RtpPacketSinkInterface* ResolveSinkByMidRsid(std::string_view, std::string_view, uint);

    // symbol: ?ResolveSinkByPayloadType@RtpDemuxer@webrtc@@AEAAPEAVRtpPacketSinkInterface@2@EI@Z
    MCAPI class webrtc::RtpPacketSinkInterface* ResolveSinkByPayloadType(uchar, uint);

    // symbol:
    // ?ResolveSinkByRsid@RtpDemuxer@webrtc@@AEAAPEAVRtpPacketSinkInterface@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@I@Z
    MCAPI class webrtc::RtpPacketSinkInterface* ResolveSinkByRsid(std::string_view, uint);

    // NOLINTEND
};

}; // namespace webrtc
