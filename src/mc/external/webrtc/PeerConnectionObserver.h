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

    virtual void OnAddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    virtual void OnRemoveStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    virtual void OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface>) = 0;

    virtual void OnRenegotiationNeeded();

    virtual void OnNegotiationNeededEvent(uint event_id);

    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    virtual void OnStandardizedIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    virtual void OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState new_state);

    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state) = 0;

    virtual void OnIceCandidate(::webrtc::IceCandidateInterface const*) = 0;

    virtual void OnIceCandidateError(::std::string const&, int, ::std::string const&, int, ::std::string const&);

    virtual void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const& candidates);

    virtual void OnIceConnectionReceivingChange(bool receiving);

    virtual void OnIceSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const& event);

    virtual void OnAddTrack(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>                       receiver,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams
    );

    virtual void OnTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface> transceiver);

    virtual void OnRemoveTrack(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver);

    virtual void OnInterestingUsage(int usage_pattern);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnAddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    MCNAPI void $OnRemoveStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    MCNAPI void $OnRenegotiationNeeded();

    MCNAPI void $OnNegotiationNeededEvent(uint event_id);

    MCNAPI void $OnStandardizedIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCNAPI void $OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState new_state);

    MCNAPI void $OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI void $OnIceConnectionReceivingChange(bool receiving);

    MCNAPI void $OnIceSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const& event);

    MCNAPI void $OnAddTrack(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>                       receiver,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams
    );

    MCNAPI void $OnTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface> transceiver);

    MCNAPI void $OnRemoveTrack(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver);

    MCNAPI void $OnInterestingUsage(int usage_pattern);


    // NOLINTEND
};

} // namespace webrtc
