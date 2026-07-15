#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { struct CandidatePairChangeEvent; }
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

    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState) = 0;

    virtual void OnIceCandidate(::webrtc::IceCandidate const*) = 0;

    virtual void OnIceCandidateError(::std::string const&, int, ::std::string const&, int, ::std::string const&);

    virtual void OnIceCandidatesRemoved(::std::vector<::webrtc::Candidate> const&);

    virtual void OnIceCandidateRemoved(::webrtc::IceCandidate const*);

    virtual void OnIceConnectionReceivingChange(bool);

    virtual void OnIceSelectedCandidatePairChanged(::webrtc::CandidatePairChangeEvent const&);

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
