#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StreamFeedbackProvider.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamFeedbackObserver; }
namespace webrtc { class StreamFeedbackProvider; }
namespace webrtc { struct RtpPacketSendInfo; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class TransportFeedbackDemuxer : public ::webrtc::StreamFeedbackProvider {
public:
    // prevent constructor by default
    TransportFeedbackDemuxer& operator=(TransportFeedbackDemuxer const&);
    TransportFeedbackDemuxer(TransportFeedbackDemuxer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?RegisterStreamFeedbackObserver@TransportFeedbackDemuxer@webrtc@@UEAAXV?$vector@IV?$allocator@I@std@@@std@@PEAVStreamFeedbackObserver@2@@Z
    virtual void RegisterStreamFeedbackObserver(std::vector<uint>, class webrtc::StreamFeedbackObserver*);

    // vIndex: 1, symbol:
    // ?DeRegisterStreamFeedbackObserver@TransportFeedbackDemuxer@webrtc@@UEAAXPEAVStreamFeedbackObserver@2@@Z
    virtual void DeRegisterStreamFeedbackObserver(class webrtc::StreamFeedbackObserver*);

    // vIndex: 2, symbol: ??1TransportFeedbackDemuxer@webrtc@@UEAA@XZ
    virtual ~TransportFeedbackDemuxer();

    // symbol: ?AddPacket@TransportFeedbackDemuxer@webrtc@@QEAAXAEBURtpPacketSendInfo@2@@Z
    MCAPI void AddPacket(struct webrtc::RtpPacketSendInfo const&);

    // symbol: ?OnTransportFeedback@TransportFeedbackDemuxer@webrtc@@QEAAXAEBVTransportFeedback@rtcp@2@@Z
    MCAPI void OnTransportFeedback(class webrtc::rtcp::TransportFeedback const&);

    // symbol: ??0TransportFeedbackDemuxer@webrtc@@QEAA@XZ
    MCAPI TransportFeedbackDemuxer();

    // NOLINTEND
};

}; // namespace webrtc
