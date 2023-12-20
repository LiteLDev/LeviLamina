#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct CandidatePairChangeEvent; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpTransceiverInterface; }
// clang-format on

namespace webrtc {

class PeerConnectionObserver {
public:
    // prevent constructor by default
    PeerConnectionObserver& operator=(PeerConnectionObserver const&);
    PeerConnectionObserver(PeerConnectionObserver const&);
    PeerConnectionObserver();

public:
    // NOLINTBEGIN
    // symbol: ?OnAddStream@PeerConnectionObserver@webrtc@@UEAAXV?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@Z
    MCVAPI void OnAddStream(class rtc::scoped_refptr<class webrtc::MediaStreamInterface>);

    // symbol:
    // ?OnAddTrack@PeerConnectionObserver@webrtc@@UEAAXV?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@AEBV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@@Z
    MCVAPI void
    OnAddTrack(class rtc::scoped_refptr<class webrtc::RtpReceiverInterface>, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> const&);

    // symbol:
    // ?OnIceCandidateError@PeerConnectionObserver@webrtc@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H0H0@Z
    MCVAPI void OnIceCandidateError(std::string const&, int, std::string const&, int, std::string const&);

    // symbol:
    // ?OnIceSelectedCandidatePairChanged@PeerConnectionObserver@webrtc@@UEAAXAEBUCandidatePairChangeEvent@cricket@@@Z
    MCVAPI void OnIceSelectedCandidatePairChanged(struct cricket::CandidatePairChangeEvent const&);

    // symbol: ?OnInterestingUsage@PeerConnectionObserver@webrtc@@UEAAXH@Z
    MCVAPI void OnInterestingUsage(int);

    // symbol: ?OnNegotiationNeededEvent@PeerConnectionObserver@webrtc@@UEAAXI@Z
    MCVAPI void OnNegotiationNeededEvent(uint);

    // symbol:
    // ?OnRemoveStream@PeerConnectionObserver@webrtc@@UEAAXV?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@Z
    MCVAPI void OnRemoveStream(class rtc::scoped_refptr<class webrtc::MediaStreamInterface>);

    // symbol:
    // ?OnRemoveTrack@PeerConnectionObserver@webrtc@@UEAAXV?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@@Z
    MCVAPI void OnRemoveTrack(class rtc::scoped_refptr<class webrtc::RtpReceiverInterface>);

    // symbol:
    // ?OnStandardizedIceConnectionChange@PeerConnectionObserver@webrtc@@UEAAXW4IceConnectionState@PeerConnectionInterface@2@@Z
    MCVAPI void OnStandardizedIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    // symbol: ?OnTrack@PeerConnectionObserver@webrtc@@UEAAXV?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@Z
    MCVAPI void OnTrack(class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>);

    // NOLINTEND
};

}; // namespace webrtc
