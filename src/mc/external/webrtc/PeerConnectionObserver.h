#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpTransceiverInterface; }
// clang-format on

namespace webrtc {

class PeerConnectionObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PeerConnectionObserver() = default;

    virtual void OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState) = 0;

    virtual void OnAddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>);

    virtual void OnRemoveStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>);

    virtual void OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface>) = 0;

    virtual void OnRenegotiationNeeded();

    virtual void OnNegotiationNeededEvent(uint);

    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    virtual void OnStandardizedIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    virtual void OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState);

    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state) = 0;

    virtual void OnIceCandidate(::webrtc::IceCandidateInterface const*) = 0;

    virtual void OnIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  error_code,
        ::std::string const& error_text
    );

    virtual void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const& candidates);

    virtual void OnIceConnectionReceivingChange(bool);

    virtual void OnIceSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const&);

    virtual void OnAddTrack(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&
    );

    virtual void OnTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>);

    virtual void OnRemoveTrack(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>);

    virtual void OnInterestingUsage(int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
